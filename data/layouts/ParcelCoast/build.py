#!/usr/bin/env python3
"""ParcelCoast (the Mereholt Coast): vanilla LAYOUT_SLATEPORT_CITY (General +
Slateport, 40x60) used as the working harbour as it is -- the market is the
fish market, the shipyard is the cannery, the museum is the Foundation's coast
office, the lighthouse quay is the ferry landing. Run after editing."""
import struct
from pathlib import Path
HERE = Path(__file__).resolve().parent
W, H = 40, 60
words = list(struct.unpack(f"<{W*H}H", (HERE / "base.bin").read_bytes()))
(HERE / "map.bin").write_bytes(b"".join(struct.pack("<H", v) for v in words))
print(f"ParcelCoast: wrote {W}x{H} map.bin")
