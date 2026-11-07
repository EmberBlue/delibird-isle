// Battle math and checks, against independent reference values.
"use strict";
const test = require("node:test");
const assert = require("node:assert");
const fs = require("fs");
const path = require("path");
const { execFileSync } = require("child_process");

const ROOT = path.resolve(__dirname, "../../..");
const APP = path.join(ROOT, "tools/trainer_builder/app/core");
["party.js", "data.js", "calc.js", "checks.js", "emit.js"].forEach((f) => require(path.join(APP, f)));
const TB = globalThis.TB;

const DATA = path.join(ROOT, "tools/trainer_builder/build/data.json");
if (!fs.existsSync(DATA)) execFileSync("python3", [path.join(ROOT, "tools/trainer_builder/extract.py"), "--no-images"], { stdio: "ignore" });
const D = new TB.Data(JSON.parse(fs.readFileSync(DATA, "utf8")));

test("stats match Bulbapedia's worked example (Lv 78 Adamant Garchomp)", () => {
  // https://bulbapedia.bulbagarden.net/wiki/Stat#Example
  const s = TB.calc.calcStats(D, "SPECIES_GARCHOMP", 78,
    { hp: 24, atk: 12, def: 30, spa: 16, spd: 23, spe: 5 },
    { hp: 74, atk: 190, def: 91, spa: 48, spd: 84, spe: 23 }, "NATURE_ADAMANT");
  assert.deepStrictEqual(s, { hp: 289, atk: 278, def: 193, spa: 135, spd: 171, spe: 171 });
});

test("Shedinja always has 1 HP", () => {
  const s = TB.calc.calcStats(D, "SPECIES_SHEDINJA", 50, { hp: 31, atk: 31, def: 31, spa: 31, spd: 31, spe: 31 },
    { hp: 252, atk: 0, def: 0, spa: 0, spd: 0, spe: 0 }, "NATURE_HARDY");
  assert.strictEqual(s.hp, 1);
});

test("damage matches Bulbapedia's worked example (Lv 75 Glaceon Ice Fang vs Garchomp: 168-196)", () => {
  // https://bulbapedia.bulbagarden.net/wiki/Damage#Example
  const ice = D.ty.TYPE_ICE.i, dragon = D.ty.TYPE_DRAGON.i, ground = D.ty.TYPE_GROUND.i;
  const att = { level: 75, types: [ice], ability: "ABILITY_SNOW_CLOAK", friendship: 0, rec: D.sp.SPECIES_GLACEON,
    stats: { hp: 200, atk: 123, def: 100, spa: 100, spd: 100, spe: 100 } };
  const def = { level: 75, types: [dragon, ground], ability: "ABILITY_SAND_VEIL", rec: D.sp.SPECIES_GARCHOMP,
    stats: { hp: 1000, atk: 100, def: 163, spa: 100, spd: 100, spe: 100 } };
  const r = TB.calc.damage(D, att, def, "MOVE_ICE_FANG");
  assert.strictEqual(r.kind, "damage");
  assert.strictEqual(r.eff, 4);
  assert.strictEqual(r.min, 168);
  assert.strictEqual(r.max, 196);
  assert.strictEqual(r.perHit.length, 16);
});

test("immunities: type chart and modelled abilities", () => {
  const e = (sp, lv, ab) => TB.calc.effectiveMon(D, {}, { species: sp, level: lv, ability: ab });
  const gengar = e("SPECIES_GENGAR", 50);
  const machamp = e("SPECIES_MACHAMP", 50);
  assert.strictEqual(TB.calc.damage(D, machamp, gengar, "MOVE_SEISMIC_TOSS").kind, "immune");
  const bronzong = e("SPECIES_BRONZONG", 50, "ABILITY_LEVITATE");
  assert.strictEqual(bronzong.ability, "ABILITY_LEVITATE");
  assert.strictEqual(TB.calc.damage(D, machamp, bronzong, "MOVE_EARTHQUAKE").kind, "immune");
  assert.strictEqual(TB.calc.damage(D, machamp, gengar, "MOVE_SEISMIC_TOSS").min, 0);
  const st = TB.calc.damage(D, machamp, bronzong, "MOVE_SEISMIC_TOSS");
  assert.strictEqual(st.kind, "fixed");
  assert.strictEqual(st.min, 50);
});

