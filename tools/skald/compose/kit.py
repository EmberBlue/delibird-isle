"""Shared helpers for composing a canvas by placement script (tools/skald/compose/*.py).

A big hand-drawn map is easier to lay out with coordinates than with a text editor: a script
places levels, paths, stamps and props and writes data/layouts/<Map>/canvas.txt, which stays
the source the game is built from (tools/skald/draw.py). A Canvas keeps the characters, the
levels block and the over block; stamps claim their cells, so nothing is drawn over a building
by accident, and firs() fills a wood on the two-cell lattice wherever four plain cells are free."""
from pathlib import Path

ROOT = Path(__file__).resolve().parents[3]
STAMPS = {'T': (2, 2), 'H': (4, 4), 'R': (4, 4), 'Y': (4, 4), 'W': (4, 4), 'M': (6, 5), 'G': (5, 5), 'K': (5, 6),
          'C': (3, 2), 'U': (3, 3), 'P': (3, 3), 'O': (2, 2), 'Q': (3, 1), 'V': (2, 1), 'E': (2, 3), 'A': (3, 3), 'e': (2, 2)}
GROUND = set('.,')


class Canvas:
    def __init__(self, w, h, sea='~', stamps=None):
        self.W, self.H = w, h
        self.sizes = dict(STAMPS, **(stamps or {}))       # a legend's own stamps: {letter: (w, h)}
        self.g = [[sea] * w for _ in range(h)]
        self.lv = [[0] * w for _ in range(h)]
        self.ov = [['.'] * w for _ in range(h)]
        self.own = [[None] * w for _ in range(h)]

    # --- heights
    def level(self, x0, y0, x1, y1, h, ch='.'):
        for y in range(y0, y1 + 1):
            for x in range(x0, x1 + 1):
                self.lv[y][x] = h
                if self.own[y][x] is None:
                    self.g[y][x] = ch

    # --- single cells
    def put(self, x, y, ch, force=False):
        assert 0 <= x < self.W and 0 <= y < self.H, (x, y, ch)
        if self.own[y][x] is not None and not force:
            raise SystemExit(f"{ch!r} at {x},{y} would overwrite stamp {self.own[y][x]!r}")
        self.g[y][x] = ch

    def fill(self, x0, y0, x1, y1, ch):
        for y in range(y0, y1 + 1):
            for x in range(x0, x1 + 1):
                self.put(x, y, ch)

    def row(self, x, y, s):
        for i, ch in enumerate(s):
            if ch != ' ':
                self.put(x + i, y, ch)

    def only(self, x, y, ch, on):
        """put ch only where the cell currently holds one of `on`"""
        if self.own[y][x] is None and self.g[y][x] in on:
            self.g[y][x] = ch

    # --- stamps
    def stamp(self, x, y, ch):
        w, h = self.sizes[ch]
        for dy in range(h):
            for dx in range(w):
                xx, yy = x + dx, y + dy
                assert 0 <= xx < self.W and 0 <= yy < self.H, (ch, x, y)
                if self.own[yy][xx] is not None:
                    raise SystemExit(f"stamp {ch!r} at {x},{y} overlaps {self.own[yy][xx]!r} at {xx},{yy}")
                self.own[yy][xx] = (ch, x, y)
                self.g[yy][xx] = '#'
        self.g[y][x] = ch

    def firs(self, x0, y0, x1, y1, ox=0, oy=0, on='.'):
        """big firs on a two-cell lattice wherever all four cells are plain ground at one height"""
        for y in range(y0 + oy, y1, 2):
            for x in range(x0 + ox, x1, 2):
                cells = [(x + dx, y + dy) for dy in (0, 1) for dx in (0, 1)]
                if all(0 <= cx < self.W and 0 <= cy < self.H and self.own[cy][cx] is None and self.g[cy][cx] in on
                       and self.lv[cy][cx] == self.lv[y][x] for cx, cy in cells):
                    # keep off the outermost cells of a level (they become cliff)
                    if all(self._inner(cx, cy) for cx, cy in cells):
                        self.stamp(x, y, 'T')

    def _inner(self, x, y):
        h = self.lv[y][x]
        for dx in (-1, 0, 1):
            for dy in (-1, 0, 1):
                xx, yy = x + dx, y + dy
                if 0 <= xx < self.W and 0 <= yy < self.H and self.lv[yy][xx] < h:
                    return False
        return True

    def over(self, x0, x1, y, ch):
        for x in range(x0, x1 + 1):
            self.ov[y][x] = ch

    # --- output
    def text(self, legend, title):
        head = (f"legend {legend}\nsize {self.W} {self.H}\n" + ''.join(f"# {l}\n" for l in title.splitlines())
                + ''.join(l + "\n" for l in getattr(self, "header", [])))      # a canvas's own "tile X id col elev" lines
        body = [head + '---'] + [''.join(r) for r in self.g] + ['--- levels'] + [''.join(str(v) for v in r) for r in self.lv]
        if any(c != '.' for r in self.ov for c in r):
            body += ['--- over'] + [''.join(r) for r in self.ov]
        return chr(10).join(body) + chr(10)

    def write(self, layout, legend, title):
        p = ROOT / 'data/layouts' / layout / 'canvas.txt'
        p.parent.mkdir(parents=True, exist_ok=True)
        p.write_text(self.text(legend, title))

    def finish(self, layout, legend, title, argv):
        """--write: put the canvas in place. --check: exit 1 if the canvas in the tree is not this one
        (it was edited by hand since: fold the edit into the script, or stop using the script). --show: print it."""
        p = ROOT / 'data/layouts' / layout / 'canvas.txt'
        if '--write' in argv:
            self.write(layout, legend, title)
            how = ("python3 tools/skald/holiday_kit.py --rebuild" if legend == "general__leob_lilycove"
                   else "python3 tools/skald/hide_kit.py --rebuild" if legend == "general__leob_petalburg"
                   else "python3 tools/skald/breakwater_kit.py --rebuild" if legend == "general__slateport"
                   else f"python3 tools/skald/draw.py data/layouts/{layout}/canvas.txt")
            print(f"{layout}: canvas written; draw it: {how}")
        if '--show' in argv:
            self.show()
        if '--check' in argv:
            same = p.exists() and p.read_text() == self.text(legend, title)
            print(f"{layout}: canvas {'matches' if same else 'DIFFERS from'} its placement script")
            raise SystemExit(0 if same else 1)

    def show(self):
        print('    ' + ''.join(str(x // 10) for x in range(self.W)))
        print('    ' + ''.join(str(x % 10) for x in range(self.W)))
        for y, r in enumerate(self.g):
            print(f'{y:3d} ' + ''.join(r))
