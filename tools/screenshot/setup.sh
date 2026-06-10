#!/bin/bash
# One-time setup for headless ROM screenshots (tools/screenshot/capture.py).
# Idempotent: safe to re-run. Installs the mGBA shared library + Python binding
# + Pillow so a built ROM can be rendered to PNG without a display server.
set -euo pipefail

if python3 -c "import mgba.image, PIL" 2>/dev/null; then
    echo "[screenshot] dependencies already present."
    exit 0
fi

echo "[screenshot] installing mGBA library + python bindings + Pillow..."
export DEBIAN_FRONTEND=noninteractive
apt-get install -y -qq --no-install-recommends libmgba0.10t64
pip3 install --quiet mgba Pillow

python3 -c "import mgba.image, PIL; print('[screenshot] ready.')"
