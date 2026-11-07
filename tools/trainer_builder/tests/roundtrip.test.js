// Round-trip acceptance test for the JS trainers.party parser/serializer.
//
// For src/data/trainers.party:
//   1. run the real pipeline:  cpp -traditional-cpp | trainerproc  -> expected C
//   2. parse with TB.party, convert every value to a constant, serialize
//   3. run the same pipeline on the re-serialized file           -> actual C
//   4. require identical C once #line markers are removed
// Step 4 uses trainerproc itself as the judge of equivalence, so the test
// does not depend on our own reading of the grammar.
//
// Run: node --test tools/trainer_builder/tests/
"use strict";
const test = require("node:test");
const assert = require("node:assert");
const fs = require("fs");
const os = require("os");
const path = require("path");
const { execFileSync } = require("child_process");

const ROOT = path.resolve(__dirname, "../../..");
require(path.join(ROOT, "tools/trainer_builder/app/core/party.js"));
const P = globalThis.TB.party;

const CPPFLAGS = ["-traditional-cpp", "-iquote", "include", "-Wno-trigraphs", "-DMODERN=1", "-DTESTING=0", "-std=gnu17"];
const TRAINERPROC = path.join(ROOT, "tools/trainerproc/trainerproc");

function ensureTrainerproc() {
  if (!fs.existsSync(TRAINERPROC)) execFileSync("make", ["-C", path.join(ROOT, "tools/trainerproc")], { stdio: "ignore" });
}

// Generated C for a .party file, labelled with `label` so the header comment matches.
function compile(partyText, label) {
  const pre = execFileSync(process.env.CPP || "cpp", [...CPPFLAGS, "-"], { cwd: ROOT, input: partyText, maxBuffer: 1 << 28 });
  const out = path.join(fs.mkdtempSync(path.join(os.tmpdir(), "tb-rt-")), "out.h");
  const res = require("child_process").spawnSync(TRAINERPROC, ["-o", out, "-i", label, "-"], { cwd: ROOT, input: pre, maxBuffer: 1 << 28 });
  if (res.status !== 0) throw new Error("trainerproc failed:\n" + res.stderr.toString().slice(0, 4000));
  // #line markers and the header comment (which embeds the temp output path) are not data.
  return fs.readFileSync(out, "utf8").split("\n").filter((l) => !l.startsWith("#line") && !l.startsWith("//")).join("\n");
}

function firstDiff(a, b) {
  const A = a.split("\n"), B = b.split("\n");
  for (let i = 0; i < Math.max(A.length, B.length); i++) {
    if (A[i] !== B[i]) return `line ${i + 1}:\n  expected: ${A[i]}\n  actual:   ${B[i]}`;
  }
  return null;
}

const SRC = "src/data/trainers.party";
const original = fs.readFileSync(path.join(ROOT, SRC), "utf8");

test("parser reads every trainer without errors", () => {
  const parsed = P.parse(original);
  assert.deepStrictEqual(parsed.errors, []);
  const ids = (original.match(/^=== /gm) || []).length;
  assert.strictEqual(parsed.trainers.length, ids);
});

test("serialize(normalize(parse(file))) compiles to identical C", () => {
  ensureTrainerproc();
  const parsed = P.parse(original);
  parsed.trainers = parsed.trainers.map(P.normalizeTrainer);
  const rebuilt = P.serializeFile(parsed);
  const expected = compile(original, SRC);
  const actual = compile(rebuilt, SRC);
  const d = firstDiff(expected, actual);
  assert.ok(!d, "generated C differs at " + d);
});

test("serialize(parse(file)) without normalization also compiles identically", () => {
  ensureTrainerproc();
  const parsed = P.parse(original);
  const expected = compile(original, SRC);
  const actual = compile(P.serializeFile(parsed), SRC);
  const d = firstDiff(expected, actual);
  assert.ok(!d, "generated C differs at " + d);
});

test("normalization is idempotent and serialization is stable", () => {
  const parsed = P.parse(original);
  const once = parsed.trainers.map(P.normalizeTrainer);
  const text1 = once.map((t) => P.serializeTrainer(t)).join("\n");
  const again = P.parse(text1);
  assert.deepStrictEqual(again.errors, []);
  const text2 = again.trainers.map(P.normalizeTrainer).map((t) => P.serializeTrainer(t)).join("\n");
  assert.strictEqual(text2, text1);
});

test("a fixture using every field compiles and round-trips", () => {
  ensureTrainerproc();
  const fixture = [
    "/*",
    " * A tidepool researcher who studies Corsola reefs.",
    " *",
    " * @stage 3",
    " * @role Gym Leader",
    " */",
    "=== TRAINER_TB_FIXTURE ===",
    "Name: MARINA",
    "Class: Leader",
    "Pic: Lass",
    "Gender: Female",
    "Music: Female",
    "Items: Full Restore / Hyper Potion",
    "Battle Type: Doubles",
    "AI: Smart Trainer / Omniscient",
    "Mugshot: Purple",
    "Starting Status: Rain",
    "Difficulty: Hard",
    "Party Size: 2",
    "Pool Rules: Weather Doubles",
    "Pool Pick Functions: Default",
    "Pool Prune: None",
    "",
    "Shelly (Corsola) (F) @ King's Rock",
    "Level: 33",
    "Ability: Natural Cure",
    "IVs: 20 HP / 31 Atk / 0 Def / 31 SpA / 31 SpD / 31 Spe",
    "EVs: 252 HP / 4 Def / 252 SpD",
    "Ball: Dive Ball",
    "Happiness: 255",
    "Calm Nature",
    "Shiny: Yes",
    "Tera Type: Water",
    "Tags: Lead / Weather Setter",
    "- Scald",
    "- Recover",
    "",
    "Mr. Mime",
    "Level: 34",
    "Dynamax Level: 5",
    "Gigantamax: No",
    "Tags: Ace",
    "- Psychic",
    "",
    "Meowstic (M)",
    "Level: 30",
    "",
  ].join("\n");
  const parsed = P.parse(fixture);
  assert.deepStrictEqual(parsed.errors, []);
  const t = P.normalizeTrainer(parsed.trainers[0]);
  assert.strictEqual(t.meta.stage, "3");
  assert.strictEqual(t.backstory, "A tidepool researcher who studies Corsola reefs.");
  assert.strictEqual(t.party[0].species, "SPECIES_CORSOLA");
  assert.strictEqual(t.party[0].item, "ITEM_KINGS_ROCK");
  assert.strictEqual(t.party[0].nature, "NATURE_CALM");
  assert.strictEqual(t.party[1].species, "SPECIES_MR_MIME");
  assert.strictEqual(t.party[2].species, "SPECIES_MEOWSTIC_M");
  assert.strictEqual(t.difficulty, "Hard");
  const label = "fixture.party";
  assert.strictEqual(compile(P.serializeTrainer(t), label), compile(fixture, label));
});
