#!/usr/bin/env python3
"""Recover the metatile grid of the Shady Forest example (a 2x screenshot) by matching rendered metatiles."""
import sys, struct, collections
from pathlib import Path
from PIL import Image
import os
S=os.environ.get('SKALD_SCRATCH','.')
kit=Path(S+'/incoming/team-aquas/Tilesets/The Great Tileset Exchange/Full Tilesets/Shady Forest Secondary')
prim=Path('/home/user/delibird-isle/data/tilesets/primary/general')
def pal(p):
    L=Path(p).read_text().splitlines(); return [tuple(int(c)>>3 for c in L[3+i].split()) for i in range(int(L[2]))]
P=[pal(kit/'palettes'/f'{i:02}.pal') for i in range(13)]
def tiles(png):
    im=Image.open(png); im=im if im.mode=='P' else im.convert('P'); w,h=im.size; px=im.load()
    return [[px[tx*8+x,ty*8+y]&15 for y in range(8) for x in range(8)] for ty in range(h//8) for tx in range(w//8)]
pt=tiles(prim/'tiles.png'); st=tiles(kit/'tiles.png'); T=(pt+[[0]*64]*(512-len(pt)))[:512]+st
data=(kit/'metatiles.bin').read_bytes(); M={512+i:struct.unpack_from('<12H',data,i*24) for i in range(len(data)//24)}
def render(w):
    out=[None]*256
    for layer in range(3):
        for q in range(4):
            e=w[layer*4+q]; t=e&0x3FF; h=bool(e&0x400); v=bool(e&0x800); p=e>>12
            if t>=len(T) or p>12: continue
            tile=T[t]; ox,oy=(q%2)*8,(q//2)*8
            for i,c in enumerate(tile):
                if c==0: continue
                x,y=i%8,i//8
                if h: x=7-x
                if v: y=7-y
                out[(oy+y)*16+ox+x]=P[p][c]
    return tuple(out)
R={mid:render(w) for mid,w in M.items() if any(w)}
full={}
for mid,px in R.items():
    if all(v is not None for v in px): full.setdefault(px,mid)
ex=Image.open(kit/'example.png').convert('RGB'); W,H=ex.size; epx=ex.load()
def cell(x0,y0):
    return tuple(tuple(c>>3 for c in epx[x0+2*(i%16),y0+2*(i//16)]) for i in range(256))
best=None
for oy in range(32):
    for ox in range(32):
        hits=0
        for cy in range(0,(H-oy-32)//32,3):
            for cx in range(0,(W-ox-32)//32,3):
                if cell(ox+cx*32,oy+cy*32) in full: hits+=1
        if best is None or hits>best[0]: best=(hits,ox,oy)
print('best (hits, ox, oy):',best)
hits,ox,oy=best
cols=(W-ox)//32; rows=(H-oy)//32
grid=[[full.get(cell(ox+cx*32,oy+cy*32),-1) for cx in range(cols)] for cy in range(rows)]
cnt=collections.Counter(v for r in grid for v in r)
print('grid',cols,'x',rows,'unmatched',cnt[-1],'of',rows*cols)
Path(S+'/art/incoming/shady_example_grid.txt').write_text('\n'.join(' '.join(f'{v:3d}' if v>=0 else '  ?' for v in r) for r in grid))
print('\n'.join(' '.join(f'{v:3d}' if v>=0 else '  ?' for v in r) for r in grid))
