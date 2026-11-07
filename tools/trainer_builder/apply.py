#!/usr/bin/env python3
"""Apply a Trainer Builder bundle to this repo.

    python3 tools/trainer_builder/apply.py bundle.json            # preview (diff only)
    python3 tools/trainer_builder/apply.py bundle.json --write    # change the files

For every trainer in the bundle:
  * src/data/trainers.party: the block with the same ID and Difficulty (and
    the comment directly above it) is replaced; a new trainer is appended.
  * include/constants/opponents.h: IDs that aren't defined yet get the next
    numbers and TRAINERS_COUNT is raised. If that would pass
    MAX_TRAINERS_COUNT nothing is written: each trainer owns a save flag, so
    raising the maximum is a decision for you (see the note in opponents.h).
  * tools/trainer_builder/out/<ID>.pory: the battle script and text, ready to
    paste into the map's scripts.pory.

Before anything is written, the new trainers.party goes through the same
`cpp -traditional-cpp | trainerproc` pipeline the Makefile uses. If
trainerproc reports an error, nothing is written.
"""

import argparse
import difflib
import json
import os
import re
import subprocess
import sys
import tempfile

HERE = os.path.dirname(os.path.abspath(__file__))
DEFAULT_ROOT = os.path.abspath(os.path.join(HERE, "..", ".."))
PARTY = "src/data/trainers.party"
OPPONENTS = "include/constants/opponents.h"
CPPFLAGS = ["-traditional-cpp", "-iquote", "include", "-Wno-trigraphs", "-DMODERN=1", "-DTESTING=0", "-std=gnu17"]
HEADER_RE = re.compile(r"^===\s*([A-Za-z0-9_']+)\s*===\s*$")


class ApplyError(Exception):
    pass


# ------------------------------------------------------------ trainers.party ----

def split_blocks(text):
    """Split trainers.party into [(kind, key, text)] preserving every byte.

    kind is "pre" for text before the first trainer, else "trainer". A
    trainer block starts at a comment that ends on the line right above its
    === header (if any) and runs until the next block starts.
    """
    lines = text.splitlines(keepends=True)
    headers = [i for i, l in enumerate(lines) if HEADER_RE.match(l.rstrip("\n"))]
    starts = []
    for h in headers:
        s = h
        if h > 0 and lines[h - 1].rstrip().endswith("*/"):
            j = h - 1
            while j >= 0 and "/*" not in lines[j]:
                j -= 1
            if j >= 0:
                s = j
        starts.append(s)
    out = []
    first = starts[0] if starts else len(lines)
    if first:
        out.append(("pre", None, "".join(lines[:first])))
    for n, (s, h) in enumerate(zip(starts, headers)):
        end = starts[n + 1] if n + 1 < len(starts) else len(lines)
        body = lines[s:end]
        tid = HEADER_RE.match(lines[h].rstrip("\n")).group(1)
        diff = "Normal"
        for l in lines[h + 1:end]:
            if not l.strip():
                break
            m = re.match(r"^Difficulty\s*:\s*(\S+)", l)
            if m:
                diff = m.group(1)
        out.append(("trainer", (tid, normalize_difficulty(diff)), "".join(body)))
    return out


def normalize_difficulty(v):
    v = re.sub(r"^DIFFICULTY_", "", str(v or "Normal")).lower()
    return v[:1].upper() + v[1:]


def with_spacing(block):
    """A block ends with exactly one blank line so the next one starts cleanly."""
    return block.rstrip("\n") + "\n\n"


def merge_party(text, trainers):
    blocks = split_blocks(text)
    index = {b[1]: i for i, b in enumerate(blocks) if b[0] == "trainer"}
    replaced, added = [], []
    for t in trainers:
        key = (t["id"], normalize_difficulty(t.get("difficulty")))
        new = with_spacing(t["party"])
        if key in index:
            blocks[index[key]] = ("trainer", key, new)
            replaced.append(key)
        else:
            if blocks and not blocks[-1][2].endswith("\n\n"):
                k, kk, txt = blocks[-1]
                blocks[-1] = (k, kk, with_spacing(txt))
            blocks.append(("trainer", key, new))
            index[key] = len(blocks) - 1
            added.append(key)
    merged = "".join(b[2] for b in blocks).rstrip("\n") + "\n"
    return merged, replaced, added


