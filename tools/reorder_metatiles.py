#!/usr/bin/env python3
import sys, os, struct, argparse, textwrap

def read_file(path):
    with open(path, "rb") as f: return f.read()

def write_file(path, data):
    with open(path, "wb") as f: f.write(data)

def backup(path):
    if not os.path.exists(path + ".bak"):
        with open(path, "rb") as f, open(path + ".bak", "wb") as g:
            g.write(f.read())

def load_order(order_path, n):
    lines = [ln.strip() for ln in open(order_path, "r", encoding="utf-8").read().splitlines() if ln.strip()]
    order = []
    for ln in lines:
        # Accept either "old" or "idx,old"
        if "," in ln:
            new_idx, old_idx = ln.split(",", 1)
            order.append(int(old_idx))
        else:
            order.append(int(ln))
    if len(order) != n:
        raise SystemExit(f"[error] order length {len(order)} != metatile count {n}")
    if sorted(order) != list(range(n)):
        raise SystemExit("[error] order must be a permutation of 0..N-1 (no dups/missing).")
    return order  # new_index -> old_index

def invert_order(order):
    inv = [0]*len(order)
    for new_idx, old_idx in enumerate(order):
        inv[old_idx] = new_idx
    return inv  # old_index -> new_index

def chunk(data, sz):  # yield fixed-size slices
    return [data[i:i+sz] for i in range(0, len(data), sz)]

def cmd_make_template(args):
    tileset = args.tileset
    mt_path   = os.path.join(tileset, "metatiles.bin")
    attr_path = os.path.join(tileset, "metatile_attributes.bin")
    if not (os.path.exists(mt_path) and os.path.exists(attr_path)):
        raise SystemExit("[error] Can't find metatiles.bin / metatile_attributes.bin in the given tileset folder.")

    n = os.path.getsize(mt_path) // 8
    out = "\n".join(str(i) for i in range(n)) + "\n"
    open(args.order, "w", encoding="utf-8").write(out)
    print(f"[ok] Wrote identity order ({n} lines) to {args.order}")
    print("     Each line is the OLD index that should move to that NEW position.")
    print("     Example: if line 0 reads '200', then old 200 will become new 0.")

def cmd_apply(args):
    tileset = args.tileset
    mt_path   = os.path.join(tileset, "metatiles.bin")
    attr_path = os.path.join(tileset, "metatile_attributes.bin")

    mt = read_file(mt_path)
    attr = read_file(attr_path)
    n = len(mt) // 8
    if len(attr) != n * 2:
        raise SystemExit(f"[error] metatile_attributes size {len(attr)} != {n*2}")

    order = load_order(args.order, n)               # new -> old
    inv   = invert_order(order)                     # old -> new

    # --- reorder metatiles & attributes ---
    mt_blocks   = chunk(mt,   8)
    attr_blocks = chunk(attr, 2)

    new_mt   = bytearray()
    new_attr = bytearray()
    for new_idx, old_idx in enumerate(order):
        new_mt.extend(mt_blocks[old_idx])
        new_attr.extend(attr_blocks[old_idx])

    # backups + write
    backup(mt_path)
    backup(attr_path)
    write_file(mt_path,   new_mt)
    write_file(attr_path, new_attr)
    print(f"[ok] Rewrote {mt_path} and {attr_path} using order from {args.order}")

    # --- optionally remap one or more layouts ---
    if args.layouts:
        # In Gen 3 blockmaps, bit 10 marks SECONDARY (1) vs PRIMARY (0). Low bits hold the index.
        # We'll only change the blocks that belong to the chosen side.
        MASK_INDEX = 0x03FF
        BIT_SECOND = 1 << 10
        target_is_secondary = (args.which.lower() == "secondary")
        for layout in args.layouts:
            data = bytearray(read_file(layout))
            if len(data) % 2 != 0:
                raise SystemExit(f"[error] {layout} size {len(data)} is not even (not 16-bit aligned).")

            # Walk 16-bit little-endian block IDs
            changed = 0
            for i in range(0, len(data), 2):
                v = data[i] | (data[i+1] << 8)
                is_secondary = bool(v & BIT_SECOND)
                if is_secondary == target_is_secondary:
                    old_idx = v & MASK_INDEX
                    if old_idx < n:
                        new_idx = inv[old_idx]
                        v = (v & ~MASK_INDEX) | new_idx
                        data[i]   = v & 0xFF
                        data[i+1] = (v >> 8) & 0xFF
                        changed += 1

            backup(layout)
            write_file(layout, data)
            print(f"[ok] Remapped {changed} blocks in {layout} ({args.which} tileset)")

def main():
    ap = argparse.ArgumentParser(
        prog="reorder_metatiles.py",
        formatter_class=argparse.RawDescriptionHelpFormatter,
        description=textwrap.dedent("""
        Reorder a tileset's metatiles and (optionally) remap layouts to the new indices.

        Workflow:
          1) make-template  -> creates an identity order file you can edit.
          2) apply          -> applies your order, rewrites metatiles + attributes,
                               and remaps one or more layout .bin files.

        The order file has N lines (N = number of metatiles).  Line K contains the OLD
        index that you want to move to NEW index K.  This must be a permutation of 0..N-1.
        """)
    )
    sub = ap.add_subparsers(dest="cmd", required=True)

    a = sub.add_parser("make-template")
    a.add_argument("tileset", help="tileset folder (e.g. data/tilesets/primary/Desert_Primary)")
    a.add_argument("order",   help="path to write order file (e.g. order.txt)")
    a.set_defaults(func=cmd_make_template)

    b = sub.add_parser("apply")
    b.add_argument("tileset", help="tileset folder (same as above)")
    b.add_argument("order",   help="order file you edited")
    b.add_argument("--which", choices=["primary","secondary"], default="primary",
                   help="Which side of blocks to remap in layouts (default: primary).")
    b.add_argument("--layouts", nargs="*", default=[],
                   help="One or more layout .bin files to remap (e.g. data/layouts/LAYOUT_ROUTE116.bin)")
    b.set_defaults(func=cmd_apply)

    args = ap.parse_args()
    args.func(args)

if __name__ == "__main__":
    main()
