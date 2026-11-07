/* Trainer Builder — project model.
 *
 * A project is the set of trainers being designed, plus settings. It is
 * saved as JSON (export/import) and autosaved in the browser. Everything
 * the game needs lives in each trainer's trainers.party block; the design
 * metadata (badge stage, role, map, dialogue, accepted checks) rides along
 * in that block's comment as @key lines, so re-importing the repo's
 * trainers.party restores it.
 */
(function (TB) {
  "use strict";

  var SCHEMA = 2;
  var DIALOGUE_KEYS = { intro: "intro", defeat: "defeat", after: "after", notEnough: "notenough" };
  var ROLES = ["Route trainer", "Gym trainer", "Gym leader", "Rival", "Villain grunt", "Villain admin", "Villain boss",
               "Elite Four", "Champion", "Story", "Post-game"];

  function uid() { return "t" + Math.random().toString(36).slice(2, 9) + Date.now().toString(36).slice(-4); }

  // Canonical constants everywhere (ITEM_BLACKBELT -> ITEM_BLACK_BELT).
  function canonTrainer(D, t) {
    var c = function (x) { return x ? D.canon(x) : x; };
    t.trainerClass = c(t.trainerClass); t.pic = c(t.pic); t.music = c(t.music);
    t.items = (t.items || []).map(c); t.ai = (t.ai || []).map(c);
    t.party = (t.party || []).map(function (m) {
      m.species = c(m.species); m.item = c(m.item); m.ability = c(m.ability); m.ball = c(m.ball);
      m.nature = c(m.nature); m.teraType = c(m.teraType); m.moves = (m.moves || []).map(c);
      delete m.line;
      return m;
    });
    return t;
  }

  // Move dialogue between the trainer object and its comment metadata.
  function liftDialogue(t) {
    t.meta = t.meta || {};
    t.dialogue = t.dialogue || {};
    Object.keys(DIALOGUE_KEYS).forEach(function (k) {
      var mk = DIALOGUE_KEYS[k];
      if (t.meta[mk] != null) { t.dialogue[k] = t.meta[mk]; delete t.meta[mk]; }
    });
    return t;
  }
  function withDialogueMeta(t) {
    var c = JSON.parse(JSON.stringify(t));
    c.meta = c.meta || {};
    Object.keys(DIALOGUE_KEYS).forEach(function (k) {
      var v = (t.dialogue || {})[k];
      if (v) c.meta[DIALOGUE_KEYS[k]] = String(v).replace(/\r?\n/g, " ");
    });
    return c;
  }

  function fromParsed(D, raw) {
    var t = canonTrainer(D, TB.party.normalizeTrainer(raw));
    delete t.line; delete t.nameSet;
    liftDialogue(t);
    t.uid = uid();
    return t;
  }

  function newTrainer(D, existing) {
    var n = 1, ids = {};
    (existing || []).forEach(function (t) { ids[t.id] = 1; });
    while (ids["TRAINER_NEW_" + n] || ("TRAINER_NEW_" + n) in D.opponents.ids) n++;
    var t = TB.party.newTrainer("TRAINER_NEW_" + n, 0);
    delete t.line; delete t.nameSet;
    t.uid = uid();
    t.battleType = "Singles";
    t.ai = ["AI_FLAG_BASIC_TRAINER"];
    t.gender = "Male";
    t.music = "TRAINER_ENCOUNTER_MUSIC_MALE";
    t.meta = { stage: "", role: "", map: "" };
    t.dialogue = {};
    var m = TB.party.newMon();
    m.level = 5;
    t.party = [m];
    return t;
  }

  function newMon(level) {
    var m = TB.party.newMon();
    m.level = level || 5;
    return m;
  }

  function create(D) {
    return {
      schema: SCHEMA, name: "Delibird Isle trainers", trainers: [],
      settings: { canonOnly: true, learnsetOnly: true, showGimmicks: false },
      balance: { maps: [], methods: ["land_mons", "water_mons", "fishing_mons", "rock_smash_mons"], levelMode: "avg", levelOffset: 0, iv: 15, custom: [] },
      created: new Date().toISOString(), updated: new Date().toISOString(),
    };
  }

  // A new project starts with the trainers this repo has added on top of the
  // expansion baseline (found by diffing opponents.h against that commit).
  function seed(D) {
    var p = create(D);
    var parsed = TB.party.parse(D.raw.partyText || "");
    var hasBaseline = Object.keys(D.baseline).length > 0;
    parsed.trainers.forEach(function (raw) {
      if (hasBaseline && D.baseline[raw.id]) return;
      if (!hasBaseline) return;
      p.trainers.push(fromParsed(D, raw));
    });
    return p;
  }

  var _reference = null;
  function reference(D) {
    if (_reference) return _reference;
    var parsed = TB.party.parse(D.raw.partyText || "");
    _reference = parsed.trainers.map(function (raw) {
      var t = fromParsed(D, raw);
      t.uid = "ref:" + t.id + ":" + (t.difficulty || "Normal");
      t.custom = !D.baseline[t.id];
      return t;
    });
    return _reference;
  }

  function key(t) { return (t.id || "") + "|" + (t.difficulty || "Normal"); }

  function importParty(D, project, text, mode) {
    var parsed = TB.party.parse(text);
    var byKey = {};
    project.trainers.forEach(function (t, i) { byKey[key(t)] = i; });
    var added = 0, replaced = 0, skipped = 0;
    parsed.trainers.forEach(function (raw) {
      var t = fromParsed(D, raw);
      var k = key(t);
      if (k in byKey) {
        if (mode === "skip") { skipped++; return; }
        t.uid = project.trainers[byKey[k]].uid;
        project.trainers[byKey[k]] = t;
        replaced++;
      } else {
        byKey[k] = project.trainers.length;
        project.trainers.push(t);
        added++;
      }
    });
    return { added: added, replaced: replaced, skipped: skipped, errors: parsed.errors, found: parsed.trainers.length };
  }

  function partyText(t) { return TB.party.serializeTrainer(withDialogueMeta(t)); }

  function exportParty(project) {
    return project.trainers.map(partyText).join("\n");
  }

  function toJSON(project) {
    project.updated = new Date().toISOString();
    return JSON.stringify(project, null, 1);
  }

  function fromJSON(D, text) {
    var p = JSON.parse(text);
    if (!p || !Array.isArray(p.trainers)) throw new Error("This file isn't a Trainer Builder project (no trainers list).");
    var base = create(D);
    p.schema = SCHEMA;
    p.settings = Object.assign(base.settings, p.settings || {});
    p.balance = Object.assign(base.balance, p.balance || {});
    p.trainers = p.trainers.map(function (t) {
      // v1 saved-list entries looked like {obj: {...}, ts}
      if (t && t.obj) t = v1Trainer(t.obj);
      t = canonTrainer(D, Object.assign(newTrainer(D, []), t));
      t.uid = t.uid || uid();
      t.meta = t.meta || {};
      t.dialogue = t.dialogue || {};
      return t;
    });
    return p;
  }

  // The v1 builder stored {id, name, trainerClass, pic, gender, music,
  // doubleBattle, ai, items, backstory, party:[{species, gender, item, ball,
  // level, ability, ivs, moves}]}.
  function v1Trainer(o) {
    var t = TB.party.newTrainer(o.id || "TRAINER_UNNAMED", 0);
    t.name = o.name || ""; t.trainerClass = o.trainerClass || ""; t.pic = o.pic || "";
    t.gender = o.gender || ""; t.music = o.music || ""; t.ai = o.ai || []; t.items = o.items || [];
    t.battleType = o.doubleBattle ? "Doubles" : "Singles"; t.backstory = o.backstory || "";
    t.party = (o.party || []).map(function (m) {
      var n = TB.party.newMon();
      n.species = m.species || ""; n.gender = m.gender || ""; n.item = m.item || ""; n.ball = m.ball || "";
      n.level = m.level != null && m.level !== "" ? +m.level : null; n.ability = m.ability || "";
      n.ivs = m.ivs || null; n.moves = m.moves || [];
      return n;
    });
    return t;
  }

  function clone(t) {
    var c = JSON.parse(JSON.stringify(t));
    c.uid = uid();
    return c;
  }

  TB.project = {
    SCHEMA: SCHEMA, ROLES: ROLES, create: create, seed: seed, reference: reference, newTrainer: newTrainer,
    newMon: newMon, importParty: importParty, exportParty: exportParty, partyText: partyText, toJSON: toJSON,
    fromJSON: fromJSON, key: key, clone: clone, uid: uid, fromParsed: fromParsed, withDialogueMeta: withDialogueMeta,
  };
})(typeof globalThis !== "undefined" ? (globalThis.TB = globalThis.TB || {}) : (this.TB = this.TB || {}));