test("Present (Delibird) mixes 40/80/120 power and a heal by the engine's 256-based odds", () => {
  const e = (sp, lv) => TB.calc.effectiveMon(D, {}, { species: sp, level: lv });
  const r = TB.calc.damage(D, e("SPECIES_DELIBIRD", 30), e("SPECIES_GEODUDE", 30), "MOVE_PRESENT");
  const zero = r.dist.filter((x) => x[0] === 0).reduce((s, x) => s + x[1], 0);
  assert.ok(Math.abs(zero - 52 / 256) < 1e-9, "heal share " + zero);
  const total = r.dist.reduce((s, x) => s + x[1], 0);
  assert.ok(Math.abs(total - 1) < 1e-9);
});

test("KO chances come from exact roll distributions", () => {
  const d = TB.calc.uniform([10, 11, 12, 13]);
  assert.deepStrictEqual(TB.calc.koChance(d, 13), { n: 1, p: 0.25, median: 2 });
  assert.deepStrictEqual(TB.calc.koChance(d, 26), { n: 2, p: 1 / 16, median: 3 });
});

test("default moveset follows GiveBoxMonInitialMoveset (last four, skip level 0)", () => {
  const lv = D.levelUp("SPECIES_BULBASAUR");
  const expected = [];
  for (const e of lv) {
    if (e.level > 10) break;
    if (e.level === 0 || expected.includes(e.move)) continue;
    expected.push(e.move);
    if (expected.length > 4) expected.shift();
  }
  assert.deepStrictEqual(D.defaultMoves("SPECIES_BULBASAUR", 10), expected);
  assert.strictEqual(D.defaultMoves("SPECIES_BULBASAUR", 10).length, 4);
});

test("an ability the species can't have is an error that names the substitute", () => {
  const t = { id: "TRAINER_TB_TEST", name: "TEST", pic: "TRAINER_PIC_HIKER", trainerClass: "TRAINER_CLASS_HIKER", ai: ["AI_FLAG_BASIC_TRAINER"],
    party: [{ species: "SPECIES_HARIYAMA", level: 40, ability: "ABILITY_LEVITATE", moves: [] }], meta: {} };
  const list = TB.checks.run(D, t, {});
  const err = list.find((c) => c.code === "E_ABILITY");
  assert.ok(err, JSON.stringify(list));
  assert.match(err.msg, /Thick Fat/);
});

test("evolution-level, learnset and level-cap warnings", () => {
  const t = { id: "TRAINER_TB_TEST", name: "TEST", pic: "TRAINER_PIC_HIKER", trainerClass: "TRAINER_CLASS_HIKER", ai: ["AI_FLAG_BASIC_TRAINER"],
    meta: { stage: "0" },
    party: [{ species: "SPECIES_VENUSAUR", level: 20, moves: ["MOVE_SOLAR_BEAM", "MOVE_SURF"] }] };
  const codes = TB.checks.run(D, t, {}).map((c) => c.code);
  assert.ok(codes.includes("W_EVO_LEVEL"));
  assert.ok(codes.includes("W_MOVE_ILLEGAL"), "Venusaur can't learn Surf");
  assert.ok(codes.includes("W_LEVEL_CAP"), "Lv 20 is above the stage-0 cap");
});

test("every trainer in trainers.party runs through the checks without throwing", () => {
  const parsed = TB.party.parse(D.raw.partyText);
  let errors = 0;
  parsed.trainers.forEach((raw) => {
    const t = TB.party.normalizeTrainer(raw);
    const list = TB.checks.run(D, t, {});
    errors += list.filter((c) => c.code === "E_UNKNOWN").length;
  });
  assert.strictEqual(errors, 0, "stock trainers reference only defined constants");
});

test("opponents.h lines number new IDs from TRAINERS_COUNT and flag the cap", () => {
  const ts = [{ id: "TRAINER_A_NEW" }, { id: "TRAINER_SAWYER_1" }, { id: "TRAINER_B_NEW" }];
  const o = TB.emit.opponents(D, ts);
  assert.deepStrictEqual(o.ids, ["TRAINER_A_NEW", "TRAINER_B_NEW"]);
  assert.strictEqual(o.count, D.opponents.count + 2);
  assert.match(o.defs[0], new RegExp("TRAINER_A_NEW\\s+" + D.opponents.count + "$"));
});
