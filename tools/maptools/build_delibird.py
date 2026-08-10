#!/usr/bin/env python3
"""Delibird Isle holiday village -- Johto identity pass (v2).

Tilesets: gTileset_JohtoGeneral + gTileset_AzaleaTown (the first zone off the
shared coastal set). Composed, not stamped-on-a-rectangle: sea ring, beach,
a fenced gift square at the heart, cottages, a cliff shelf up north with the
Crystal Cavern mouth, a mooring spit south. Every scripted coordinate from
map.json is asserted walkable at build time.

Safety rules (see .claude/skills/skald-verify): every WALKABLE tile must have
empty top-layer cells (checked here against the tileset bins) -- top-layer art
covers the player. Blocked tiles (trees, fences, cottages) may overhang.
"""
import struct, json, os

W,H = 60,44
P="data/tilesets/primary/johtogeneral"; S="data/tilesets/secondary/azaleatown"

GRASS=1; FLOWERS=4; TALL=10; TREE=36; SIGN=2; FENCE=238
PATH=227; MUD=227; BEACH=227; SEA=265  # 265 = surfable (beh 16-21 family); 274 is shore decor
ROCK_A=686; ROCK_B=687; CAVE=694
# cottage kit (azalea): roof row / wall row (window, slats, window)
COT_ROOF=(657,658,659); COT_WALL=(665,664,666)

def wq(mid,col,elev): return (elev<<12)|(col<<10)|mid
WALK=lambda m: wq(m,0,3)
BLOCK=lambda m: wq(m,1,0)
WATER=lambda m: wq(m,0,1)

pm=open(P+"/metatiles.bin","rb").read(); sm=open(S+"/metatiles.bin","rb").read()
def topclear(m):
    d,o=(pm,m*24) if m<512 else (sm,(m-512)*24)
    c=struct.unpack_from("<12H",d,o); return all(v==0 for v in c[8:12])
for m in (GRASS,FLOWERS,PATH,MUD,BEACH):  # TALL exempt: grass overlays feet by design
    assert topclear(m), f"walkable tile {m} has top-layer art"

g=[[WATER(SEA)]*W for _ in range(H)]
def fill(x0,x1,y0,y1,w):
    for y in range(y0,y1+1):
        for x in range(x0,x1+1): g[y][x]=w
def cottage(x,y):
    for i,m in enumerate(COT_ROOF): g[y][x+i]=BLOCK(m)
    for i,m in enumerate(COT_WALL): g[y+1][x+i]=BLOCK(m)

# land mass: beach ring then grass
fill(3,56,4,41,WALK(BEACH))
fill(5,54,6,39,WALK(GRASS))
# north cliff shelf (summit): tree walls, grass shelf, cave apron
fill(5,54,6,6,BLOCK(TREE)); fill(5,54,13,13,BLOCK(TREE))
fill(6,53,7,12,WALK(GRASS))
fill(17,23,7,9,WALK(GRASS))
g[8][19]=BLOCK(ROCK_A); g[8][21]=BLOCK(ROCK_B); g[8][20]=BLOCK(CAVE)     # the cavern mouth
g[7][19]=BLOCK(ROCK_B); g[7][20]=BLOCK(ROCK_A); g[7][21]=BLOCK(ROCK_B)
g[11][40]=WALK(GRASS)                                                     # summit lookout
# gap through the tree band down to the village
fill(19,21,13,13,WALK(PATH)); fill(19,21,14,23,WALK(PATH))
# village floor
fill(8,43,20,34,WALK(GRASS))
fill(22,38,24,33,WALK(PATH))
# the gift square: fence ring with north+south gates
for x in range(26,37):
    if x not in (30,31): g[26][x]=BLOCK(FENCE); g[31][x]=BLOCK(FENCE)
for y in range(27,31):
    g[y][26]=BLOCK(FENCE); g[y][36]=BLOCK(FENCE)
fill(27,35,27,30,WALK(PATH))
# cottages: elder's, warming hut, east house, and the half-sunk slump cabin
cottage(9,21); cottage(8,27); cottage(38,27)
cottage(13,15); fill(12,17,17,18,WALK(MUD))          # slump cabin on mud
fill(9,14,23,25,WALK(PATH)); fill(8,12,29,30,WALK(PATH)); fill(38,42,29,30,WALK(PATH))
# flowers + tall grass texture
for (x,y) in [(23,22),(37,23),(14,27),(36,32),(25,34),(18,21)]: g[y][x]=WALK(FLOWERS)
fill(44,50,20,24,WALK(TALL)); fill(6,10,33,37,WALK(TALL)); fill(15,18,8,10,WALK(TALL))
# summit sign post (bg event reads beside it)
g[11][41]=BLOCK(SIGN)
# south mooring spit + east beach
fill(29,33,34,37,WALK(PATH))
fill(27,35,37,41,WALK(BEACH))
fill(44,51,27,38,WALK(BEACH))
fill(43,43,29,31,WALK(GRASS))
# scattered trees for depth (keep routes clear)
for (x,y) in [(7,17),(16,30),(24,18),(34,20),(42,22),(37,17),(10,19),(45,25)]:
    g[y][x]=BLOCK(TREE)

# --- assertions: every scripted coordinate must be walkable ---
MUST=[(12,25),(28,27),(31,27),(47,33),(15,20),(31,38),(22,10),(50,32),(35,29),
      (28,28),(33,30),(11,30),(24,24),(27,32),(30,38),(20,10),(15,18),(40,11),(30,31)]
bad=[]
for (x,y) in MUST:
    v=g[y][x]
    if not (((v>>10)&3)==0 and ((v>>12)&0xF)==3): bad.append((x,y,hex(v)))
assert not bad, f"scripted coords not walkable: {bad}"

out="data/layouts/ParcelDelibird/map.bin"
with open(out,"wb") as f:
    for row in g: f.write(struct.pack(f"<{W}H",*row))
print(f"wrote {out}; all {len(MUST)} scripted coords walkable")
