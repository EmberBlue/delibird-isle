#!/usr/bin/env bash
# Rebuild Trainer Builder from this repo and run every check.
set -euo pipefail
cd "$(dirname "$0")/../.."

python3 tools/trainer_builder/build.py
node --test tools/trainer_builder/tests/*.test.js
python3 -m unittest discover -s tools/trainer_builder/tests
if node -e 'require("playwright")' 2>/dev/null; then
  node tools/trainer_builder/tests/ui_smoke.js
else
  echo "playwright not installed: skipped the browser smoke test"
fi
