/* Trainer Builder — battle math.
 *
 * Stats follow CalculateMonStats / ModifyStatByNature (src/pokemon.c).
 * Damage follows DoMoveDamageCalcVars + ApplyModifiersAfterDmgRoll
 * (src/battle_util.c) for the parts modelled here:
 *
 *   base  = power * Atk * (2*Lv/5 + 2) / Def / 50 + 2        (integer, left to right)
 *   roll  = base * (100 - r) / 100   for r = 0..15            (16 equally likely rolls)
 *   STAB  x1.5 (x2 Adaptability), then type effectiveness,
 *         each applied as uq4.12 "half down": (mod*dmg + 2047) >> 12
 *   min 1 damage unless the target is immune.
 *
 * Deliberately NOT modelled (stated in the app): critical hits, weather,
 * terrain, stat stages, burn, held items, spread-move reduction, and
 * abilities other than the short list in ABILITY_EFFECTS. Variable-power
 * moves are modelled where the power depends only on the two Pokémon at
 * full HP (Return, Frustration, Low Kick, Heavy Slam, Gyro Ball, Electro
 * Ball, Eruption, Flail, Present, Magnitude); the rest are reported as
 * "not modelled" instead of guessed.
 */
(function (TB) {
  "use strict";

  var STATS = ["hp", "atk", "def", "spa", "spd", "spe"];
  var CAT_PHYSICAL = 0, CAT_SPECIAL = 1, CAT_STATUS = 2;

  function applyMod(mod4096, v) { return Math.floor((mod4096 * v + 2047) / 4096); }

  /* ---- stats ------------------------------------------------------------ */
  function calcStats(D, spc, level, ivs, evs, natureC) {
    var s = D.sp[D.canon(spc)];
    if (!s) return null;
    var nat = D.nat[natureC] || D.nat.NATURE_HARDY || {};
    var out = {};
    STATS.forEach(function (k, idx) {
      var base = s.b[idx], iv = ivs[k], ev = evs[k];
      if (k === "hp") {
        out.hp = spc === "SPECIES_SHEDINJA" ? 1 : Math.floor(((2 * base + iv + Math.floor(ev / 4)) * level) / 100) + level + 10;
        return;
      }
      var n = Math.floor(((2 * base + iv + Math.floor(ev / 4)) * level) / 100) + 5;
      if (nat.up && nat.up !== nat.down) {
        if (k === nat.up) n = Math.floor((n * 110) / 100);
        else if (k === nat.down) n = Math.floor((n * 90) / 100);
      }
      out[k] = n;
    });
    return out;
  }

  function fillStats(partial, dflt) {
    var out = {};
    STATS.forEach(function (k) {
      var v = partial && partial[k] != null && partial[k] !== "" ? +partial[k] : dflt;
      out[k] = v;
    });
    return out;
  }

  /**
   * What the game will actually build from a trainers.party entry, applying
   * the engine/trainerproc defaults: Level 100, IVs 31, EVs 0, Hardy,
   * friendship 0, ability slot 1, class ball, last-4 level-up moves.
   */
  function effectiveMon(D, trainer, mon, opts) {
    opts = opts || {};
    var spc = D.canon(mon.species);
    var s = D.sp[spc];
    if (!s) return null;
    var level = mon.level != null && mon.level !== "" ? +mon.level : 100;
    level = Math.max(1, Math.min(100, level));
    var ivs = fillStats(mon.ivs, opts.defaultIV != null ? opts.defaultIV : 31);
    var evs = fillStats(mon.evs, 0);
    var natureC = mon.nature ? D.canon(mon.nature) : "NATURE_HARDY";
    var abilities = s.a.map(function (i) { return D.abIdx[i] ? D.abIdx[i].c : null; });
    var wanted = mon.ability ? D.canon(mon.ability) : "";
    var slot = wanted ? abilities.indexOf(wanted) : 0;
    var silent = wanted && slot < 0;
    if (slot < 0) slot = 0;
    var ability = abilities[slot];
    var explicitMoves = (mon.moves || []).filter(Boolean).map(function (m) { return D.canon(m); });
    var moves = explicitMoves.length ? explicitMoves : D.defaultMoves(spc, level);
    return {
      species: spc, rec: s, level: level, ivs: ivs, evs: evs, nature: natureC,
      ability: ability, abilitySlot: slot, abilityRequested: wanted, abilitySilentlyChanged: !!silent,
      item: mon.item ? D.canon(mon.item) : "", friendship: mon.happiness != null && mon.happiness !== "" ? +mon.happiness : 0,
      ball: mon.ball ? D.canon(mon.ball) : D.classBall(trainer && trainer.trainerClass),
      moves: moves, movesAreDefault: !explicitMoves.length,
      types: s.t[0] === s.t[1] ? [s.t[0]] : [s.t[0], s.t[1]],
      stats: calcStats(D, spc, level, ivs, evs, natureC),
    };
  }

  /* ---- type effectiveness ------------------------------------------------ */
  function typeEff(D, moveType, defTypes) {
    var chart = D.raw.typeChart, m = 1;
    defTypes.forEach(function (t) {
      var row = chart[moveType];
      m *= row && row[t] != null ? row[t] : 1;
    });
    return m;
  }

  // Ability effects included in the model. Everything else is ignored.
  var ABILITY_EFFECTS = {
    ABILITY_LEVITATE: { immune: "TYPE_GROUND" }, ABILITY_EARTH_EATER: { immune: "TYPE_GROUND" },
    ABILITY_FLASH_FIRE: { immune: "TYPE_FIRE" }, ABILITY_WELL_BAKED_BODY: { immune: "TYPE_FIRE" },
    ABILITY_WATER_ABSORB: { immune: "TYPE_WATER" }, ABILITY_STORM_DRAIN: { immune: "TYPE_WATER" },
    ABILITY_DRY_SKIN: { immune: "TYPE_WATER" }, ABILITY_VOLT_ABSORB: { immune: "TYPE_ELECTRIC" },
    ABILITY_LIGHTNING_ROD: { immune: "TYPE_ELECTRIC" }, ABILITY_MOTOR_DRIVE: { immune: "TYPE_ELECTRIC" },
    ABILITY_SAP_SIPPER: { immune: "TYPE_GRASS" }, ABILITY_WONDER_GUARD: { onlySuperEffective: true },
    ABILITY_THICK_FAT: { halveTypes: ["TYPE_FIRE", "TYPE_ICE"] },
    ABILITY_HUGE_POWER: { doubleAtk: true }, ABILITY_PURE_POWER: { doubleAtk: true },
    ABILITY_ADAPTABILITY: { stab: 8192 },
  };

  /* ---- distributions ------------------------------------------------------ */
  // A distribution is an array of [value, probability] pairs.
  function uniform(values) {
    var p = 1 / values.length, map = {};
    values.forEach(function (v) { map[v] = (map[v] || 0) + p; });
    return Object.keys(map).map(function (k) { return [+k, map[k]]; });
  }
  function convolve(a, b, cap) {
    var map = {};
    a.forEach(function (x) {
      b.forEach(function (y) {
        var v = x[0] + y[0];
        if (cap != null && v > cap) v = cap;
        map[v] = (map[v] || 0) + x[1] * y[1];
      });
    });
    return Object.keys(map).map(function (k) { return [+k, map[k]]; });
  }
  function mixture(parts) { // [[weight, dist], ...]
    var map = {};
    parts.forEach(function (pd) {
      pd[1].forEach(function (x) { map[x[0]] = (map[x[0]] || 0) + pd[0] * x[1]; });
    });
    return Object.keys(map).map(function (k) { return [+k, map[k]]; });
  }
  function power(dist, n, cap) {
    var out = [[0, 1]];
    for (var i = 0; i < n; i++) out = convolve(out, dist, cap);
    return out;
  }
  function probAtLeast(dist, hp) {
    var p = 0;
    dist.forEach(function (x) { if (x[0] >= hp) p += x[1]; });
    return p;
  }
  function distMin(d) { return Math.min.apply(null, d.map(function (x) { return x[0]; })); }
  function distMax(d) { return Math.max.apply(null, d.map(function (x) { return x[0]; })); }
  function distMean(d) { return d.reduce(function (s, x) { return s + x[0] * x[1]; }, 0); }

  /* ---- move power --------------------------------------------------------- */
  function weightPower(w) { // Low Kick / Grass Knot, weight in 0.1 kg
    if (w < 100) return 20; if (w < 250) return 40; if (w < 500) return 60;
    if (w < 1000) return 80; if (w < 2000) return 100; return 120;
  }

  // Returns [[weight, power], ...] or null when the power is not modelled.
  function powerOptions(move, att, def) {
    switch (move.e) {
      case "EFFECT_RETURN": return [[1, Math.max(1, Math.floor((10 * att.friendship) / 25))]];
      case "EFFECT_FRUSTRATION": return [[1, Math.max(1, Math.floor((10 * (255 - att.friendship)) / 25))]];
      case "EFFECT_LOW_KICK": return [[1, weightPower(def.rec.w)]];
      case "EFFECT_HEAT_CRASH": {
        var r = def.rec.w ? att.rec.w / def.rec.w : 5;
        return [[1, r >= 5 ? 120 : r >= 4 ? 100 : r >= 3 ? 80 : r >= 2 ? 60 : 40]];
      }
      case "EFFECT_GYRO_BALL": return [[1, Math.min(150, Math.floor((25 * def.stats.spe) / Math.max(1, att.stats.spe)) + 1)]];
      case "EFFECT_ELECTRO_BALL": {
        var q = att.stats.spe / Math.max(1, def.stats.spe);
        return [[1, q >= 4 ? 150 : q >= 3 ? 120 : q >= 2 ? 80 : q >= 1 ? 60 : 40]];
      }
      case "EFFECT_ERUPTION": return [[1, 150]];
      case "EFFECT_FLAIL": return [[1, 20]];
      case "EFFECT_PRESENT": return [[102 / 256, 40], [76 / 256, 80], [26 / 256, 120], [52 / 256, 0]];
      case "EFFECT_MAGNITUDE": return [[0.05, 10], [0.10, 30], [0.20, 50], [0.30, 70], [0.20, 90], [0.10, 110], [0.05, 150]];
    }
    if (move.p > 1) return [[1, move.p]];
    return null;
  }

  // Hit-count distribution: fixed strikeCount, or 2-5 hits at 35/35/15/15 %.
  function hitOptions(move) {
    if (move.e === "EFFECT_MULTI_HIT") return [[0.35, 2], [0.35, 3], [0.15, 4], [0.15, 5]];
    return [[1, move.hits || 1]];
  }

  /**
   * Damage of one move from att to def (both from effectiveMon).
   * Returns { kind, eff, perHit (16 rolls or null), dist, min, max, pctMin, pctMax, note }.
   * kind: "damage" | "fixed" | "immune" | "status" | "unmodelled".
   */
  function damage(D, att, def, moveC) {
    var move = D.mv[D.canon(moveC)];
    var res = { move: moveC, kind: "status", eff: 1, dist: null, note: "" };
    if (!move) { res.kind = "unmodelled"; res.note = "unknown move"; return res; }
    res.priority = move.pri;
    res.accuracy = move.a;
    if (move.cat === CAT_STATUS) return res;
    var moveType = move.t;
    var defAbil = ABILITY_EFFECTS[def.ability] || {};
    var attAbil = ABILITY_EFFECTS[att.ability] || {};
    var eff = typeEff(D, moveType, def.types);
    var tyC = (D.tyIdx[moveType] || {}).c;
    if (defAbil.immune && defAbil.immune === tyC) { eff = 0; res.note = D.label("ability", def.ability) + " blocks it"; }
    if (defAbil.onlySuperEffective && eff <= 1) { eff = 0; res.note = "Wonder Guard blocks it"; }
    res.eff = eff;
    if (eff === 0) { res.kind = "immune"; res.dist = [[0, 1]]; res.min = res.max = 0; res.pctMin = res.pctMax = 0; return res; }
    var hp = def.stats.hp;

    // Fixed-damage moves ignore stats and effectiveness (but not immunity).
    var fixed = null;
    if (move.e === "EFFECT_LEVEL_DAMAGE") fixed = [[att.level, 1]];
    else if (move.e === "EFFECT_FIXED_DAMAGE_ARG") fixed = [[move.fd, 1]];
    else if (move.e === "EFFECT_SUPER_FANG") fixed = [[Math.max(1, Math.floor(hp / 2)), 1]];
    else if (move.e === "EFFECT_PSYWAVE") {
      var vals = [];
      for (var r = 0; r <= 100; r++) vals.push(Math.max(1, Math.floor((att.level * (r + 50)) / 100)));
      fixed = uniform(vals);
    }
    if (fixed) {
      res.kind = "fixed";
      return finish(res, fixed, hp);
    }

    var powers = powerOptions(move, att, def);
    if (!powers) { res.kind = "unmodelled"; res.note = "power depends on battle state"; return res; }

    var physical = move.cat === CAT_PHYSICAL;
    var A = physical ? att.stats.atk : att.stats.spa;
    var Dd = physical ? def.stats.def : def.stats.spd;
    if (move.e === "EFFECT_FOUL_PLAY") A = def.stats.atk;
    if (move.e === "EFFECT_BODY_PRESS") A = att.stats.def;
    if (move.e === "EFFECT_PSYSHOCK") Dd = def.stats.def;
    if (attAbil.doubleAtk && physical) A *= 2;
    if (defAbil.halveTypes && defAbil.halveTypes.indexOf(tyC) >= 0) A = Math.floor(A / 2);

    var stab = att.types.indexOf(moveType) >= 0 ? (attAbil.stab || 6144) : 4096;
    var eff4096 = Math.round(eff * 4096);
    var lvlTerm = Math.floor((2 * att.level) / 5) + 2;

    var parts = [];
    powers.forEach(function (pw) {
      if (pw[1] === 0) { parts.push([pw[0], [[0, 1]]]); return; } // Present heals instead
      var base = Math.floor(Math.floor((pw[1] * A * lvlTerm) / Math.max(1, Dd)) / 50) + 2;
      var rolls = [];
      for (var r = 0; r <= 15; r++) {
        var d = Math.floor((base * (100 - r)) / 100);
        d = applyMod(stab, d);
        d = applyMod(eff4096, d);
        rolls.push(Math.max(1, d));
      }
      if (powers.length === 1) res.perHit = rolls.slice().sort(function (a, b) { return a - b; });
      parts.push([pw[0], uniform(rolls)]);
    });
    var perHit = parts.length === 1 ? parts[0][1] : mixture(parts);
    var total = mixture(hitOptions(move).map(function (h) { return [h[0], power(perHit, h[1], null)]; }));
    res.kind = "damage";
    res.hits = hitOptions(move);
    return finish(res, total, hp);
  }

  function finish(res, dist, hp) {
    res.dist = dist;
    res.min = distMin(dist);
    res.max = distMax(dist);
    res.mean = distMean(dist);
    res.pctMin = (100 * res.min) / hp;
    res.pctMax = (100 * res.max) / hp;
    res.ko = koChance(dist, hp);
    return res;
  }

  // Smallest n (<= 8) with any chance to KO in n uses, the chance at n, and
  // the n at which the chance first reaches 50 % ("median turns to KO").
  function koChance(dist, hp) {
    var acc = [[0, 1]], firstN = null, firstP = 0, medianN = null;
    for (var n = 1; n <= 8; n++) {
      acc = convolve(acc, dist, hp);
      var p = probAtLeast(acc, hp);
      if (firstN == null && p > 0) { firstN = n; firstP = p; }
      if (medianN == null && p >= 0.5) { medianN = n; break; }
    }
    return { n: firstN, p: firstP, median: medianN };
  }

  /* ---- matchups ----------------------------------------------------------- */
  // Best damaging move by expected damage x accuracy.
  function bestMove(D, att, def) {
    var best = null;
    att.moves.forEach(function (m) {
      var r = damage(D, att, def, m);
      if (r.kind !== "damage" && r.kind !== "fixed") return;
      var acc = r.accuracy > 0 ? r.accuracy / 100 : 1;
      var score = r.mean * acc;
      if (!best || score > best.score) { r.score = score; best = r; }
    });
    return best;
  }

  /**
   * One-on-one outcome with no switching, items, status or stat changes.
   * Each side uses its best damaging move every turn; turns-to-KO is the
   * median (first n with >= 50 % KO chance). Faster side acts first at
   * equal turns; higher move priority beats speed.
   * Returns { result: "win"|"loss"|"tie", a, b, turnsA, turnsB, aFirst }.
   */
  function matchup(D, a, b) {
    var ma = bestMove(D, a, b), mb = bestMove(D, b, a);
    var ta = ma && ma.ko.median ? ma.ko.median : Infinity;
    var tb = mb && mb.ko.median ? mb.ko.median : Infinity;
    var pa = ma ? ma.priority : 0, pb = mb ? mb.priority : 0;
    var aFirst = pa !== pb ? pa > pb : a.stats.spe === b.stats.spe ? null : a.stats.spe > b.stats.spe;
    var result;
    if (ta === Infinity && tb === Infinity) result = "tie";
    else if (ta < tb) result = "win";
    else if (tb < ta) result = "loss";
    else result = aFirst === null ? "tie" : aFirst ? "win" : "loss";
    return { result: result, a: ma, b: mb, turnsA: ta, turnsB: tb, aFirst: aFirst };
  }

  TB.calc = {
    STATS: STATS, calcStats: calcStats, effectiveMon: effectiveMon, typeEff: typeEff, damage: damage,
    bestMove: bestMove, matchup: matchup, koChance: koChance, applyMod: applyMod,
    ABILITY_EFFECTS: ABILITY_EFFECTS, uniform: uniform, convolve: convolve,
  };
})(typeof globalThis !== "undefined" ? (globalThis.TB = globalThis.TB || {}) : (this.TB = this.TB || {}));
