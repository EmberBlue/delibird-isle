#!/usr/bin/env python3
import sys, struct, re, os

def parse_jasc(lines):
    # JASC-PAL
    # JASC-PAL
    # 0100
    # N
    # R G B ...
    assert lines[0].strip() == "JASC-PAL"
    n = int(lines[2].strip())
    rgb = []
    for line in lines[3:3+n]:
        line = line.strip()
        if not line or line.startswith('#'): continue
        parts = [int(x) for x in line.split()]
        if len(parts) >= 3:
            rgb.append(tuple(parts[:3]))
    return rgb

def parse_gpl(lines):
    # GIMP Palette
    rgb = []
    for line in lines:
        line = line.strip()
        if not line or line.startswith("#") or re.match(r"^[A-Za-z]", line): continue
        parts = [int(x) for x in re.split(r"\s+", line) if x.isdigit()]
        if len(parts) >= 3:
            rgb.append(tuple(parts[:3]))
    return rgb

def to_bgr555(rgb_list):
    out = bytearray()
    for i in range(16):
        r, g, b = (rgb_list[i] if i < len(rgb_list) else (0,0,0))
        val = ((r>>3) | ((g>>3)<<5) | ((b>>3)<<10)) & 0x7FFF
        out += struct.pack("<H", val)
    return bytes(out)

def convert(in_path):
    with open(in_path, "r", encoding="utf-8", errors="ignore") as f:
        lines = f.readlines()
    if lines and lines[0].startswith("JASC-PAL"):
        rgb = parse_jasc(lines)
    elif lines and lines[0].startswith("GIMP Palette"):
        rgb = parse_gpl(lines)
    else:
        print(f"[skip] {in_path} doesn't look like a text palette; leaving as-is")
        return
    data = to_bgr555(rgb)
    with open(in_path, "wb") as f:
        f.write(data)
    print(f"[ok] wrote 32-byte GBA palette: {in_path}")

if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("usage: convert_pal_to_gbapal.py <files...>")
        sys.exit(1)
    for p in sys.argv[1:]:
        convert(p)
