"""Minimal C parsing for preprocessed engine data.

The extractor runs the project's real C preprocessor over the engine's own
translation units (src/pokemon.c, src/move.c, ...), so every config switch,
#if guard and macro has already been resolved exactly as the ROM build would
resolve it. What is left is plain C: designated initializers, compound
literals and constant expressions. This module tokenizes that text, parses
brace initializers into a small tree, and evaluates constant expressions with
C semantics (integer division truncates toward zero, casts to integer types
truncate, ternaries, shifts, logical operators).

Nothing here tries to be a general C parser. It handles the subset that the
engine's data tables use, and anything it cannot evaluate is returned as a
Symbol / Call / raw token list so callers can decide what to do with it.
"""

import re

# ---------------------------------------------------------------- tokens ----

_TOKEN_RE = re.compile(
    r"""
    (?P<ws>\s+)
  | (?P<str>"(?:\\.|[^"\\])*")
  | (?P<chr>'(?:\\.|[^'\\])+')
  | (?P<num>(?:0[xX][0-9a-fA-F]+|(?:\d+\.\d*|\.\d+|\d+)(?:[eE][+-]?\d+)?)[uUlLfF]*)
  | (?P<id>[A-Za-z_]\w*)
  | (?P<op><<=|>>=|\.\.\.|->|\+\+|--|<<|>>|<=|>=|==|!=|&&|\|\||[-+*/%&|^!~<>=?:;,.(){}\[\]#])
    """,
    re.VERBOSE,
)


class Tok:
    __slots__ = ("kind", "val")

    def __init__(self, kind, val):
        self.kind = kind
        self.val = val

    def __repr__(self):
        return "%s:%s" % (self.kind, self.val)


def strip_line_markers(text):
    """Drop `# 12 "file.h"` markers that cpp leaves in its output."""
    return re.sub(r"^#.*$", "", text, flags=re.M)


def tokenize(text):
    out = []
    pos = 0
    n = len(text)
    while pos < n:
        m = _TOKEN_RE.match(text, pos)
        if not m:
            raise ValueError("cannot tokenize near: %r" % text[pos:pos + 40])
        pos = m.end()
        kind = m.lastgroup
        if kind == "ws":
            continue
        out.append(Tok(kind, m.group(kind)))
    return out


_ESCAPES = {"n": "\n", "t": "\t", "r": "\r", "\\": "\\", '"': '"', "'": "'", "0": "\0"}


def unquote(lit):
    body = lit[1:-1]
    return re.sub(r"\\(.)", lambda m: _ESCAPES.get(m.group(1), m.group(1)), body)


# -------------------------------------------------------- value classes ----

class Symbol:
    """An identifier that has no numeric value in the environment."""
    __slots__ = ("name",)

    def __init__(self, name):
        self.name = name

    def __repr__(self):
        return "Symbol(%s)" % self.name

    def __eq__(self, other):
        return isinstance(other, Symbol) and other.name == self.name

    def __hash__(self):
        return hash(self.name)


class Call:
    __slots__ = ("name", "args")

    def __init__(self, name, args):
        self.name = name
        self.args = args

    def __repr__(self):
        return "Call(%s, %r)" % (self.name, self.args)


class Brace:
    """A `{ ... }` initializer: an ordered list of (designator, value).

    designator is None (positional), ("field", name) or ("index", value).
    value is a Brace or an Expr.
    """
    __slots__ = ("items",)

    def __init__(self, items):
        self.items = items

    def field(self, name, default=None):
        for d, v in self.items:
            if d and d[0] == "field" and d[1] == name:
                return v
        return default

    def positional(self):
        return [v for d, v in self.items if d is None]

    def fields(self):
        return {d[1]: v for d, v in self.items if d and d[0] == "field"}

    def __repr__(self):
        return "Brace(%r)" % self.items


class Expr:
    """An unevaluated expression (list of tokens)."""
    __slots__ = ("toks",)

    def __init__(self, toks):
        self.toks = toks

    def __repr__(self):
        return "Expr(%s)" % " ".join(t.val for t in self.toks)

    def text(self):
        return " ".join(t.val for t in self.toks)


# ------------------------------------------------------ initializer parse ----

def find_initializer(text, name):
    """Return the text of the brace initializer assigned to `name`.

    Matches `name[...] = {` or `name = {` at any position and returns the
    balanced `{...}` text (string and char literals respected).
    """
    m = re.search(r"\b%s\s*(?:\[[^\]=;]*\]\s*)*=\s*\{" % re.escape(name), text)
    if not m:
        return None
    start = m.end() - 1
    return text[start:_match_brace(text, start) + 1]