# ------------------------------------------------------------- opponents.h ----

def merge_opponents(text, ids):
    defined = {m.group(1): int(m.group(2)) for m in re.finditer(r"^#define\s+(TRAINER_\w+)\s+(\d+)\s*$", text, re.M)}
    count_m = re.search(r"^(#define\s+TRAINERS_COUNT\s+)(\d+)(.*)$", text, re.M)
    max_m = re.search(r"^#define\s+MAX_TRAINERS_COUNT\s+(\d+)", text, re.M)
    if not count_m or not max_m:
        raise ApplyError("couldn't find TRAINERS_COUNT and MAX_TRAINERS_COUNT in " + OPPONENTS)
    count, maximum = int(count_m.group(2)), int(max_m.group(1))
    new = [i for i in dict.fromkeys(ids) if i not in defined]
    if not new:
        return text, [], count, maximum
    if count + len(new) > maximum:
        raise ApplyError(
            "%d new trainer IDs would make TRAINERS_COUNT %d, but MAX_TRAINERS_COUNT is %d.\n"
            "Each trainer uses one save flag. Raise MAX_TRAINERS_COUNT in %s (read the note above it\n"
            "about flag space) and run apply.py again." % (len(new), count + len(new), maximum, OPPONENTS))
    numbered = [(tid, count + k) for k, tid in enumerate(new)]
    # Insert after the highest-numbered existing #define.
    last = None
    for m in re.finditer(r"^#define\s+(TRAINER_\w+)\s+(\d+)\s*$", text, re.M):
        if m.group(1) not in ("TRAINERS_COUNT", "MAX_TRAINERS_COUNT") and (last is None or int(m.group(2)) >= int(last.group(2))):
            last = m
    width = len(last.group(0)) - len(last.group(2)) if last else 44
    defs = "".join("\n" + ("#define " + tid).ljust(width) + str(n) for tid, n in numbered)
    pos = last.end() if last else count_m.start()
    text = text[:pos] + defs + text[pos:]
    text = re.sub(r"^(#define\s+TRAINERS_COUNT\s+)(\d+)", lambda m: m.group(1) + str(count + len(new)), text, count=1, flags=re.M)
    return text, numbered, count + len(new), maximum


# ---------------------------------------------------------------- verify ----

def trainerproc_path(root):
    exe = os.path.join(root, "tools", "trainerproc", "trainerproc")
    if not os.path.exists(exe):
        subprocess.run(["make", "-C", os.path.join(root, "tools", "trainerproc")], check=True, capture_output=True)
    return exe


def verify(root, party_text, cpp="cpp"):
    """Run the Makefile's pipeline on party_text. Returns the generated C."""
    pre = subprocess.run([cpp, *CPPFLAGS, "-"], cwd=root, input=party_text.encode(), capture_output=True)
    if pre.returncode:
        raise ApplyError("cpp failed:\n" + pre.stderr.decode(errors="replace"))
    with tempfile.TemporaryDirectory() as d:
        out = os.path.join(d, "trainers.h")
        res = subprocess.run([trainerproc_path(root), "-o", out, "-i", PARTY, "-"], cwd=root, input=pre.stdout, capture_output=True)
        if res.returncode or res.stderr.strip():
            raise ApplyError("trainerproc rejected the new trainers.party:\n" + res.stderr.decode(errors="replace"))
        with open(out, encoding="utf-8") as f:
            return f.read()


# ------------------------------------------------------------------ main ----

