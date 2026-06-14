#!/usr/bin/env node
/* Self-test: build sample trainers with the serializer and push the output
 * through the project's real cpp | trainerproc pipeline (the same rule the ROM
 * build uses). Proves the app emits .party text that trainerproc accepts.
 *
 *   node tools/trainer-builder/selftest.js
 */
"use strict";
const { execSync } = require("child_process");
const fs = require("fs");
const os = require("os");
const path = require("path");

const HERE = __dirname;
const ROOT = path.resolve(HERE, "..", "..");
const { trainerToParty } = require("./src/serializer.js");
const TRAINERPROC = path.join(ROOT, "tools", "trainerproc", "trainerproc");

function ensureTrainerproc() {
  if (fs.existsSync(TRAINERPROC)) return;
  console.log("building trainerproc…");
  execSync("make", { cwd: path.join(ROOT, "tools", "trainerproc"), stdio: "inherit" });
}

function validate(party) {
  const tmp = path.join(os.tmpdir(), `tb_${Date.now()}_${Math.random().toString(36).slice(2)}.party`);
  const out = tmp + ".h";
  fs.writeFileSync(tmp, party);
  try {
    // Mirror the Makefile rule: cpp strips comments / expands macros, then trainerproc parses.
    execSync(`cpp -traditional-cpp - < '${tmp}' | '${TRAINERPROC}' -o '${out}' -i '${tmp}' -`,
             { stdio: ["ignore", "ignore", "pipe"], shell: "/bin/bash" });
    return fs.readFileSync(out, "utf8");
  } finally {
    [tmp, out].forEach((f) => { try { fs.unlinkSync(f); } catch (e) {} });
  }
}

const samples = [
  {
    name: "minimal single mon",
    trainer: {
      id: "TRAINER_TEST_MINIMAL", name: "ALDA",
      trainerClass: "TRAINER_CLASS_FISHERMAN", pic: "TRAINER_PIC_FISHERMAN",
      party: [{ species: "SPECIES_MAGIKARP", level: 5, moves: ["MOVE_SPLASH"] }],
    },
    expect: ["SPECIES_MAGIKARP", "MOVE_SPLASH", "TRAINER_CLASS_FISHERMAN"],
  },
  {
    name: "full two-mon boss with backstory, items, IVs, held item",
    trainer: {
      id: "TRAINER_TEST_BOSS", name: "VOSS",
      trainerClass: "TRAINER_CLASS_EXPERT", pic: "TRAINER_PIC_EXPERT_M",
      gender: "Male", music: "TRAINER_ENCOUNTER_MUSIC_INTENSE", doubleBattle: false,
      ai: ["AI_FLAG_BASIC_TRAINER", "AI_FLAG_TRY_TO_FAINT"],
      items: ["ITEM_POTION", "ITEM_POTION"],
      backstory: "A nihilist enforcer.\nNote: contains a */ tricky token to escape.",
      party: [
        { species: "SPECIES_POOCHYENA", level: 6, ability: "ABILITY_QUICK_FEET",
          ivs: { hp: 18, atk: 18, def: 18, spa: 18, spd: 18, spe: 18 },
          moves: ["MOVE_TACKLE", "MOVE_HOWL", "MOVE_SAND_ATTACK", "MOVE_BITE"] },
        { species: "SPECIES_CARVANHA", gender: "M", item: "ITEM_ORAN_BERRY",
          level: 6, ability: "ABILITY_ROUGH_SKIN",
          moves: ["MOVE_AQUA_JET", "MOVE_LEER", "MOVE_BITE", "MOVE_FOCUS_ENERGY"] },
      ],
    },
    expect: ["SPECIES_POOCHYENA", "SPECIES_CARVANHA", "MOVE_AQUA_JET",
             "ITEM_ORAN_BERRY", "ABILITY_ROUGH_SKIN", "AI_FLAG_TRY_TO_FAINT"],
  },
];

ensureTrainerproc();
let fail = 0;
for (const s of samples) {
  const party = trainerToParty(s.trainer);
  try {
    const h = validate(party);
    const missing = s.expect.filter((tok) => h.indexOf(tok) < 0);
    if (missing.length) { fail++; console.log(`✗ ${s.name} — missing: ${missing.join(", ")}`); }
    else console.log(`✓ ${s.name}`);
  } catch (e) {
    fail++;
    console.log(`✗ ${s.name} — trainerproc rejected it`);
    console.log((e.stderr ? e.stderr.toString() : e.message).trim());
    console.log("--- generated .party ---\n" + party);
  }
}
console.log(fail ? `\n${fail} FAILED` : `\nAll ${samples.length} passed`);
process.exit(fail ? 1 : 0);