def find_all_initializers(text, name_regex):
    """Yield (name, initializer_text) for every `NAME[...] = {...}` match."""
    pat = re.compile(r"\b(%s)\s*(?:\[[^\]=;]*\]\s*)*=\s*\{" % name_regex)
    pos = 0
    while True:
        m = pat.search(text, pos)
        if not m:
            return
        start = m.end() - 1
        end = _match_brace(text, start)
        yield m.group(1), text[start:end + 1]
        pos = end + 1


def _match_brace(text, start):
    depth = 0
    i = start
    n = len(text)
    while i < n:
        c = text[i]
        if c == '"' or c == "'":
            q = c
            i += 1
            while i < n and text[i] != q:
                if text[i] == "\\":
                    i += 1
                i += 1
        elif c == "{":
            depth += 1
        elif c == "}":
            depth -= 1
            if depth == 0:
                return i
        i += 1
    raise ValueError("unbalanced braces")


def parse_initializer(text):
    toks = tokenize(strip_line_markers(text))
    node, pos = _parse_init(toks, 0)
    return node


def _parse_init(toks, pos):
    if toks[pos].val == "{":
        return _parse_brace(toks, pos)
    return _parse_expr_until(toks, pos)


def _parse_brace(toks, pos):
    assert toks[pos].val == "{"
    pos += 1
    items = []
    while toks[pos].val != "}":
        desig = None
        t = toks[pos]
        if t.val == "." and toks[pos + 1].kind == "id":
            # .field = value   (may chain: .a.b = ... is not used in our data)
            name = toks[pos + 1].val
            pos += 2
            while toks[pos].val == "." and toks[pos + 1].kind == "id":
                name += "." + toks[pos + 1].val
                pos += 2
            if toks[pos].val == "=":
                pos += 1
            desig = ("field", name)
        elif t.val == "[":
            # [index] = value   (find matching ])
            depth = 0
            j = pos
            while True:
                if toks[j].val == "[":
                    depth += 1
                elif toks[j].val == "]":
                    depth -= 1
                    if depth == 0:
                        break
                j += 1
            if j + 1 < len(toks) and toks[j + 1].val == "=":
                desig = ("index", Expr(toks[pos + 1:j]))
                pos = j + 2
        value, pos = _parse_init(toks, pos)
        items.append((desig, value))
        if toks[pos].val == ",":
            pos += 1
    return Brace(items), pos + 1


def _parse_expr_until(toks, pos):
    depth = 0
    start = pos
    while pos < len(toks):
        v = toks[pos].val
        if toks[pos].kind == "op":
            if v in "([{":
                depth += 1
            elif v in ")]}":
                if depth == 0:
                    break
                depth -= 1
            elif v == "," and depth == 0:
                break
        pos += 1
    return Expr(toks[start:pos]), pos


# ------------------------------------------------------------ evaluator ----

TYPE_WORDS = {
    "u8", "u16", "u32", "u64", "s8", "s16", "s32", "s64", "bool8", "bool16",
    "bool32", "uq4_12_t", "q4_12_t", "int", "unsigned", "signed", "char",
    "short", "long", "const", "volatile", "struct", "enum", "union", "float",
    "double", "void", "vu8", "vu16", "vu32", "uintptr_t", "size_t",
}


class EvalError(Exception):
    pass


