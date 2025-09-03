#!/usr/bin/env python3
import sys, struct, glob, os
def to_jasc(rgb): return "JASC-PAL\n0100\n16\n" + "\n".join(f"{r} {g} {b}" for r,g,b in rgb) + "\n"
def one(p):
    b=open(p,"rb").read()
    if len(b)<32: raise SystemExit(f"{p}: too short")
    rgb=[]
    for i in range(0,32,2):
        v=int.from_bytes(b[i:i+2],"little")
        r=((v    )&31)<<3; g=((v>>5)&31)<<3; b_=((v>>10)&31)<<3
        rgb.append((min(r,255),min(g,255),min(b_,255)))
    out=os.path.splitext(p)[0]+".pal"
    with open(out,"w",newline="\n") as f: f.write(to_jasc(rgb))
    print(f"{p} -> {out}")
def run(root):
    fs=glob.glob(os.path.join(root,"*.gbapal"))
    if not fs: print(f"No .gbapal in {root}"); return
    for p in fs: one(p)
if __name__=="__main__":
    for r in (sys.argv[1:] or ["."]): run(r)