def plan(root, bundle, cpp="cpp"):
    if bundle.get("kind") != "trainer-builder-bundle":
        raise ApplyError("this file isn't a Trainer Builder bundle (copy it from Project & data > Copy apply bundle)")
    trainers = bundle.get("trainers") or []
    if not trainers:
        raise ApplyError("the bundle has no trainers")
    for t in trainers:
        if not re.match(r"^[A-Za-z0-9_]+$", t.get("id") or ""):
            raise ApplyError("invalid trainer ID %r" % t.get("id"))
        heads = [HEADER_RE.match(l) for l in (t.get("party") or "").splitlines()]
        heads = [m.group(1) for m in heads if m]
        if heads != [t["id"]]:
            raise ApplyError("the party text for %s must contain exactly one '=== %s ===' header" % (t["id"], t["id"]))
    with open(os.path.join(root, PARTY), encoding="utf-8") as f:
        party_old = f.read()
    with open(os.path.join(root, OPPONENTS), encoding="utf-8") as f:
        opp_old = f.read()
    party_new, replaced, added = merge_party(party_old, trainers)
    opp_new, numbered, count, maximum = merge_opponents(opp_old, [t["id"] for t in trainers])
    generated = verify(root, party_new, cpp)
    for t in trainers:
        if "[%s]" % t["id"] not in generated and "[%s] =" % t["id"] not in generated:
            raise ApplyError("trainerproc output is missing %s" % t["id"])
    return {
        "party": (party_old, party_new), "opponents": (opp_old, opp_new), "replaced": replaced, "added": added,
        "numbered": numbered, "count": count, "max": maximum, "trainers": trainers,
    }


def diff(old, new, name):
    return "".join(difflib.unified_diff(old.splitlines(True), new.splitlines(True), "a/" + name, "b/" + name, n=2))


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("bundle", help="bundle.json copied from Trainer Builder")
    ap.add_argument("--write", action="store_true", help="change the files (default: preview only)")
    ap.add_argument("--root", default=DEFAULT_ROOT)
    ap.add_argument("--out", default=os.path.join(HERE, "out"), help="where battle scripts are written")
    ap.add_argument("--cpp", default=os.environ.get("CPP", "cpp"))
    ap.add_argument("--quiet", action="store_true", help="don't print the diff")
    args = ap.parse_args()
    try:
        with open(args.bundle, encoding="utf-8") as f:
            bundle = json.load(f)
        p = plan(os.path.abspath(args.root), bundle, args.cpp)
    except (ApplyError, ValueError, OSError, subprocess.CalledProcessError) as e:
        print("apply.py: nothing written.\n" + str(e), file=sys.stderr)
        return 1
    if not args.quiet:
        sys.stdout.write(diff(*p["party"], PARTY))
        sys.stdout.write(diff(*p["opponents"], OPPONENTS))
    print("\ntrainerproc accepts the result.")
    print("trainers.party: %d replaced, %d added" % (len(p["replaced"]), len(p["added"])))
    for tid, n in p["numbered"]:
        print("opponents.h: #define %s %d" % (tid, n))
    print("TRAINERS_COUNT %d of MAX_TRAINERS_COUNT %d" % (p["count"], p["max"]))
    if not args.write:
        print("\nPreview only. Run again with --write to change the files.")
        return 0
    root = os.path.abspath(args.root)
    with open(os.path.join(root, PARTY), "w", encoding="utf-8") as f:
        f.write(p["party"][1])
    with open(os.path.join(root, OPPONENTS), "w", encoding="utf-8") as f:
        f.write(p["opponents"][1])
    os.makedirs(args.out, exist_ok=True)
    for t in p["trainers"]:
        if t.get("poryscript"):
            name = t["id"] + ("" if normalize_difficulty(t.get("difficulty")) == "Normal" else "_" + normalize_difficulty(t["difficulty"]))
            with open(os.path.join(args.out, name + ".pory"), "w", encoding="utf-8") as f:
                f.write(t["poryscript"])
    print("\nWrote %s and %s. Battle scripts are in %s; paste each into its map's scripts.pory." %
          (PARTY, OPPONENTS, os.path.relpath(args.out, root)))
    print("Review with: git diff")
    return 0


if __name__ == "__main__":
    sys.exit(main())
