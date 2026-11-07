/* Trainer Builder — trainers.party parser and serializer.
 *
 * Mirrors the grammar of tools/trainerproc/main.c (expansion 1.12):
 *   === TRAINER_ID ===            section header
 *   Key: value                    trainer attributes, then one empty line
 *   [Nickname (]Species[)] [(M|F)] [@ Item]
 *   Key: value / "<Nature> Nature" / "- Move"
 * Only /* *\/ comments exist: the file goes through `cpp -traditional-cpp`,
 * which strips block comments but leaves // alone.
 *
 * Name→constant conversion is a line-by-line port of trainerproc's
 * fprint_constant() and fprint_species(), so a value written as "Bug Catcher"
 * resolves to exactly the constant trainerproc would emit.
 *
 * DOM-free; loaded by the browser app and by the Node tests.
 */
(function (TB) {
  "use strict";

  var STAT_KEYS = ["hp", "atk", "def", "spa", "spd", "spe"];
  var STAT_LABEL = { hp: "HP", atk: "Atk", def: "Def", spa: "SpA", spd: "SpD", spe: "Spe" };
  var LABEL_STAT = { HP: "hp", Atk: "atk", Def: "def", SpA: "spa", SpD: "spd", Spe: "spe" };

  var GENDERED = { Basculegion: 1, Indeedee: 1, Oinkologne: 1, Meowstic: 1, Nidoran: 1 };
  var ITEMED = {
    "Arceus-Bug": ["Arceus", "Insect Plate"], "Arceus-Dark": ["Arceus", "Dread Plate"],
    "Arceus-Dragon": ["Arceus", "Draco Plate"], "Arceus-Electric": ["Arceus", "Zap Plate"],
    "Arceus-Fairy": ["Arceus", "Pixie Plate"], "Arceus-Fighting": ["Arceus", "Fist Plate"],
    "Arceus-Fire": ["Arceus", "Flame Plate"], "Arceus-Flying": ["Arceus", "Sky Plate"],
    "Arceus-Ghost": ["Arceus", "Spooky Plate"], "Arceus-Grass": ["Arceus", "Meadow Plate"],
    "Arceus-Ground": ["Arceus", "Earth Plate"], "Arceus-Ice": ["Arceus", "Icicle Plate"],
    "Arceus-Poison": ["Arceus", "Toxic Plate"], "Arceus-Psychic": ["Arceus", "Mind Plate"],
    "Arceus-Rock": ["Arceus", "Stone Plate"], "Arceus-Steel": ["Arceus", "Iron Plate"],
    "Arceus-Water": ["Arceus", "Splash Plate"], "Genesect-Burn": ["Genesect", "Burn Drive"],
    "Genesect-Chill": ["Genesect", "Chill Drive"], "Genesect-Douse": ["Genesect", "Douse Drive"],
    "Genesect-Shock": ["Genesect", "Shock Drive"], "Ogerpon-Cornerstone": ["Ogerpon", "Cornerstone Mask"],
    "Ogerpon-Hearthflame": ["Ogerpon", "Hearthflame Mask"], "Ogerpon-Wellspring": ["Ogerpon", "Wellspring Mask"],
  };
  ["Bug", "Dark", "Dragon", "Electric", "Fairy", "Fighting", "Fire", "Flying", "Ghost", "Grass", "Ground",
   "Ice", "Poison", "Psychic", "Rock", "Steel", "Water"].forEach(function (t) {
    ITEMED["Silvally-" + t] = ["Silvally", t + " Memory"];
  });

  /* ---- trainerproc name → constant ------------------------------------ */
  function isConstant(s, prefix) { return s.length > prefix.length && s.slice(0, prefix.length + 1) === prefix + "_"; }

  function toConstant(prefix, s) {
    s = s == null ? "" : String(s);
    if (isConstant(s, prefix)) return s;
    if (!s.length) return prefix + "_NONE";
    var out = prefix + "_";
    for (var i = 0; i < s.length; i++) {
      var c = s[i];
      if ((c >= "A" && c <= "Z") || (c >= "0" && c <= "9")) out += c;
      else if (c >= "a" && c <= "z") out += c.toUpperCase();
      else if (c === "'") continue;
      else {
        // trainerproc works on UTF-8 bytes: every byte of a non-ASCII char becomes "_".
        var bytes = unescape(encodeURIComponent(c)).length;
        for (var b = 0; b < bytes; b++) out += "_";
      }
    }
    return out;
  }

  function toSpeciesConstant(s) {
    s = s == null ? "" : String(s);
    if (isConstant(s, "SPECIES")) return s;
    if (!s.length) return "SPECIES_NONE";
    var out = "SPECIES_", underscore = false;
    for (var i = 0; i < s.length; i++) {
      var c = s[i];
      if ((c >= "A" && c <= "Z") || (c >= "0" && c <= "9") || (c >= "a" && c <= "z")) {
        if (underscore) out += "_";
        underscore = false;
        out += c.toUpperCase();
      } else if (c === "'" || c === "%" || c === "’") {
        /* dropped */
      } else if (c === "♂") { underscore = false; out += "_M"; }
      else if (c === "♀") { underscore = false; out += "_F"; }
      else if (c === "é") { if (underscore) out += "_"; underscore = false; out += "E"; }
      else underscore = true;
    }
    return out;
  }

  /* ---- parsing -------------------------------------------------------- */
  function stripComments(text) {
    // Replace /* */ with spaces (newlines kept so line numbers stay true).
    var comments = [], out = "", i = 0, line = 1;
    while (i < text.length) {
      if (text[i] === "/" && text[i + 1] === "*") {
        var end = text.indexOf("*/", i + 2);
        if (end < 0) end = text.length - 2;
        var body = text.slice(i + 2, end), startLine = line;
        var nl = (body.match(/\n/g) || []).length;
        comments.push({ text: body, startLine: startLine, endLine: startLine + nl });
        out += " " + body.replace(/[^\n]/g, "");
        line += nl;
        i = end + 2;
      } else {
        if (text[i] === "\n") line++;
        out += text[i];
        i++;
      }
    }
    return { text: out, comments: comments };
  }

  function cleanComment(body) {
    var lines = body.replace(/\r\n/g, "\n").split("\n");
    lines = lines.map(function (l) { return l.replace(/^\s*\* ?/, "").replace(/\s+$/, ""); });
    while (lines.length && !lines[0].trim()) lines.shift();
    while (lines.length && !lines[lines.length - 1].trim()) lines.pop();
    var meta = {}, prose = [];
    lines.forEach(function (l) {
      var m = /^@([A-Za-z][\w-]*)\s*(.*)$/.exec(l.trim());
      if (m) meta[m[1]] = m[2].trim();
      else prose.push(l);
    });
    while (prose.length && !prose[prose.length - 1].trim()) prose.pop();
    return { meta: meta, text: prose.join("\n") };
  }

  var SECTION_RE = /^===\s*([A-Za-z0-9_']+)\s*===\s*$/;
  var ATTR_RE = /^([A-Za-z_' -][A-Za-z0-9_' -]*?)\s*:\s*(.*?)\s*$/;
  var NATURE_RE = /^([A-Za-z0-9_']+)\s+Nature\s*$/;
  var MOVE_RE = /^-\s*(.+?)\s*$/;

  function parseStats(value, err) {
    var out = {}, parts = value.split("/");
    for (var i = 0; i < parts.length; i++) {
      var m = /^\s*(-?\d+)\s+([A-Za-z]+)\s*$/.exec(parts[i]);
      if (!m || !LABEL_STAT[m[2]]) { err("expected '<n> HP / <n> Atk / ...' but found '" + value + "'"); return null; }
      out[LABEL_STAT[m[2]]] = parseInt(m[1], 10);
    }
    return out;
  }

  function listValue(v) {
    return v.split("/").map(function (x) { return x.trim(); }).filter(function (x) { return x.length; });
  }

  function parseBool(v, err) {
    if (v === "Yes") return true;
    if (v === "No") return false;
    err("expected Yes or No, found '" + v + "'");
    return null;
  }

  function parseIntStrict(v, err) {
    if (!/^-?\d+$/.test(v)) { err("expected a whole number, found '" + v + "'"); return null; }
    return parseInt(v, 10);
  }

  function parseMonHeader(line) {
    var m = /^([^()@]+?)\s*(?:\(([^()]*)\))?\s*(?:\(([^()]*)\))?\s*(?:@\s*(.+?))?\s*$/.exec(line);
    if (!m || !m[1].trim()) return null;
    var first = m[1].trim(), second = m[2] != null ? m[2].trim() : null, third = m[3] != null ? m[3].trim() : null;
    var r = { nickname: "", species: first, gender: "", item: m[4] ? m[4].trim() : "" };
    if (second != null && third != null) { r.nickname = first; r.species = second; r.gender = third; }
    else if (second != null) {
      if (second.length === 1) r.gender = second;
      else { r.nickname = first; r.species = second; }
    }
    return r;
  }

  function newTrainer(id, line) {
    return {
      id: id, line: line, difficulty: "", name: "", nameSet: false, trainerClass: "", pic: "", gender: "", music: "",
      items: [], battleType: null, battleTypeKey: "Double Battle", ai: [], mugshot: "", startingStatus: "",
      partySize: null, poolRules: "", poolPick: "", poolPrune: "", party: [], backstory: "", meta: {},
    };
  }

  function newMon() {
    return {
      nickname: "", species: "", gender: "", item: "", level: null, ability: "", ivs: null, evs: null,
      ball: "", happiness: null, nature: "", shiny: null, dynamaxLevel: null, gigantamax: null,
      teraType: "", tags: [], moves: [],
    };
  }

  /**
   * Parse a trainers.party file (or a fragment of one).
   * Returns { pragmas, preamble, trainers, errors }. Values are kept as
   * written; call normalizeTrainer() to convert them to constants.
   */
  function parse(text) {
    var stripped = stripComments(String(text).replace(/\r\n/g, "\n"));
    var lines = stripped.text.split("\n");
    var errors = [], trainers = [], pragmas = {};
    var docByLine = {};
    stripped.comments.forEach(function (c) { docByLine[c.endLine + 1] = c; });
    var preamble = [];

    var i = 0, n = lines.length;
    function L(k) { return lines[k] === undefined ? null : lines[k]; }
    function isEmpty(s) { return s != null && /^\s*$/.test(s); }
    function err(lineIdx, msg, id) { errors.push({ line: lineIdx + 1, msg: msg, trainer: id || null }); }

    while (i < n) {
      var s = L(i);
      if (isEmpty(s)) { i++; continue; }
      if (/^\s*#/.test(s)) {
        var pm = /^#pragma\s+trainerproc\s+(\w+)\s+(.*?)\s*$/.exec(s);
        if (pm) pragmas[pm[1]] = pm[2];
        else err(i, "preprocessor line ignored by the importer: " + s.trim());
        i++;
        continue;
      }
      var sec = SECTION_RE.exec(s);
      if (!sec) { err(i, "expected '=== TRAINER_ID ===' but found: " + s.trim()); i++; continue; }

      var t = newTrainer(sec[1], i + 1);
      var doc = docByLine[i + 1];
      if (doc) {
        var cc = cleanComment(doc.text);
        t.backstory = cc.text;
        t.meta = cc.meta;
        doc.used = true;
      }
      i++;
      var where = function (k, msg) { err(k, msg, t.id); };

      // Trainer attributes.
      while (i < n && !isEmpty(L(i)) && !SECTION_RE.test(L(i))) {
        var am = ATTR_RE.exec(L(i));
        if (!am) break;
        applyTrainerAttr(t, am[1].trim(), am[2], function (msg) { where(i, msg); });
        i++;
      }
      if (!t.nameSet) where(i, "expected 'Name' before Pokémon");

      // Pokémon.
      while (i < n) {
        while (i < n && isEmpty(L(i))) i++;
        if (i >= n || SECTION_RE.test(L(i)) || /^\s*#/.test(L(i))) break;
        var h = parseMonHeader(L(i).trim());
        if (!h) { where(i, "expected a Pokémon line such as 'Pikachu (M) @ Light Ball'"); i++; continue; }
        var mon = newMon();
        mon.nickname = h.nickname; mon.species = h.species; mon.item = h.item;
        if (h.gender) {
          if (h.gender === "M" || h.gender === "F") mon.gender = h.gender;
          else where(i, "gender must be (M) or (F), found (" + h.gender + ")");
        }
        mon.line = i + 1;
        i++;
        while (i < n && !isEmpty(L(i)) && !SECTION_RE.test(L(i))) {
          var line = L(i).trim();
          var mv = MOVE_RE.exec(line);
          if (mv) {
            if (mon.moves.length >= 4) where(i, "more than 4 moves");
            else mon.moves.push(mv[1]);
            i++;
            continue;
          }
          if (mon.moves.length) { where(i, "moves must be the last lines of a Pokémon"); i++; continue; }
          var nm = NATURE_RE.exec(line);
          if (nm) { mon.nature = nm[1]; i++; continue; }
          var pa = ATTR_RE.exec(line);
          if (!pa) { where(i, "unexpected line: " + line); i++; continue; }
          applyMonAttr(mon, pa[1].trim(), pa[2], function (msg) { where(i, msg); });
          i++;
        }
        // trainerproc rewrites gendered and item-implied forms when it reads the header.
        if (GENDERED[mon.species] && mon.gender) {
          mon.species = mon.species + "-" + mon.gender;
          mon.gender = "";
        }
        if (ITEMED[mon.species] && !mon.item) {
          mon.item = ITEMED[mon.species][1];
          mon.species = ITEMED[mon.species][0];
        }
        t.party.push(mon);
      }
      if (!t.party.length && !/_NONE$/.test(t.id)) where(t.line - 1, "trainer has no Pokémon");
      if (t.partySize != null && t.partySize > t.party.length) where(t.line - 1, "Party Size is larger than the pool");
      trainers.push(t);
    }

    stripped.comments.forEach(function (c) {
      if (!c.used && (!trainers.length || c.endLine < trainers[0].line)) preamble.push(c.text);
    });
    return { pragmas: pragmas, preamble: preamble, trainers: trainers, errors: errors };
  }

  function applyTrainerAttr(t, key, value, err) {
    switch (key) {
      case "Name": t.name = value; t.nameSet = true; break;
      case "Class": t.trainerClass = value; break;
      case "Pic": t.pic = value; break;
      case "Gender":
        if (value === "Male" || value === "Female") t.gender = value;
        else err("Gender must be Male or Female");
        break;
      case "Music": t.music = value; break;
      case "Items": t.items = listValue(value); if (t.items.length > 4) err("at most 4 items"); break;
      case "Double Battle": {
        var b = parseBool(value, err);
        if (b != null) { t.battleType = b ? "Doubles" : "Singles"; t.battleTypeKey = "Double Battle"; }
        break;
      }
      case "Battle Type":
        if (/^(Singles?|Doubles?)$/.test(value)) {
          t.battleType = /^Double/.test(value) ? "Doubles" : "Singles";
          t.battleTypeKey = "Battle Type";
        } else err("Battle Type must be Singles or Doubles");
        break;
      case "AI": t.ai = listValue(value); break;
      case "Mugshot": t.mugshot = value; break;
      case "Starting Status": t.startingStatus = value; break;
      case "Difficulty": t.difficulty = value; break;
      case "Party Size": t.partySize = parseIntStrict(value, err); break;
      case "Pool Rules": t.poolRules = value; break;
      case "Pool Pick Functions": t.poolPick = value; break;
      case "Pool Prune": t.poolPrune = value; break;
      default: err("unknown trainer field '" + key + "'");
    }
  }

  function applyMonAttr(mon, key, value, err) {
    switch (key) {
      case "Level": mon.level = parseIntStrict(value, err); break;
      case "Ability": mon.ability = value; break;
      case "IVs": mon.ivs = parseStats(value, err); break;
      case "EVs": mon.evs = parseStats(value, err); break;
      case "Ball": mon.ball = value; break;
      case "Happiness": mon.happiness = parseIntStrict(value, err); break;
      case "Nature": mon.nature = value; break;
      case "Shiny": mon.shiny = parseBool(value, err); break;
      case "Dynamax Level": mon.dynamaxLevel = parseIntStrict(value, err); break;
      case "Gigantamax": mon.gigantamax = parseBool(value, err); break;
      case "Tera Type": mon.teraType = value; break;
      case "Tags": mon.tags = listValue(value); break;
      default: err("unknown Pokémon field '" + key + "'");
    }
  }

  /* ---- normalization: written values → constants ---------------------- */
  function normalizeTrainer(t) {
    var c = JSON.parse(JSON.stringify(t));
    if (c.trainerClass) c.trainerClass = toConstant("TRAINER_CLASS", c.trainerClass);
    if (c.pic) c.pic = toConstant(/^PARTNER_/.test(c.id) ? "TRAINER_BACK_PIC" : "TRAINER_PIC", c.pic);
    if (c.music) c.music = toConstant("TRAINER_ENCOUNTER_MUSIC", c.music);
    c.items = c.items.map(function (x) { return toConstant("ITEM", x); });
    c.ai = c.ai.map(function (x) { return toConstant("AI_FLAG", x); });
    if (c.mugshot) c.mugshot = toConstant("MUGSHOT_COLOR", c.mugshot);
    if (c.startingStatus) c.startingStatus = toConstant("STARTING_STATUS", c.startingStatus);
    if (c.poolRules) c.poolRules = toConstant("POOL_RULESET", c.poolRules);
    if (c.poolPick) c.poolPick = toConstant("POOL_PICK", c.poolPick);
    if (c.poolPrune) c.poolPrune = toConstant("POOL_PRUNE", c.poolPrune);
    if (c.difficulty) c.difficulty = difficultyName(c.difficulty);
    c.party = c.party.map(function (m) {
      m.species = toSpeciesConstant(m.species);
      if (m.item) m.item = toConstant("ITEM", m.item);
      if (m.ability) m.ability = toConstant("ABILITY", m.ability);
      if (m.ball) m.ball = toConstant("ITEM", m.ball);
      if (m.nature) m.nature = toConstant("NATURE", m.nature);
      if (m.teraType) m.teraType = toConstant("TYPE", m.teraType);
      m.tags = m.tags.map(function (x) { return toConstant("MON_POOL_TAG", x); });
      m.moves = m.moves.map(function (x) { return toConstant("MOVE", x); });
      return m;
    });
    return c;
  }

  // trainerproc prefixes Difficulty with "[DIFFICULTY_" even when given a constant,
  // so it must stay in human form: Easy / Normal / Hard.
  function difficultyName(v) {
    v = String(v).replace(/^DIFFICULTY_/, "").toLowerCase();
    return v.charAt(0).toUpperCase() + v.slice(1);
  }

  /* ---- serialization -------------------------------------------------- */
  function commentBlock(t) {
    var lines = [];
    var prose = (t.backstory || "").replace(/\r\n/g, "\n").replace(/\*\//g, "* /").replace(/\s+$/, "");
    if (prose) lines = lines.concat(prose.split("\n"));
    var meta = t.meta || {};
    var keys = Object.keys(meta).filter(function (k) { return meta[k] !== "" && meta[k] != null; });
    if (keys.length) {
      if (lines.length) lines.push("");
      keys.forEach(function (k) { lines.push("@" + k + " " + String(meta[k]).replace(/\*\//g, "* /").replace(/\n/g, " ")); });
    }
    if (!lines.length) return "";
    return "/*\n" + lines.map(function (l) { return l ? " * " + l : " *"; }).join("\n") + "\n */\n";
  }

  function statsLine(stats) {
    return STAT_KEYS.filter(function (k) { return stats[k] != null; })
      .map(function (k) { return stats[k] + " " + STAT_LABEL[k]; }).join(" / ");
  }

  function serializeMon(m) {
    var head = m.nickname ? m.nickname + " (" + m.species + ")" : m.species;
    if (m.gender === "M" || m.gender === "F") head += " (" + m.gender + ")";
    if (m.item) head += " @ " + m.item;
    var out = [head];
    if (m.level != null && m.level !== "") out.push("Level: " + m.level);
    if (m.ability) out.push("Ability: " + m.ability);
    if (m.ivs) out.push("IVs: " + statsLine(m.ivs));
    if (m.evs) out.push("EVs: " + statsLine(m.evs));
    if (m.ball) out.push("Ball: " + m.ball);
    if (m.happiness != null && m.happiness !== "") out.push("Happiness: " + m.happiness);
    if (m.nature) out.push("Nature: " + m.nature);
    if (m.shiny != null) out.push("Shiny: " + (m.shiny ? "Yes" : "No"));
    if (m.dynamaxLevel != null && m.dynamaxLevel !== "") out.push("Dynamax Level: " + m.dynamaxLevel);
    if (m.gigantamax != null) out.push("Gigantamax: " + (m.gigantamax ? "Yes" : "No"));
    if (m.teraType) out.push("Tera Type: " + m.teraType);
    if (m.tags && m.tags.length) out.push("Tags: " + m.tags.join(" / "));
    (m.moves || []).filter(Boolean).forEach(function (mv) { out.push("- " + mv); });
    return out.join("\n");
  }

  function serializeTrainer(t, opts) {
    opts = opts || {};
    var out = opts.noComment ? "" : commentBlock(t);
    out += "=== " + (t.id || "TRAINER_UNNAMED") + " ===\n";
    out += "Name: " + (t.name || "") + "\n";
    if (t.trainerClass) out += "Class: " + t.trainerClass + "\n";
    if (t.pic) out += "Pic: " + t.pic + "\n";
    if (t.gender) out += "Gender: " + t.gender + "\n";
    if (t.music) out += "Music: " + t.music + "\n";
    var items = (t.items || []).filter(Boolean);
    if (items.length) out += "Items: " + items.join(" / ") + "\n";
    if (t.battleType) {
      if (t.battleTypeKey === "Battle Type") out += "Battle Type: " + t.battleType + "\n";
      else out += "Double Battle: " + (t.battleType === "Doubles" ? "Yes" : "No") + "\n";
    }
    var ai = (t.ai || []).filter(Boolean);
    if (ai.length) out += "AI: " + ai.join(" / ") + "\n";
    if (t.mugshot) out += "Mugshot: " + t.mugshot + "\n";
    if (t.startingStatus) out += "Starting Status: " + t.startingStatus + "\n";
    if (t.difficulty) out += "Difficulty: " + difficultyName(t.difficulty) + "\n";
    if (t.partySize != null && t.partySize !== "") out += "Party Size: " + t.partySize + "\n";
    if (t.poolRules) out += "Pool Rules: " + t.poolRules + "\n";
    if (t.poolPick) out += "Pool Pick Functions: " + t.poolPick + "\n";
    if (t.poolPrune) out += "Pool Prune: " + t.poolPrune + "\n";
    (t.party || []).filter(function (m) { return m && m.species; }).forEach(function (m) {
      out += "\n" + serializeMon(m) + "\n";
    });
    return out;
  }

  function serializeFile(parsed, opts) {
    var parts = [];
    Object.keys(parsed.pragmas || {}).forEach(function (k) { parts.push("#pragma trainerproc " + k + " " + parsed.pragmas[k] + "\n"); });
    (parsed.preamble || []).forEach(function (c) { parts.push("/*" + c + "*/\n"); });
    parsed.trainers.forEach(function (t) { parts.push(serializeTrainer(t, opts)); });
    return parts.join("\n");
  }

  TB.party = {
    STAT_KEYS: STAT_KEYS, STAT_LABEL: STAT_LABEL,
    parse: parse, normalizeTrainer: normalizeTrainer, serializeTrainer: serializeTrainer,
    serializeMon: serializeMon, serializeFile: serializeFile, toConstant: toConstant,
    toSpeciesConstant: toSpeciesConstant, difficultyName: difficultyName, newTrainer: newTrainer, newMon: newMon,
    parseMonHeader: parseMonHeader,
  };
})(typeof globalThis !== "undefined" ? (globalThis.TB = globalThis.TB || {}) : (this.TB = this.TB || {}));
