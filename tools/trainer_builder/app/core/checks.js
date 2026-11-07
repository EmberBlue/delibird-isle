/* Trainer Builder — checks.
 *
 * Three severities:
 *   error  the build fails, or the game silently does something other than
 *          what is written (an ability the species can't have, a party that
 *          overflows, an ID past MAX_TRAINERS_COUNT)
 *   warn   compiles and behaves as written, but a player could not have this
 *          (below evolution level, move not learnable yet, above level cap)
 *   note   design observations and engine defaults worth seeing
 *
 * Each check has a stable code; a trainer can accept a warn/note with a
 * reason, stored as "@ok CODE#slot" in its trainers.party comment.
 */
(function (TB) {
  "use strict";

  function plural(n, a, b) { return n + " " + (n === 1 ? a : b); }

  function textIssues(D, text) {
    // Characters the charmap can't encode. {CODES} are checked against
    // charmap names; {COLOR RED}-style codes take arguments, so only the
    // first word is checked.
    var bad = [], codes = [];
    var s = String(text || "");
    var re = /\{([^}]*)\}/g, m, plain = s.replace(re, function (all, inner) {
      var head = inner.trim().split(/\s+/)[0];
      if (head && !D.charmapCodes[head]) codes.push(head);
      return "";
    });
    plain = plain.replace(/\\[nlp]/g, "");
    Array.from(plain).forEach(function (ch) {
      if (ch === "\n") return;
      if (!D.charmapChars[ch] && bad.indexOf(ch) < 0) bad.push(ch);
    });
    return { chars: bad, codes: codes };
  }

  function encodedLength(text) {
    // Length in game characters: {CODES} count as one, other chars one each.
    return Array.from(String(text || "").replace(/\{[^}]*\}/g, "#")).length;
  }

  function run(D, t, ctx) {
    ctx = ctx || {};
    var out = [];
    var C = TB.calc;
    function add(sev, code, msg, slot, field) {
      out.push({ sev: sev, code: code, msg: msg, slot: slot == null ? null : slot, field: field || null });
    }
    function known(kind, map, c, label, slot, field) {
      if (!c) return true;
      if (!map[D.canon(c)]) {
        add("error", "E_UNKNOWN", label + " " + c + " isn't defined in this project, so the build will fail.", slot, field);
        return false;
      }
      return true;
    }

    /* ---- identity ---- */
    var id = t.id || "";
    if (!id) add("error", "E_ID", "Set a Trainer ID, for example TRAINER_ROUTE3_YOUNGSTER.", null, "id");
    else if (!/^[A-Za-z0-9_]+$/.test(id)) add("error", "E_ID", "Trainer IDs can only use letters, digits and underscores.", null, "id");
    else if (!/^TRAINER_[A-Z0-9_]+$/.test(id)) add("warn", "W_ID_STYLE", "IDs in this project are capitals starting with TRAINER_ (e.g. TRAINER_" + id.toUpperCase().replace(/^TRAINER_/, "") + ").", null, "id");

    var diff = t.difficulty || "Normal";
    if (ctx.duplicateKeys && ctx.duplicateKeys[id + "|" + diff] > 1)
      add("error", "E_ID_DUP", id + " (" + diff + ") appears more than once in this project.", null, "id");
    if (id && !(id in D.opponents.ids)) {
      var slotNo = ctx.newIdSlot != null ? ctx.newIdSlot : D.opponents.count;
      if (slotNo >= D.opponents.max)
        add("error", "E_ID_CAP", "No free trainer ID for " + id + ": it would be number " + slotNo + ", but MAX_TRAINERS_COUNT is " +
          D.opponents.max + ". Raise MAX_TRAINERS_COUNT in include/constants/opponents.h (each trainer uses one save flag).", null, "id");
      else add("note", "N_ID_NEW", id + " is new. apply.py will add #define " + id + " " + slotNo + " to opponents.h.", null, "id");
    }
    if (t.difficulty && t.difficulty !== "Normal" && !D.config.B_VAR_DIFFICULTY)
      add("warn", "W_DIFFICULTY_OFF", "This is the " + t.difficulty + " variant, but B_VAR_DIFFICULTY is 0, so the game only loads Normal.", null, "difficulty");

    /* ---- trainer fields ---- */
    var nameMax = D.config.TRAINER_NAME_LENGTH || 10;
    // trainerproc requires the Name key (always written) but accepts an empty value.
    if (!t.name) { if (!/_NONE$/.test(id)) add("warn", "W_NAME", "No name: the battle would show a blank trainer name.", null, "name"); }
    else {
      if (encodedLength(t.name) > nameMax)
        add("error", "E_NAME_LEN", "The name holds " + nameMax + " characters; \"" + t.name + "\" has " + encodedLength(t.name) + ". The compiler drops the extra characters.", null, "name");
      var ti = textIssues(D, t.name);
      if (ti.chars.length) add("error", "E_CHARMAP", "The name uses characters the game can't print: " + ti.chars.join(" "), null, "name");
    }
    if (!t.pic) add("error", "E_PIC", "No battle sprite (Pic). The game would show picture 0, the Hiker.", null, "pic");
    else known("pic", D.pic, t.pic, "Pic", null, "pic");
    if (!t.trainerClass) add("warn", "W_CLASS", "No Class: the game uses class 0 (Pkmn Trainer 1), which affects prize money and the name shown.", null, "trainerClass");
    else known("class", D.cls, t.trainerClass, "Class", null, "trainerClass");
    if (t.music) known("music", D.mus, t.music, "Music", null, "music");
    (t.items || []).forEach(function (it) { known("item", D.it, it, "Item", null, "items"); });
    if ((t.items || []).length > 4) add("error", "E_ITEMS", "A trainer can carry at most 4 items.", null, "items");
    (t.ai || []).forEach(function (a) { known("ai", D.ai, a, "AI flag", null, "ai"); });
    if (!(t.ai || []).length) add("note", "N_AI_NONE", "No AI flags: every move scores the same, so the trainer picks moves at random.", null, "ai");

    var party = (t.party || []).filter(function (m) { return m && m.species; });
    var isPool = t.partySize != null && t.partySize !== "";
    var fieldSize = isPool ? +t.partySize : party.length;
    if (!party.length && !/_NONE$/.test(id)) add("error", "E_PARTY_EMPTY", "Add at least one Pokémon.", null, "party");
    if (!isPool && party.length > 6) add("error", "E_PARTY_SIZE", "More than 6 Pokémon only works as a pool: set Party Size to how many are sent out.", null, "partySize");
    if (isPool) {
      if (!(fieldSize >= 1 && fieldSize <= 6)) add("error", "E_PARTY_SIZE", "Party Size must be between 1 and 6.", null, "partySize");
      if (fieldSize > party.length) add("error", "E_PARTY_SIZE", "Party Size " + fieldSize + " is larger than the pool of " + party.length + ".", null, "partySize");
      if (party.length > 255) add("error", "E_PARTY_SIZE", "A pool holds at most 255 Pokémon.", null, "party");
    } else if (t.poolRules || t.poolPick || t.poolPrune) {
      add("warn", "W_POOL_UNUSED", "Pool settings do nothing without a Party Size.", null, "partySize");
    }
    if (t.battleType === "Doubles" && fieldSize < 2) add("error", "E_DOUBLES", "A double battle needs at least 2 Pokémon.", null, "battleType");

    /* ---- Pokémon ---- */
    var effs = [];
    var stage = t.meta && t.meta.stage !== undefined && t.meta.stage !== "" ? +t.meta.stage : null;
    var cap = stage != null ? D.levelCap(stage) : null;
    var nickMax = D.config.POKEMON_NAME_LENGTH || 10;
    party.forEach(function (m, i) {
      var label = "#" + (i + 1);
      var spc = D.canon(m.species);
      var s = D.sp[spc];
      if (!s) { add("error", "E_UNKNOWN", "Species " + m.species + " isn't defined in this project, so the build will fail.", i, "species"); return; }
      label = s.n;
      if (!s.sc) add("warn", "W_SCOPE", s.n + " is outside the Gen 1–4 roster.", i, "species");
      if (/[MPGTUZ]/.test(s.f)) add("warn", "W_BATTLE_FORM", s.n + " is a battle-only form; trainers normally hold the base form.", i, "species");

      var lvRaw = m.level;
      if (lvRaw == null || lvRaw === "") add("note", "N_LEVEL_DEFAULT", label + " has no Level, so trainerproc uses 100.", i, "level");
      else if (!(+lvRaw >= 1 && +lvRaw <= 100)) add("error", "E_LEVEL", label + ": Level must be 1–100.", i, "level");

      var e = C.effectiveMon(D, t, m);
      effs.push(e);
      var lv = e.level;
      var minLv = D.minLevel(spc);
      if (minLv.step && lv < minLv.level) {
        add("warn", "W_EVO_LEVEL", s.n + " evolves from " + D.label("species", minLv.step.from) + " at Lv " + minLv.level + "; this one is Lv " + lv + ".", i, "level");
      }
      if (cap != null && lv > cap) add("warn", "W_LEVEL_CAP", label + " is Lv " + lv + ", above the level cap of " + cap + " at stage " + stage + ". The player can't match it.", i, "level");

      if (m.ability && known("ability", D.ab, m.ability, "Ability", i, "ability") && e.abilitySilentlyChanged) {
        add("error", "E_ABILITY", s.n + " can't have " + D.label("ability", m.ability) + ". The game silently uses " +
          D.label("ability", e.ability) + " (its first ability) instead.", i, "ability");
      }
      if (m.item) known("item", D.it, m.item, "Held item", i, "item");
      if (m.ball && known("ball", D.it, m.ball, "Ball", i, "ball") && !D.ball[D.canon(m.ball)])
        add("error", "E_BALL", D.label("item", m.ball) + " isn't a Poké Ball.", i, "ball");
      if (m.nature) known("nature", D.nat, m.nature, "Nature", i, "nature");
      if (m.teraType) known("type", D.ty, m.teraType, "Tera Type", i, "teraType");
      if (m.teraType || m.dynamaxLevel != null && m.dynamaxLevel !== "" || m.gigantamax)
        add("note", "N_GIMMICK", label + " is set up to " + (m.teraType ? "Terastallize" : "Dynamax") + ", a Gen 8–9 mechanic.", i, m.teraType ? "teraType" : "dynamaxLevel");
      if (m.dynamaxLevel != null && m.dynamaxLevel !== "" && !(+m.dynamaxLevel >= 0 && +m.dynamaxLevel <= 10))
        add("error", "E_RANGE", label + ": Dynamax Level must be 0–10.", i, "dynamaxLevel");
      if (m.happiness != null && m.happiness !== "" && !(+m.happiness >= 0 && +m.happiness <= 255))
        add("error", "E_RANGE", label + ": Happiness must be 0–255.", i, "happiness");

      ["ivs", "evs"].forEach(function (kind) {
        var st = m[kind];
        if (!st) return;
        var total = 0;
        TB.party.STAT_KEYS.forEach(function (k) {
          if (st[k] == null || st[k] === "") return;
          var v = +st[k];
          total += v;
          if (kind === "ivs" && !(v >= 0 && v <= 31)) add("error", "E_RANGE", label + ": IVs must be 0–31.", i, "ivs");
          if (kind === "evs" && !(v >= 0 && v <= 255)) add("error", "E_RANGE", label + ": an EV above 255 overflows its byte.", i, "evs");
          else if (kind === "evs" && v > 252) add("warn", "W_EV_STAT", label + ": " + v + " EVs in one stat is above the game's 252 limit.", i, "evs");
        });
        if (kind === "evs" && total > 510) add("warn", "W_EV_TOTAL", label + " has " + total + " EVs in total; players are limited to 510.", i, "evs");
      });

      if (m.gender) {
        if (s.g === 255) add("warn", "W_GENDER", s.n + " is genderless, so (" + m.gender + ") is ignored.", i, "gender");
        else if (s.g === 254 && m.gender === "M") add("warn", "W_GENDER", s.n + " is always female.", i, "gender");
        else if (s.g === 0 && m.gender === "F") add("warn", "W_GENDER", s.n + " is always male.", i, "gender");
      }
      if (m.nickname) {
        if (encodedLength(m.nickname) > nickMax) add("warn", "W_NICK_LEN", "Nickname \"" + m.nickname + "\" is longer than " + nickMax + " characters and will be shortened.", i, "nickname");
        var ni = textIssues(D, m.nickname);
        if (ni.chars.length) add("error", "E_CHARMAP", "Nickname uses characters the game can't print: " + ni.chars.join(" "), i, "nickname");
      }
      if (m.tags && m.tags.length && !isPool) add("note", "N_TAGS_UNUSED", label + " has pool tags, which only matter when Party Size is set.", i, "tags");

      // Moves.
      var explicit = (m.moves || []).filter(Boolean);
      if (explicit.length > 4) add("error", "E_MOVES", label + " has more than 4 moves.", i, "moves");
      var sources = D.moveSources(spc);
      var seen = {};
      explicit.forEach(function (mc) {
        var c = D.canon(mc);
        if (!D.mv[c]) { add("error", "E_UNKNOWN", "Move " + mc + " isn't defined in this project, so the build will fail.", i, "moves"); return; }
        if (seen[c]) add("warn", "W_MOVE_DUP", label + " knows " + D.label("move", c) + " twice.", i, "moves");
        seen[c] = 1;
        var src = sources[c] || [];
        var mn = D.label("move", c);
        if (!src.length) {
          add("warn", "W_MOVE_ILLEGAL", s.n + " can't learn " + mn + " by level-up, TM, tutor or breeding.", i, "moves");
          return;
        }
        var other = src.filter(function (x) { return x.how !== "lv" && x.how !== "egg" && x.how !== "evo"; });
        var lvOk = src.filter(function (x) { return (x.how === "lv" && x.level <= lv) || x.how === "evo"; });
        if (!other.length && !lvOk.length) {
          var lvs = src.filter(function (x) { return x.how === "lv"; }).map(function (x) { return x.level; });
          if (lvs.length) add("warn", "W_MOVE_LEVEL", s.n + " learns " + mn + " at Lv " + Math.min.apply(null, lvs) + "; this one is Lv " + lv + ".", i, "moves");
          else add("note", "N_EGG_MOVE", mn + " is an egg move for " + s.n + ".", i, "moves");
        }
      });
      if (!explicit.length && e.moves.length) {
        add("note", "N_DEFAULT_MOVES", label + " has no moves listed, so it uses its last level-up moves at Lv " + lv + ": " +
          e.moves.map(function (x) { return D.label("move", x); }).join(", ") + ".", i, "moves");
      }
      var damaging = e.moves.filter(function (x) { var mv = D.mv[x]; return mv && mv.cat !== 2; });
      if (e.moves.length && !damaging.length) add("note", "N_NO_DAMAGE", label + " has no damaging moves.", i, "moves");
    });

    /* ---- party shape ---- */
    if (party.length >= 2 && !isPool) {
      var levels = effs.map(function (e) { return e ? e.level : 0; });
      var maxLv = Math.max.apply(null, levels), last = levels[levels.length - 1];
      if (last < maxLv) {
        var at = levels.indexOf(maxLv);
        add("note", "N_ACE_ORDER", "The highest-level Pokémon (" + D.label("species", party[at].species) + ", Lv " + maxLv + ") isn't last. Trainers usually send out their ace last.", at, "order");
      }
      var spread = maxLv - Math.min.apply(null, levels);
      if (spread > 10) add("note", "N_LEVEL_SPREAD", "Levels span " + spread + " (" + Math.min.apply(null, levels) + "–" + maxLv + ").", null, "level");
    }
    if (party.length >= 3) {
      D.types.forEach(function (ty) {
        if (ty.special) return;
        var weak = effs.filter(function (e) { return e && C.typeEff(D, ty.i, e.types) >= 2; }).length;
        if (weak >= 3 && weak / party.length >= 0.5)
          add("note", "N_SHARED_WEAKNESS", plural(weak, "of " + party.length + " Pokémon is", "of " + party.length + " Pokémon are") + " weak to " + ty.n + ".", null, "party");
      });
      var held = {};
      party.forEach(function (m) { if (m.item) held[D.canon(m.item)] = (held[D.canon(m.item)] || 0) + 1; });
      Object.keys(held).forEach(function (k) {
        if (held[k] > 1) add("note", "N_ITEM_CLAUSE", plural(held[k], "Pokémon holds", "Pokémon hold") + " " + D.label("item", k) + ".", null, "party");
      });
    }

    // Accepted checks.
    var ok = {};
    String((t.meta && t.meta.ok) || "").split(",").forEach(function (x) { x = x.trim(); if (x) ok[x] = 1; });
    out.forEach(function (c) {
      c.key = c.code + "#" + (c.slot == null ? "-" : c.slot);
      c.accepted = c.sev !== "error" && !!ok[c.key];
    });
    var order = { error: 0, warn: 1, note: 2 };
    out.sort(function (a, b) { return order[a.sev] - order[b.sev] || (a.slot == null ? -1 : a.slot) - (b.slot == null ? -1 : b.slot); });
    return out;
  }

  function summary(list) {
    var s = { error: 0, warn: 0, note: 0 };
    list.forEach(function (c) { if (!c.accepted) s[c.sev]++; });
    return s;
  }

  TB.checks = { run: run, summary: summary, textIssues: textIssues, encodedLength: encodedLength };
})(typeof globalThis !== "undefined" ? (globalThis.TB = globalThis.TB || {}) : (this.TB = this.TB || {}));
