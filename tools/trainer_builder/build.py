#!/usr/bin/env python3
"""Build the single-file Trainer Builder.

    python3 tools/trainer_builder/build.py            # extract data from this repo, then build
    python3 tools/trainer_builder/build.py --data build/data.json   # reuse extracted data

Writes tools/trainer_builder/dist/trainer_builder.html: one self-contained
page (data, sprites, the game font and code inlined) that works offline from
file://. Fonts load from Google Fonts when online and fall back to system
fonts otherwise. --artifact also writes the same page without the
<html>/<head>/<body> wrapper, for hosts that add their own.
"""

import argparse
import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)

SCRIPTS = [
    "core/party.js", "core/data.js", "core/calc.js", "core/checks.js", "core/emit.js", "core/project.js",
    "ui/dom.js", "ui/textbox.js", "ui/app.js", "ui/workbench.js", "ui/roster.js", "ui/balance.js", "ui/projectview.js",
]
FONTS = ("https://fonts.googleapis.com/css2?family=Atkinson+Hyperlegible:ital,wght@0,400;0,700;1,400"
         "&family=Bricolage+Grotesque:opsz,wght@12..96,600;12..96,700&family=JetBrains+Mono:wght@400;600&display=swap")


def read(rel):
    with open(os.path.join(HERE, "app", rel), encoding="utf-8") as f:
        return f.read()


def build(data):
    css = read("style.css")
    js = "\n".join("/* ---- %s ---- */\n%s" % (s, read(s)) for s in SCRIPTS)
    if "</script" in js.lower():
        raise SystemExit("a script contains '</script', which would end the inline block early")
    # < keeps "</script>" and "<!--" inside JSON strings from ending the block.
    payload = json.dumps(data, ensure_ascii=False, separators=(",", ":")).replace("<", "\\u003c")
    head = (
        '<title>Trainer Builder</title>\n'
        '<meta name="claude:viewport-fit-sides" content="cover">\n'
        '<meta name="description" content="Design, check and balance trainers for this pokeemerald-expansion project.">\n'
        '<link rel="preconnect" href="https://fonts.googleapis.com">\n'
        '<link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>\n'
        '<link rel="stylesheet" href="%s">\n'
        '<style>\n%s</style>\n' % (FONTS, css)
    )
    body = (
        '<div id="app"><div class="boot">Loading trainer data…</div>'
        '<noscript><p class="boot">Trainer Builder needs JavaScript.</p></noscript></div>\n'
        '<div class="toast" id="toast" role="status" aria-live="polite"></div>\n'
        '<script>globalThis.TBDATA=%s;</script>\n'
        '<script>\n%s\n</script>\n'
        '<script>TB.app.boot();</script>\n' % (payload, js)
    )
    full = ('<!doctype html>\n<html lang="en">\n<head>\n<meta charset="utf-8">\n'
            '<meta name="viewport" content="width=device-width, initial-scale=1, viewport-fit=cover">\n'
            '<meta name="theme-color" content="#0C6A7B">\n'
            '%s</head>\n<body>\n%s</body>\n</html>\n' % (head, body))
    return full, head + body


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--data", help="use an existing data.json instead of extracting")
    ap.add_argument("--root", help="project root to extract from (default: this repo)")
    ap.add_argument("-o", "--output", default=os.path.join(HERE, "dist", "trainer_builder.html"))
    ap.add_argument("--artifact", help="also write the page without the document wrapper to this path")
    args = ap.parse_args()
    if args.data:
        with open(args.data, encoding="utf-8") as f:
            data = json.load(f)
    else:
        from extract import DEFAULT_ROOT, extract
        data = extract(args.root or DEFAULT_ROOT)
        os.makedirs(os.path.join(HERE, "build"), exist_ok=True)
        with open(os.path.join(HERE, "build", "data.json"), "w", encoding="utf-8") as f:
            json.dump(data, f, ensure_ascii=False, separators=(",", ":"))
    full, fragment = build(data)
    os.makedirs(os.path.dirname(os.path.abspath(args.output)), exist_ok=True)
    with open(args.output, "w", encoding="utf-8") as f:
        f.write(full)
    print("wrote %s (%.2f MB) from commit %s" % (args.output, os.path.getsize(args.output) / 1e6, data["meta"].get("commit")))
    if args.artifact:
        # Sandboxed hosts block downloads; the app copies to the clipboard instead.
        fragment = fragment.replace('<script>globalThis.TBDATA=', '<script>globalThis.TB_NO_DOWNLOAD=true;</script>\n<script>globalThis.TBDATA=', 1)
        with open(args.artifact, "w", encoding="utf-8") as f:
            f.write(fragment)
        print("wrote %s" % args.artifact)


if __name__ == "__main__":
    main()
