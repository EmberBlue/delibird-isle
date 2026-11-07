// Checks TB.emit.formatText against the real poryscript binary.
//
// Corpus: every multi-line text block in data/ (.inc files), unwrapped back
// into plain prose (\n and \l become spaces, \p is kept). Both poryscript's
// format() and our emulation re-wrap it; the results must match exactly.
"use strict";
const test = require("node:test");
const assert = require("node:assert");
const fs = require("fs");
const os = require("os");
const path = require("path");
const { execFileSync } = require("child_process");

const ROOT = path.resolve(__dirname, "../../..");
require(path.join(ROOT, "tools/trainer_builder/app/core/party.js"));
require(path.join(ROOT, "tools/trainer_builder/app/core/emit.js"));
const E = globalThis.TB.emit;

function fontFromConfig() {
  const cfg = JSON.parse(fs.readFileSync(path.join(ROOT, "tools/poryscript/font_config.json"), "utf8"));
  const id = cfg.defaultFontId || Object.keys(cfg.fonts)[0];
  const f = cfg.fonts[id];
  const widths = typeof f.widths === "string" ? JSON.parse(f.widths.replace(/'/g, '"')) : f.widths;
  return { widths, maxLineLength: +f.maxLineLength, numLines: +f.numLines };
}

function corpus(limit) {
  const files = [];
  (function walk(d) {
    for (const e of fs.readdirSync(d, { withFileTypes: true })) {
      const p = path.join(d, e.name);
      if (e.isDirectory()) walk(p);
      else if (e.name.endsWith(".inc")) files.push(p);
    }
  })(path.join(ROOT, "data"));
  const out = new Set();
  for (const f of files.sort()) {
    let cur = null;
    for (const line of fs.readFileSync(f, "utf8").split("\n")) {
      const m = /^\s*\.string\s+"(.*)"\s*$/.exec(line);
      if (m) { cur = (cur || "") + m[1]; continue; }
      if (cur && cur.endsWith("$") && /\\[nl]/.test(cur)) {
        const prose = cur.slice(0, -1).replace(/\\[nl]/g, " ").replace(/ +/g, " ").replace(/ ?\\p ?/g, "\\p").trim();
        if (prose && !/[\\"]/.test(prose.replace(/\\p/g, ""))) out.add(prose);
      }
      cur = null;
    }
  }
  return [...out].slice(0, limit);
}

function poryFormat(texts) {
  const dir = fs.mkdtempSync(path.join(os.tmpdir(), "tb-fmt-"));
  const src = texts.map((t, i) => `text T${i} {\n    format("${t}")\n}\n`).join("\n");
  fs.writeFileSync(path.join(dir, "in.pory"), src);
  const out = execFileSync(path.join(ROOT, "tools/poryscript/poryscript"), [
    "-i", path.join(dir, "in.pory"), "-fc", path.join(ROOT, "tools/poryscript/font_config.json"),
    "-cc", path.join(ROOT, "tools/poryscript/command_config.json"), "-lm=false",
  ], { maxBuffer: 1 << 28 }).toString();
  const res = {};
  let cur = null;
  for (const line of out.split("\n")) {
    const lab = /^T(\d+)::/.exec(line);
    if (lab) { cur = +lab[1]; res[cur] = ""; continue; }
    const m = /^\s*\.string "(.*)"\s*$/.exec(line);
    if (m && cur != null) res[cur] += m[1];
  }
  return texts.map((_, i) => (res[i] || "").replace(/\$$/, ""));
}

test("formatText matches poryscript format() on the game's own dialogue", () => {
  const font = fontFromConfig();
  const texts = corpus(4000);
  assert.ok(texts.length > 500, "corpus too small: " + texts.length);
  const expected = poryFormat(texts);
  const mismatches = [];
  texts.forEach((t, i) => {
    const got = E.formatText(font, t).text;
    if (got !== expected[i]) mismatches.push({ input: t, expected: expected[i], got });
  });
  if (mismatches.length) console.log(JSON.stringify(mismatches.slice(0, 3), null, 1));
  assert.strictEqual(mismatches.length, 0, `${mismatches.length} of ${texts.length} differ`);
});
