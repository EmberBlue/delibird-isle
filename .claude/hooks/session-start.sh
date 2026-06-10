#!/bin/bash
# SessionStart hook for delibird-isle (pokeemerald-expansion ROM hack).
#
# Installs the ARM cross-compiler the moment a fresh remote session boots,
# so the agent can build the ROM on demand without rediscovering the recipe.
# Idempotent: re-running is a no-op once the toolchain is present.
#
# What it does NOT do: build the ROM. A full `make modern` takes minutes;
# we let the agent kick it off when it actually needs an artifact.

set -euo pipefail

# Only run in the Claude Code on the web remote environment. Locally the
# user already has their own toolchain (devkitARM or similar) and we don't
# want to fight it.
if [ "${CLAUDE_CODE_REMOTE:-}" != "true" ]; then
  exit 0
fi

log() { echo "[session-start] $*" >&2; }

# --- ARM toolchain -----------------------------------------------------------
# Fast path: already installed (cached container, or this is a re-run).
if command -v arm-none-eabi-gcc >/dev/null 2>&1; then
  log "arm-none-eabi-gcc already present ($(arm-none-eabi-gcc -dumpversion))"
else
  log "installing ARM cross-compiler (binutils, gcc, newlib)..."
  export DEBIAN_FRONTEND=noninteractive
  apt-get update -qq
  apt-get install -y -qq --no-install-recommends \
    binutils-arm-none-eabi \
    gcc-arm-none-eabi \
    libnewlib-arm-none-eabi
  log "installed arm-none-eabi-gcc $(arm-none-eabi-gcc -dumpversion)"
fi

# Sanity-check that the toolchain can actually produce ARM/Thumb code for
# this project's target. Cheap (<1s) and catches a broken install before the
# agent wastes time on a full build.
tmpdir="$(mktemp -d)"
trap 'rm -rf "$tmpdir"' EXIT
echo 'int f(int x){return x+1;}' > "$tmpdir/t.c"
if ! arm-none-eabi-gcc -mthumb -mcpu=arm7tdmi -O2 -c "$tmpdir/t.c" -o "$tmpdir/t.o" 2>"$tmpdir/err"; then
  log "ERROR: arm-none-eabi-gcc failed to compile a Thumb test object:"
  sed 's/^/  /' "$tmpdir/err" >&2
  exit 1
fi

# --- Orient the agent --------------------------------------------------------
cat >&2 <<'EOF'
[session-start] ready.

  Design bible:   design/   (read design/README.md first — start at §00)
  Build the ROM:  make tools && make -j modern    (produces pokeemerald.gba)
  Run tests:      make check DEBUG=0 TESTS="..."   (DEBUG=0 is required)
  See the game:   bash tools/screenshot/setup.sh   (one-time), then
                  python3 tools/screenshot/capture.py --out /tmp/shot.png
  RAM headroom:   EWRAM/IWRAM are ~87% used in the base expansion.
                  Custom mechanics that need new state should plan for it.
EOF