class Evaluator:
    """Evaluate C constant expressions.

    env maps identifier -> number or callable(name) -> value; unknown
    identifiers evaluate to Symbol(name).
    """

    def __init__(self, env=None):
        self.env = env if env is not None else {}

    def eval(self, node):
        if isinstance(node, Expr):
            toks = node.toks
        elif isinstance(node, list):
            toks = node
        else:
            return node
        if not toks:
            return None
        self.toks = toks
        self.pos = 0
        v = self._ternary()
        if self.pos != len(self.toks):
            raise EvalError("trailing tokens in %s" % " ".join(t.val for t in toks))
        return v

    def try_int(self, node, default=None):
        try:
            v = self.eval(node)
        except (EvalError, IndexError, ZeroDivisionError, TypeError):
            return default
        if isinstance(v, bool):
            return int(v)
        if isinstance(v, (int, float)):
            return int(v)
        return default

    # -- recursive descent, lowest precedence first --
    def _peek(self):
        return self.toks[self.pos].val if self.pos < len(self.toks) else None

    def _take(self):
        t = self.toks[self.pos]
        self.pos += 1
        return t

    def _ternary(self):
        cond = self._binary(0)
        if self._peek() == "?":
            self._take()
            a = self._ternary()
            if self._take().val != ":":
                raise EvalError("expected :")
            b = self._ternary()
            c = _num(cond)
            return a if c else b
        return cond

    _PREC = [
        ["||"], ["&&"], ["|"], ["^"], ["&"], ["==", "!="],
        ["<", ">", "<=", ">="], ["<<", ">>"], ["+", "-"], ["*", "/", "%"],
    ]

    def _binary(self, level):
        if level == len(self._PREC):
            return self._unary()
        left = self._binary(level + 1)
        ops = self._PREC[level]
        while self._peek() in ops and self.toks[self.pos].kind == "op":
            op = self._take().val
            right = self._binary(level + 1)
            left = _apply(op, left, right)
        return left

    def _unary(self):
        v = self._peek()
        if v in ("-", "+", "!", "~") and self.toks[self.pos].kind == "op":
            self._take()
            x = self._unary()
            n = _num(x)
            if v == "-":
                return -n
            if v == "+":
                return n
            if v == "!":
                return int(not n)
            return ~int(n)
        if v == "&":  # address-of: keep the symbol
            self._take()
            return self._unary()
        if v == "sizeof":
            raise EvalError("sizeof")
        if v == "(" and self._looks_like_cast():
            return self._cast()
        return self._postfix()

    def _looks_like_cast(self):
        j = self.pos + 1
        saw = False
        while j < len(self.toks) and self.toks[j].val != ")":
            t = self.toks[j]
            if t.kind == "id":
                if t.val not in TYPE_WORDS and not (self.toks[j - 1].val in ("struct", "enum", "union")):
                    return False
                saw = True
            elif t.val not in ("*", "[", "]"):
                return False
            j += 1
        return saw

    def _cast(self):
        self._take()  # (
        type_toks = []
        while self._peek() != ")":
            type_toks.append(self._take().val)
        self._take()  # )
        if self._peek() == "{":  # compound literal
            node, end = _parse_brace(self.toks, self.pos)
            self.pos = end
            return node
        x = self._unary()
        is_ptr = "*" in type_toks or "[" in type_toks
        if not is_ptr and isinstance(x, float) and not ({"float", "double"} & set(type_toks)):
            return int(x)  # C truncation toward zero
        return x

    def _postfix(self):
        t = self._take()
        if t.kind == "num":
            return _parse_num(t.val)
        if t.kind == "chr":
            return ord(unquote(t.val)[0])
        if t.kind == "str":
            s = unquote(t.val)
            while self._peek() is not None and self.toks[self.pos].kind == "str":
                s += unquote(self._take().val)
            return s
        if t.val == "(":
            v = self._ternary()
            if self._take().val != ")":
                raise EvalError("expected )")
            return v
        if t.val == "{":
            node, end = _parse_brace(self.toks, self.pos - 1)
            self.pos = end
            return node
        if t.kind == "id":
            if self._peek() == "(":
                self._take()
                args = []
                while self._peek() != ")":
                    start = self.pos
                    depth = 0
                    while True:
                        p = self._peek()
                        if p is None:
                            raise EvalError("unterminated call")
                        if p in ("(", "[", "{"):
                            depth += 1
                        elif p in (")", "]", "}"):
                            if depth == 0:
                                break
                            depth -= 1
                        elif p == "," and depth == 0:
                            break
                        self.pos += 1
                    sub = Evaluator(self.env)
                    try:
                        args.append(sub.eval(self.toks[start:self.pos]))
                    except EvalError:
                        args.append(Expr(self.toks[start:self.pos]))
                    if self._peek() == ",":
                        self._take()
                self._take()
                if t.val == "_" and len(args) == 1:
                    return args[0]
                return Call(t.val, args)
            val = self.env.get(t.val)
            if val is None:
                return Symbol(t.val)
            return val
        raise EvalError("unexpected token %s" % t.val)


def _parse_num(s):
    s2 = s.rstrip("uUlLfF") if not s.lower().startswith("0x") else s.rstrip("uUlL")
    if s2.lower().startswith("0x"):
        return int(s2, 16)
    if any(c in s2 for c in ".eE"):
        return float(s2)
    if len(s2) > 1 and s2.startswith("0"):
        return int(s2, 8)
    return int(s2)


