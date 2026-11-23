#!/usr/bin/env python3
"""The Snowy Summit, Delibird Isle (zone 6), second drawing. 

  --write  put it into data/layouts/.../canvas.txt (then: python3 tools/skald/holiday_kit.py --rebuild)
  --check  exit 1 if the canvas in the tree is not what this script writes
  --show   print the canvas with coordinates"""
import sys
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parent))
from kit import Canvas

W, H = 44, 40
c = Canvas(W, H)
# ================= heights: the drunken forest (3), the stake field (4), the tarn terrace (5), the peak (6)
c.level(2, 28, 38, 39, 3)
c.level(4, 7, 37, 27, 4)
c.level(8, 5, 34, 17, 5); c.level(12, 4, 31, 17, 5)
c.level(16, 2, 27, 8, 6)

# ================= the brook: out of the tarn, over two falls, south to the village
c.fill(26, 11, 32, 14, 'r'); c.put(26, 11, ','); c.put(32, 11, ','); c.put(26, 14, ',')
c.row(31, 15, 'rr'); c.row(31, 16, 'rr')
c.row(31, 17, '^^'); c.row(31, 18, 'vv'); c.row(31, 19, 'uu')
for y in range(20, 27):
    c.row(31, y, 'rr')
c.row(31, 27, '^^'); c.row(31, 28, 'vv'); c.row(31, 29, 'uu')
for y in range(30, 40):
    c.row(31, y, 'rr')
c.put(29, 12, '0'); c.row(31, 33, 'jj')

# ================= the trail and its three stairs
c.fill(15, 34, 16, 39, 'p'); c.fill(9, 33, 16, 34, 'p'); c.fill(9, 29, 10, 32, 'p')
c.row(9, 27, '=='); c.row(9, 28, '==')
c.fill(9, 25, 10, 26, 'p'); c.fill(9, 24, 24, 25, 'p'); c.fill(23, 19, 24, 23, 'p')
c.row(23, 17, '=='); c.row(23, 18, '==')
c.fill(23, 15, 24, 16, 'p'); c.fill(21, 10, 22, 14, 'p'); c.fill(21, 14, 24, 14, 'p')
c.row(21, 8, '=='); c.row(21, 9, '==')
c.row(31, 25, 'jj'); c.fill(25, 25, 30, 25, 'p'); c.fill(33, 25, 36, 25, 'p')

# ================= the peak: the view, the upper cairn, the last snow
c.fill(18, 3, 19, 4, 'i'); c.fill(24, 4, 26, 5, 'i'); c.fill(18, 6, 19, 7, 'i')
c.put(22, 3, 'S'); c.put(25, 6, '&'); c.put(24, 6, 'N'); c.put(20, 5, 'k')

# ================= the tarn terrace: Ingrid's hut, the top stake, snow in the hollows
c.stamp(11, 9, 'W')
c.fill(12, 13, 12, 14, 'p'); c.fill(12, 14, 20, 14, 'p')
c.put(17, 13, '1')
c.fill(9, 6, 10, 7, 'i'); c.fill(12, 5, 14, 6, 'i'); c.fill(29, 5, 30, 6, 'i'); c.fill(32, 7, 33, 8, 'i')
c.fill(9, 15, 10, 16, 'i'); c.fill(18, 11, 19, 12, 'i'); c.fill(14, 15, 15, 16, 'i'); c.fill(27, 15, 28, 16, 'i')
c.fill(17, 15, 19, 16, 'g'); c.fill(28, 8, 30, 9, 'g'); c.fill(15, 11, 16, 12, 'g'); c.put(15, 8, 'k'); c.put(31, 10, 'k')
c.put(9, 9, 'k'); c.put(33, 11, 'k'); c.put(25, 10, 'N'); c.put(10, 12, 'f'); c.put(33, 14, 'f'); c.put(20, 16, 'B')

# ================= the stake field: the stakes, the stake-field pond, the cairn
for y in (19, 21, 23):
    c.put(17, y, '1')
c.put(18, 23, 'S')
c.stamp(6, 20, 'U')
c.fill(5, 9, 6, 10, 'i')                                    # the thirteenth patch, on the west shoulder
c.put(13, 21, '&'); c.put(14, 21, 'N')
c.row(5, 13, 'tt'); c.row(5, 14, 'ttt'); c.row(5, 15, 'tat'); c.row(5, 16, 'tt'); c.row(5, 17, 't')
c.row(35, 11, 'tt'); c.row(35, 12, 'at'); c.row(35, 13, 'tt'); c.row(36, 14, 't'); c.fill(35, 8, 36, 9, 'i')
c.fill(26, 20, 28, 22, 'g'); c.fill(19, 20, 21, 21, 'g'); c.fill(11, 19, 12, 20, 'g'); c.fill(34, 20, 36, 21, 'g')
c.put(5, 19, 'B'); c.put(5, 24, 'k'); c.put(7, 26, 'f'); c.put(12, 23, 'f'); c.put(20, 23, 'B'); c.put(27, 19, 'k')
c.put(29, 26, 'B'); c.put(34, 23, 'f'); c.put(36, 26, 'B'); c.put(36, 17, 'k'); c.put(15, 19, 'f'); c.put(22, 26, 'f')
c.put(14, 26, 'B'); c.put(26, 26, 'f'); c.put(34, 26, 'f'); c.put(5, 26, 'f')

# ================= the drunken forest: the slump pond, the leaning trees
c.fill(18, 30, 29, 35, ',')
c.stamp(22, 31, 'U')
c.put(20, 30, '<'); c.put(19, 32, '<'); c.put(20, 34, '<'); c.put(26, 30, '>'); c.put(27, 32, '>'); c.put(26, 34, '>')
c.put(23, 30, '>'); c.put(18, 34, '<'); c.put(29, 34, '>')
c.fill(24, 35, 26, 35, ','); c.put(25, 34, 'S'); c.put(21, 35, 'f'); c.put(28, 31, 'f')
c.fill(17, 36, 17, 38, ','); c.put(17, 36, 'N')
c.fill(11, 29, 14, 32, ','); c.put(12, 30, '<'); c.put(14, 31, '>'); c.put(13, 29, 'f')
c.fill(33, 30, 37, 33, ','); c.row(34, 30, 'ttt'); c.row(33, 31, 'tttt'); c.row(34, 32, 'tat'); c.row(34, 33, 'tt')
c.fill(4, 29, 8, 32, ','); c.row(5, 30, 'ttt'); c.row(4, 31, 'ttat'); c.row(5, 32, 'tt'); c.put(8, 29, 'k')
c.put(11, 35, ','); c.put(12, 35, '>'); c.put(13, 36, '<')

# ================= the wood
c.firs(2, 28, 39, 40)

title = """The Snowy Summit, Delibird Isle (zone 6), second drawing (composed by a placement script, then this file is the source).
Three steps above the village's forest shelf: the drunken forest and its slump pond, the stake field with its pond and
cairn, the tarn terrace with the watcher's hut and the top stake, and the peak. Thirteen patches of snow, counted.
The brook leaves the tarn and falls twice. The north face is only a rim over the strait. South edge: the Holiday
Village (trail x 15-16, brook x 31-32)."""
c.finish('ParcelDelibirdSummit', 'general__leob_lilycove', title, sys.argv)
