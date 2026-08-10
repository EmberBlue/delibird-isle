#!/usr/bin/env python3
"""Delibird Isle holiday village -- HAND-DRAWN, tile by tile.

The map IS the drawing below: 30x26, every character a deliberate tile.
Uppercase anchors mark scripted entities; their coordinates are extracted and
printed so map.json / warps / heal locations follow the drawing, never the
other way round. Johto/Azalea tilesets, picks behavior-verified.

Legend: ~ sea(surf)  b beach  . grass  t tallgrass  f flowers  P path  M mud
        T tree  F fence  Y sign  1..6 cottage(roof l/m/r, wall win/door/win)
        R/r rock  C cave arch
Anchors (walkable): E elder  D delibird  G giver  I ilex  K keeper  v reveler
        s stringer  o folder  W hutkeeper  V relief  H fisher(Tomas)
        A sailor  * ferry+heal  x cavern-exit  m slump-sign  n summit-sign
        i itemA  j itemB  B banner
"""
import struct

ROWS = [
"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~",  # 0
"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~",  # 1
"~~TTTTTTTTTTTTTTTTTTTTTTTTTT~~",  # 2
"~~T....RCr....t.....Yn..123T~~",  # 3  summit shelf: cave, grass, sign, cottage
"~~T.i..RxR....tt........456T~~",  # 4
"~~TTTTTTTP.PTTTTTTTTTTTTTTTT~~",  # 5  pinch: two 1-wide gaps down
"~~T123..P...P..123....T..t.T~~",  # 6  upper lane: two cottages
"~~T456..P.s.P..456....T.tt.T~~",  # 7  stringer on the lane
"~~TP.PPPP...PPPP.PPPP.T..t.T~~",  # 8  the high street
"~~TP.FFFFFGFFFFF..123.TTTTT~~ ",  # 9  square north fence, giver at gate
"~~TP.F.D...I..F...456......T~~",  # 10 delibird+ilex inside
"~~TPBF..K.....F.....o....t.T~~",  # 11 keeper inside, folder east lane
"~~TP.FFFFvFFFFF.PPPP.....t.T~~",  # 12 south gate, reveler at it
"~~TP....P.......P..........T~~",  # 13
"~~T123..PPPP..P.P.123......T~~",  # 14 elder's cottage / east cottage
"~~T456E.P..P..PPP.456......T~~",  # 15 elder beside her door
"~~TP.PPPP..PP..P..P.V......T~~",  # 16 relief villager on the lane
"~~TP123.........MMMMm......T~~",  # 17 slump cabin on mud, its sign
"~~TP456.W.......M123M...bbbT~~",  # 18 warming hut keeper at his door
"~~T.PPPPP.......M456M..bbHbT~~",  # 19 Tomas on the east beach
"~~T....P.....P..MMMMM.bbbjbT~~",  # 20 itemB in the cove
"~~TTTTP.PPPPP.PTTTTTTTbbbbbT~~",  # 21 tree pinch to the shore
"~~bbbbPPP*PPPPbbbbbbbbbbbbb~~ ",  # 22 the mooring shore, ferry lands at *
"~~bbbbbbbAbbbbbbbbbbbbbbbbb~~ ",  # 23 sailor on the spit
"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~",  # 24
"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~",  # 25
]
W,H = 30,26

# tile words (behavior-verified johto/azalea picks; see skald-verify)
GRASS,FLW,TALL,TREE,SIGN,FENCE = 1,4,10,36,2,238
PATH,MUD,BEACH,SEA = 227,227,227,265
RA,RB,CAVE = 686,687,694
ROOF=(657,658,659); WALL=(665,664,666)
def wq(m,c,e): return (e<<12)|(c<<10)|m
WALKC={'.':GRASS,'t':TALL,'f':FLW,'P':PATH,'M':MUD,'b':BEACH}
BLOCKC={'T':TREE,'F':FENCE,'Y':SIGN,'R':RA,'r':RB,'C':CAVE,
        '1':ROOF[0],'2':ROOF[1],'3':ROOF[2],'4':WALL[0],'5':WALL[1],'6':WALL[2]}
ANCH="EDGIKvsoWVHA*xmni jB".replace(" ","")

assert len(ROWS)==H
for y,row in enumerate(ROWS):
    assert len(row.rstrip())<=W and len(row.rstrip())>=W-1, f"row {y} width {len(row)}"
grid=[[wq(SEA,0,1)]*W for _ in range(H)]
anchors={}
for y,row in enumerate(ROWS):
    row=(row.rstrip()+"~"*W)[:W]
    for x,ch in enumerate(row):
        if ch=='~': grid[y][x]=wq(SEA,0,1)
        elif ch in WALKC: grid[y][x]=wq(WALKC[ch],0,3)
        elif ch in BLOCKC: grid[y][x]=wq(BLOCKC[ch],1,0)
        elif ch in ANCH:
            grid[y][x]=wq(PATH if ch in "*AsoKvGIDB" else GRASS,0,3)
            assert ch not in anchors, f"duplicate anchor {ch}"
            anchors[ch]=(x,y)
        else: raise SystemExit(f"unknown char {ch!r} at {x},{y}")
missing=[c for c in ANCH if c not in anchors]
assert not missing, f"anchors missing from drawing: {missing}"

open("data/layouts/ParcelDelibird/map.bin","wb").write(
    b"".join(struct.pack(f"<{W}H",*r) for r in grid))
print(f"wrote 30x26 hand-drawn map; anchors:")
for c in ANCH: print(f"  {c}: {anchors[c]}")