def _num(x):
    if isinstance(x, bool):
        return int(x)
    if isinstance(x, (int, float)):
        return x
    raise EvalError("not a number: %r" % (x,))


def _apply(op, a, b):
    a = _num(a)
    b = _num(b)
    if op == "*":
        return a * b
    if op == "/":
        if isinstance(a, float) or isinstance(b, float):
            return a / b
        q = abs(a) // abs(b)
        return q if (a >= 0) == (b >= 0) else -q
    if op == "%":
        if isinstance(a, float) or isinstance(b, float):
            raise EvalError("float %")
        r = abs(a) % abs(b)
        return r if a >= 0 else -r
    if op == "+":
        return a + b
    if op == "-":
        return a - b
    if op == "<<":
        return int(a) << int(b)
    if op == ">>":
        return int(a) >> int(b)
    if op == "<":
        return int(a < b)
    if op == ">":
        return int(a > b)
    if op == "<=":
        return int(a <= b)
    if op == ">=":
        return int(a >= b)
    if op == "==":
        return int(a == b)
    if op == "!=":
        return int(a != b)
    if op == "&":
        return int(a) & int(b)
    if op == "^":
        return int(a) ^ int(b)
    if op == "|":
        return int(a) | int(b)
    if op == "&&":
        return int(bool(a) and bool(b))
    if op == "||":
        return int(bool(a) or bool(b))
    raise EvalError("unknown op " + op)


# ------------------------------------------------------- macros & enums ----

_DEFINE_RE = re.compile(r"^#define\s+([A-Za-z_]\w*)(\(?)\s*(.*)$")


def parse_macro_dump(text):
    """Parse `cpp -dM` output into {name: body} for object-like macros."""
    out = {}
    for line in text.splitlines():
        m = _DEFINE_RE.match(line)
        if not m or m.group(2) == "(":
            continue
        out[m.group(1)] = m.group(3).strip()
    return out


class MacroEnv(dict):
    """Lazily evaluates object-like macro bodies on lookup."""

    def __init__(self, bodies, extra=None):
        super().__init__()
        self.bodies = bodies
        self.extra = extra or {}
        self._busy = set()
        self._miss = set()

    def get(self, name, default=None):
        if name in self:
            return self[name]
        if name in self.extra:
            return self.extra[name]
        if name in self._miss or name in self._busy or name not in self.bodies:
            return default
        self._busy.add(name)
        try:
            body = self.bodies[name]
            val = Evaluator(self).eval(tokenize(body)) if body else None
        except (EvalError, ValueError, IndexError, ZeroDivisionError, TypeError, RecursionError):
            val = None
        finally:
            self._busy.discard(name)
        if isinstance(val, (int, float)) and not isinstance(val, bool):
            self[name] = val
            return val
        self._miss.add(name)
        return default


def parse_enums(text, env):
    """Find every `enum [Name] { A, B = expr, ... }` and assign values.

    Values are written into env (so later enums can refer to earlier ones) and
    returned as {enum_name_or_None: [(member, value), ...]}.
    """
    text = strip_line_markers(text)
    result = {}
    for m in re.finditer(r"\benum\s+(\w+\s*)?(?::\s*\w+\s*)?\{", text):
        start = m.end() - 1
        try:
            end = _match_brace(text, start)
        except ValueError:
            continue
        body = text[start + 1:end]
        members = []
        nxt = 0
        for part in _split_top(body):
            part = part.strip()
            if not part:
                continue
            if "=" in part:
                name, expr = part.split("=", 1)
                name = name.strip()
                try:
                    v = Evaluator(env).eval(tokenize(expr))
                except (EvalError, ValueError, IndexError, ZeroDivisionError):
                    v = None
                if not isinstance(v, (int, float)):
                    v = None
            else:
                name, v = part, nxt
            if not re.match(r"^[A-Za-z_]\w*$", name):
                continue
            if v is None:
                nxt = 0
                continue
            v = int(v)
            members.append((name, v))
            env[name] = v
            nxt = v + 1
        result.setdefault((m.group(1) or "").strip() or None, []).extend(members)
    return result


def _split_top(body):
    parts, depth, cur = [], 0, []
    for c in body:
        if c in "([{":
            depth += 1
        elif c in ")]}":
            depth -= 1
        if c == "," and depth == 0:
            parts.append("".join(cur))
            cur = []
        else:
            cur.append(c)
    parts.append("".join(cur))
    return parts
