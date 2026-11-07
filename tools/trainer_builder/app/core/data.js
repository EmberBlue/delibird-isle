/* Trainer Builder — data index.
 *
 * Wraps the JSON written by extract.py with lookups: constant → record,
 * alias → canonical constant, learnsets, evolution requirements and the
 * engine's default moveset. DOM-free (shared with the Node tests).
 */
(function (TB) {
  "use strict";

  function index(list, key) {
    var out = {};
    (list || []).forEach(function (r) { out[r[key || "c"]] = r; });
    return out;
  }

  function Data(raw) {
    var D = this;
    D.raw = raw;
    D.meta = raw.meta;
    D.config = raw.config || {};
    D.species = raw.species;
    D.moves = raw.moves;
    D.items = raw.items;
    D.abilities = raw.abilities;
    D.natures = raw.natures;
    D.types = raw.types;
    D.classes = raw.classes;
    D.pics = raw.pics;
    D.music = raw.music;
    D.aiFlags = raw.aiFlags;

    D.sp = index(raw.species);
    D.spIdx = index(raw.species, "i");
    D.mv = index(raw.moves);
    D.mvIdx = index(raw.moves, "i");
    D.it = index(raw.items);
    D.ab = index(raw.abilities);
    D.abIdx = index(raw.abilities, "i");
    D.nat = index(raw.natures);
    D.ty = index(raw.types);
    D.tyIdx = index(raw.types, "i");
    D.cls = index(raw.classes);
    D.pic = index(raw.pics);
    D.mus = index(raw.music);
    D.ai = index(raw.aiFlags);
    D.ball = {};
    (raw.balls || []).forEach(function (c) { D.ball[c] = D.it[c]; });
    D.tm = {};
    (raw.tms || []).forEach(function (c) { D.tm[c] = "TM"; });
    (raw.hms || []).forEach(function (c) { D.tm[c] = "HM"; });
    D.lists = {
      mugshots: raw.mugshots || [], startingStatuses: raw.startingStatuses || [], poolRules: raw.poolRules || [],
      poolPicks: raw.poolPicks || [], poolPrunes: raw.poolPrunes || [], poolTags: raw.poolTags || [],
      difficulties: raw.difficulties || [],
    };
    D.aliasMap = {};
    Object.keys(raw.aliases || {}).forEach(function (p) {
      Object.keys(raw.aliases[p]).forEach(function (a) { D.aliasMap[a] = raw.aliases[p][a]; });
    });
    D.opponents = raw.opponents || { ids: {}, count: 0, max: 0 };
    D.baseline = {};
    ((raw.baseline || {}).ids || []).forEach(function (id) { D.baseline[id] = 1; });
    D.charmapChars = {};
    Array.from((raw.charmap || {}).chars || "").forEach(function (c) { D.charmapChars[c] = 1; });
    D.charmapCodes = {};
    ((raw.charmap || {}).codes || []).forEach(function (c) { D.charmapCodes[c] = 1; });
  }

  Data.prototype.canon = function (c) {
    return c && this.aliasMap[c] ? this.aliasMap[c] : c;
  };

  // Display label for a constant, by kind.
  Data.prototype.label = function (kind, c) {
    if (!c) return "";
    var D = this, r;
    c = D.canon(c);
    switch (kind) {
      case "species": r = D.sp[c]; break;
      case "move": r = D.mv[c]; break;
      case "item": case "ball": r = D.it[c]; break;
      case "ability": r = D.ab[c]; break;
      case "nature": r = D.nat[c]; break;
      case "type": r = D.ty[c]; break;
      case "class": r = D.cls[c]; break;
      case "pic": r = D.pic[c]; break;
      case "music": r = D.mus[c]; break;
      case "ai": r = D.ai[c]; break;
      default:
        var lists = D.lists[kind];
        if (lists) r = lists.filter(function (x) { return x.c === c; })[0];
    }
    return r ? r.n : c;
  };

  Data.prototype.image = function (key) {
    return key ? (this.raw.images || {})[key] || null : null;
  };

  /* ---- learnsets ---- */
  Data.prototype.levelUp = function (spc) {
    var s = this.sp[spc];
    if (!s || !s.lu) return [];
    var flat = this.raw.learn.lv[s.lu] || [], out = [];
    for (var i = 0; i < flat.length; i += 2) {
      var m = this.mvIdx[flat[i + 1]];
      if (m) out.push({ level: flat[i], move: m.c });
    }
    return out;
  };
  Data.prototype.teachable = function (spc) {
    var s = this.sp[spc], D = this;
    if (!s || !s.tm) return [];
    return (this.raw.learn.tm[s.tm] || []).map(function (i) { return D.mvIdx[i] && D.mvIdx[i].c; }).filter(Boolean);
  };
  Data.prototype.eggMoves = function (spc) {
    var s = this.sp[spc], D = this;
    if (!s || !s.egg) return [];
    return (this.raw.learn.egg[s.egg] || []).map(function (i) { return D.mvIdx[i] && D.mvIdx[i].c; }).filter(Boolean);
  };

  // Pre-evolution chain, nearest first: [{species, method, param, conds}]
  Data.prototype.ancestors = function (spc) {
    var D = this, out = [], s = D.sp[spc], guard = 0;
    while (s && s.pre != null && guard++ < 10) {
      var pre = D.spIdx[s.pre];
      if (!pre) break;
      var link = (pre.ev || []).filter(function (e) { return e[2] === s.i; })[0] || ["?", 0, s.i, []];
      out.push({ species: pre.c, method: link[0], param: link[1], conds: link[3] || [] });
      s = pre;
    }
    return out;
  };

  // Lowest level at which this species can exist through normal play,
  // from level-gated evolution steps along its chain.
  Data.prototype.minLevel = function (spc) {
    var chain = this.ancestors(spc), best = { level: 1, step: null }, child = spc;
    for (var i = 0; i < chain.length; i++) {
      var a = chain[i];
      if (/LEVEL/.test(a.method) && a.param > best.level) best = { level: a.param, step: { from: a.species, to: child, method: a.method } };
      child = a.species;
    }
    return best;
  };

  // Every way a species can know a move: own level-up/TM/tutor/egg, or
  // learned before evolving.
  Data.prototype.moveSources = function (spc) {
    var D = this, out = {};
    function add(move, src) { (out[move] = out[move] || []).push(src); }
    function fromSpecies(c, via) {
      D.levelUp(c).forEach(function (e) { add(e.move, { how: e.level === 0 ? "evo" : "lv", level: e.level, via: via }); });
      D.teachable(c).forEach(function (m) { add(m, { how: D.tm[m] || "tutor", via: via }); });
      D.eggMoves(c).forEach(function (m) { add(m, { how: "egg", via: via }); });
    }
    fromSpecies(spc, null);
    this.ancestors(spc).forEach(function (a) { fromSpecies(a.species, a.species); });
    return out;
  };

  // GiveBoxMonInitialMoveset (src/pokemon.c): walk the level-up learnset in
  // order up to the mon's level, skip level-0 evolution moves and moves
  // already known, and keep the last four.
  Data.prototype.defaultMoves = function (spc, level) {
    var moves = [];
    var list = this.levelUp(spc);
    for (var i = 0; i < list.length; i++) {
      var e = list[i];
      if (e.level > level) break;
      if (e.level === 0) continue;
      if (moves.indexOf(e.move) >= 0) continue;
      if (moves.length < 4) moves.push(e.move);
      else { moves.shift(); moves.push(e.move); }
    }
    return moves;
  };

  Data.prototype.classBall = function (classConst) {
    var gen7 = 6; // GEN_7 is 6 when GEN_1 is 0
    if ((this.config.B_TRAINER_CLASS_POKE_BALLS || 0) < gen7) return "ITEM_POKE_BALL";
    var c = this.cls[classConst];
    return (c && c.ball) || "ITEM_POKE_BALL";
  };

  // Level cap for a badge stage (0 = before the first badge).
  Data.prototype.levelCap = function (stage) {
    var caps = this.raw.levelCaps || [];
    if (stage == null || stage === "" || isNaN(stage)) return null;
    stage = Math.max(0, Math.min(caps.length - 1, Math.floor(stage)));
    return caps[stage] ? caps[stage].level : null;
  };

  TB.Data = Data;
})(typeof globalThis !== "undefined" ? (globalThis.TB = globalThis.TB || {}) : (this.TB = this.TB || {}));
