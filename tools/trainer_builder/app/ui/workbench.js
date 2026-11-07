/* Trainer Builder — Workbench view: trainer rail, trainer sheet, inspector. */
(function (TB) {
  "use strict";
  var U = TB.ui, h = U.h, App = TB.app;
  var S = {}; // live element references for partial refresh

  var STAT_LABEL = { hp: "HP", atk: "Atk", def: "Def", spa: "SpA", spd: "SpD", spe: "Spe" };
  var CAT = ["Physical", "Special", "Status"];

  /* ---------------------------------------------------------- options ---- */
  function speciesOptions() {
    var D = App.D, canon = App.project.settings.canonOnly;
    return function () {
      return D.species.filter(function (s) { return !canon || s.sc; }).map(function (s) {
        return { c: s.c, n: s.n, icon: D.image(s.icon), badge: s.sc ? null : "Gen " + (s.gen || "?"), bclass: s.sc ? "" : "out" };
      });
    };
  }
  function simpleOptions(list) { return function () { return list.map(function (x) { return { c: x.c, n: x.n }; }); }; }
  function picOptions() {
    var D = App.D;
    return function () { return D.pics.map(function (p) { return { c: p.c, n: p.n, icon: D.image(p.img) }; }); };
  }
  function itemOptions() {
    var D = App.D, sorted = null;
    return function () {
      if (!sorted) sorted = D.items.slice().sort(function (a, b) { return a.n.localeCompare(b.n); }).map(function (x) { return { c: x.c, n: x.n }; });
      return sorted;
    };
  }
  function abilityOptions(m) {
    var D = App.D;
    return function () {
      var s = D.sp[D.canon(m.species)], out = [], seen = {};
      var labels = ["Ability 1", "Ability 2", "Hidden"];
      if (s) s.a.forEach(function (ai, k) {
        var a = D.abIdx[ai];
        if (!a || seen[a.c]) return;
        seen[a.c] = 1;
        out.push({ c: a.c, n: a.n, badge: labels[k], bclass: k === 2 ? "tm" : "lv", group: "own", groupRank: 0 });
      });
      D.abilities.forEach(function (a) {
        if (!seen[a.c]) out.push({ c: a.c, n: a.n, badge: "not possible", bclass: "out", group: "other", groupRank: 1 });
      });
      return out;
    };
  }
  function moveOptions(m) {
    var D = App.D;
    return function () {
      var spc = D.canon(m.species), lv = m.level != null && m.level !== "" ? +m.level : 100;
      var out = [], seen = {};
      function push(c, badge, bclass, group, rank) {
        if (seen[c]) return;
        var mv = D.mv[c];
        if (!mv) return;
        seen[c] = 1;
        out.push({ c: c, n: mv.n, badge: badge, bclass: bclass, group: group, groupRank: rank, chip: U.typeChip(D, mv.t) });
      }
      if (D.sp[spc]) {
        D.levelUp(spc).forEach(function (e) { push(e.move, e.level === 0 ? "Evo" : "Lv " + e.level, e.level > lv ? "out" : "lv", "lv", 0); });
        D.ancestors(spc).forEach(function (a) {
          D.levelUp(a.species).forEach(function (e) { push(e.move, "Lv " + e.level, "pre", "pre", 1); });
        });
        D.teachable(spc).forEach(function (c) { push(c, D.tm[c] || "Tutor", "tm", D.tm[c] ? "tm" : "tutor", 2); });
        D.eggMoves(spc).forEach(function (c) { push(c, "Egg", "egg", "egg", 3); });
      }
      if (!App.project.settings.learnsetOnly || !D.sp[spc]) D.moves.forEach(function (mv) { push(mv.c, null, null, "all", 4); });
      return out;
    };
  }
  var MOVE_GROUPS = { lv: "Level-up", pre: "Before evolving", tm: "TM / HM", tutor: "Tutor", egg: "Egg moves", all: "Other moves" };
  var ABILITY_GROUPS = { own: "This species", other: "Other abilities: the game would use Ability 1 instead" };
  function mapOptions() {
    var D = App.D, list = null;
    return function () {
      if (!list) list = Object.keys(D.raw.maps).map(function (c) { return { c: c, n: D.raw.maps[c].n }; })
        .sort(function (a, b) { return a.n.localeCompare(b.n); });
      return list;
    };
  }

  /* ---------------------------------------------------------- helpers ---- */
  function intOrNull(v) { v = String(v).trim(); return v === "" || isNaN(+v) ? null : Math.round(+v); }
  function trainerLabel(t) { return t.name || "Unnamed trainer"; }
  function stageText(st) {
    if (st === "" || st == null) return "";
    st = +st;
    if (st >= 9) return "Post-game";
    return st + (st === 1 ? " badge" : " badges");
  }

  /* --------------------------------------------------------------- rail ---- */
  function rail() {
    var q = h("input", { type: "text", id: "rail-q", placeholder: "Filter trainers", value: S.railQ || "" });
    q.addEventListener("input", function () { S.railQ = q.value; fillRail(); });
    S.railList = h("div", { class: "rail-list", role: "listbox", "aria-label": "Project trainers" });
    var del = h("button", { class: "btn small danger", onclick: function () {
      if (!del.classList.contains("armed")) { del.classList.add("armed"); del.textContent = "Delete: click again"; setTimeout(function () { del.classList.remove("armed"); del.textContent = "Delete"; }, 2600); return; }
      var t = App.trainer();
      if (!t) return;
      var i = App.project.trainers.indexOf(t);
      App.project.trainers.splice(i, 1);
      var next = App.project.trainers[Math.min(i, App.project.trainers.length - 1)];
      App.sel = next ? next.uid : null;
      App.change();
      App.render();
      U.toast("Deleted " + trainerLabel(t));
    } }, "Delete");
    var el = h("aside", { class: "rail", "aria-label": "Trainers" },
      h("div", { class: "rail-head" }, q),
      S.railList,
      h("div", { class: "rail-foot" },
        h("button", { class: "btn small primary", onclick: newTrainer }, "New"),
        h("button", { class: "btn small", onclick: duplicate }, "Duplicate"),
        del));
    fillRail();
    return el;
  }
  function fillRail() {
    if (!S.railList) return;
    var D = App.D, q = (S.railQ || "").toLowerCase();
    U.clear(S.railList);
    App.project.trainers.forEach(function (t) {
      if (q && (t.name + " " + t.id).toLowerCase().indexOf(q) < 0) return;
      var sum = TB.checks.summary(App.checks(t));
      var item = h("div", { class: "titem", role: "option", tabindex: "0", "aria-selected": t.uid === App.sel ? "true" : "false",
        onclick: function () { App.select(t.uid); },
        onkeydown: function (e) { if (e.key === "Enter" || e.key === " ") { e.preventDefault(); App.select(t.uid); } } },
        U.picImg(D, t.pic),
        h("div", { class: "t" }, h("b", null, trainerLabel(t)), h("span", null, t.id + (t.difficulty && t.difficulty !== "Normal" ? " · " + t.difficulty : ""))),
        h("div", { class: "marks" },
          sum.error ? h("span", { class: "sev error", title: sum.error + " errors" }, sum.error) : null,
          !sum.error && sum.warn ? h("span", { class: "sev warn", title: sum.warn + " warnings" }, sum.warn) : null,
          !sum.error && !sum.warn ? h("span", { class: "dot ok", title: "No errors or warnings" }) : null));
      S.railList.appendChild(item);
    });
  }

  function switcher() {
    var s = h("select", { id: "switch-trainer", "aria-label": "Trainer" });
    App.project.trainers.forEach(function (t) { s.appendChild(h("option", { value: t.uid }, trainerLabel(t) + "  ·  " + t.id)); });
    s.value = App.sel || "";
    s.addEventListener("change", function () { App.select(s.value); });
    return h("div", { class: "switcher" }, s,
      h("button", { class: "btn small primary", onclick: newTrainer }, "New"),
      h("button", { class: "btn small", onclick: duplicate }, "Duplicate"));
  }

  function newTrainer() {
    App.addTrainer(TB.project.newTrainer(App.D, App.project.trainers));
    U.toast("New trainer added");
    setTimeout(function () { var el = U.$("#f-name"); if (el) el.focus(); }, 30);
  }
  function duplicate() {
    var t = App.trainer();
    if (!t) return;
    var c = TB.project.clone(t);
    c.id = t.id + "_2";
    App.addTrainer(c);
    U.toast("Duplicated as " + c.id);
  }

  /* -------------------------------------------------------------- sheet ---- */
  function sheetHead(t) {
    var D = App.D;
    var sum = TB.checks.summary(App.checks(t));
    var strip = h("div", { class: "party-strip" });
    (t.party || []).forEach(function (m) {
      if (!m.species) return;
      var img = U.monIcon(D, m.species);
      img.title = D.label("species", m.species) + (m.level ? " Lv " + m.level : "");
      strip.appendChild(img);
    });
    var cls = t.trainerClass ? D.label("class", t.trainerClass) : "No class";
    return h("div", { class: "sheet-head" },
      h("div", { class: "portrait" }, U.picImg(D, t.pic)),
      h("div", { class: "grow" },
        h("h2", null, (t.trainerClass ? cls + " " : "") + trainerLabel(t)),
        h("div", { class: "sub" }, h("code", null, t.id),
          t.difficulty && t.difficulty !== "Normal" ? h("span", { class: "badge" }, t.difficulty) : null,
          t.battleType === "Doubles" ? h("span", { class: "badge" }, "Doubles") : null,
          t.meta && t.meta.stage !== "" && t.meta.stage != null ? h("span", { class: "badge lv" }, stageText(t.meta.stage)) : null,
          t.meta && t.meta.role ? h("span", { class: "badge" }, t.meta.role) : null),
        strip),
      h("div", { class: "summary", style: { flexDirection: "column", alignItems: "flex-end" } },
        h("span", { class: "sev " + (sum.error ? "error" : "ok") }, sum.error ? sum.error + (sum.error === 1 ? " error" : " errors") : "Compiles"),
        sum.warn ? h("span", { class: "sev warn" }, sum.warn + (sum.warn === 1 ? " warning" : " warnings")) : null));
  }

  function panel(title, body, extra) {
    return h("section", { class: "panel" }, h("div", { class: "ph" }, h("h3", null, title), extra || null), h("div", { class: "pb" }, body));
  }

  function trainerPanel(t) {
    var D = App.D;
    var id = h("input", { type: "text", id: "f-id", class: "mono", value: t.id, spellcheck: "false", autocapitalize: "characters" });
    id.addEventListener("input", function () { t.id = id.value.trim(); App.change({ head: true }); });
    id.addEventListener("blur", function () {
      var up = id.value.trim().toUpperCase().replace(/[^A-Z0-9_]/g, "_");
      if (up && !/^TRAINER_/.test(up)) up = "TRAINER_" + up;
      if (up !== t.id) { t.id = up; id.value = up; App.change({ head: true }); }
    });
    var nameMax = D.config.TRAINER_NAME_LENGTH || 10;
    var counter = h("span", { class: "help tabular" });
    var name = h("input", { type: "text", id: "f-name", value: t.name, placeholder: "NELLA", autocomplete: "off" });
    function count() { counter.textContent = TB.checks.encodedLength(name.value) + " / " + nameMax + " characters"; }
    count();
    name.addEventListener("input", function () { t.name = name.value; count(); App.change({ head: true }); });

    var cls = U.combo({ id: "f-class", value: t.trainerClass, label: function (c) { return D.label("class", c); }, options: simpleOptions(D.classes),
      placeholder: "Search classes", onChange: function (c) {
        t.trainerClass = c;
        if (!t.pic && c) { // matching sprite for standard classes
          var guess = "TRAINER_PIC_" + c.replace("TRAINER_CLASS_", "");
          if (D.pic[guess]) { t.pic = guess; pic.set(guess); }
        }
        App.change({ head: true });
      } });
    var pic = U.combo({ id: "f-pic", value: t.pic, label: function (c) { return D.label("pic", c); }, options: picOptions(), placeholder: "Search sprites",
      onChange: function (c) { t.pic = c; App.change({ head: true }); } });
    var gender = U.select("f-gender", [{ c: "", n: "Not set" }, { c: "Male", n: "Male" }, { c: "Female", n: "Female" }], t.gender,
      function (v) { t.gender = v; App.change(); });
    var music = U.select("f-music", [{ c: "", n: "Default" }].concat(D.music), t.music, function (v) { t.music = v; App.change(); });
    var diff = U.select("f-difficulty", [{ c: "", n: "Normal" }, { c: "Easy", n: "Easy" }, { c: "Hard", n: "Hard" }], t.difficulty === "Normal" ? "" : t.difficulty,
      function (v) { t.difficulty = v; App.change({ head: true }); });
    return panel("Trainer", [
      h("div", { class: "grid g2" },
        U.field("Trainer ID", id, { field: "id", help: "The constant scripts use, e.g. TRAINER_ROUTE3_YOUNGSTER." }),
        U.field("Name in battle", h("div", { style: { display: "flex", flexDirection: "column", gap: "4px" } }, name, counter), { field: "name" })),
      h("div", { class: "grid g2" },
        U.field("Class", cls, { field: "trainerClass", for: "f-class", help: "Sets the title, prize money and default Poké Ball." }),
        U.field("Battle sprite", pic, { field: "pic", for: "f-pic" })),
      h("div", { class: "grid g3" },
        U.field("Gender", gender, { field: "gender", help: "Biases its Pokémon's genders." }),
        U.field("Encounter music", music, { field: "music" }),
        U.field("Difficulty variant", diff, { field: "difficulty", help: D.config.B_VAR_DIFFICULTY ? "" : "Only Normal loads while B_VAR_DIFFICULTY is 0." })),
    ]);
  }

  function battlePanel(t) {
    var D = App.D;
    var seg = h("div", { class: "seg", role: "group", "aria-label": "Battle type" });
    ["Singles", "Doubles"].forEach(function (bt) {
      seg.appendChild(h("button", { type: "button", "aria-pressed": (t.battleType || "Singles") === bt ? "true" : "false", onclick: function () {
        t.battleType = bt;
        U.$$("button", seg).forEach(function (b) { b.setAttribute("aria-pressed", b.textContent === bt ? "true" : "false"); });
        App.change({ head: true, dialogue: true });
      } }, bt));
    });
    function aiBox(f) {
      var cb = h("input", { type: "checkbox", value: f.c, checked: (t.ai || []).indexOf(f.c) >= 0 });
      cb.addEventListener("change", function () {
        var set = (t.ai || []).filter(function (x) { return x !== f.c; });
        if (cb.checked) set.push(f.c);
        t.ai = D.aiFlags.map(function (x) { return x.c; }).filter(function (c) { return set.indexOf(c) >= 0; })
          .concat(set.filter(function (c) { return !D.ai[c]; }));
        App.change();
      });
      return h("label", { title: f.c }, cb, h("span", null, f.n, f.d ? h("small", null, f.d) : null));
    }
    var common = h("div", { class: "ai-grid" }, D.aiFlags.filter(function (f) { return f.common; }).map(aiBox));
    var more = h("div", { class: "ai-grid" }, D.aiFlags.filter(function (f) { return !f.common; }).map(aiBox));
    var items = h("div", { class: "grid g4" });
    [0, 1, 2, 3].forEach(function (k) {
      var cb = U.combo({ id: "f-item" + k, value: (t.items || [])[k] || "", label: function (c) { return D.label("item", c); }, options: itemOptions(),
        placeholder: "Item " + (k + 1), allowClear: true, onChange: function (c) {
          var arr = (t.items || []).slice(); arr[k] = c; t.items = arr.filter(Boolean); App.change();
        } });
      items.appendChild(U.field(null, cb, { field: "items" }));
    });
    var mug = U.select("f-mugshot", [{ c: "", n: "None" }].concat(D.lists.mugshots), t.mugshot, function (v) { t.mugshot = v; App.change(); });
    var start = U.select("f-start", [{ c: "", n: "None" }].concat(D.lists.startingStatuses), t.startingStatus, function (v) { t.startingStatus = v; App.change(); });
    var size = h("input", { type: "number", id: "f-psize", min: 1, max: 6, value: t.partySize == null ? "" : t.partySize, placeholder: "No pool" });
    size.addEventListener("input", function () { t.partySize = intOrNull(size.value); App.change({ cards: true }); });
    var rules = U.select("f-prules", [{ c: "", n: "Default" }].concat(D.lists.poolRules), t.poolRules, function (v) { t.poolRules = v; App.change(); });
    var pick = U.select("f-ppick", [{ c: "", n: "Default" }].concat(D.lists.poolPicks), t.poolPick, function (v) { t.poolPick = v; App.change(); });
    var prune = U.select("f-pprune", [{ c: "", n: "Default" }].concat(D.lists.poolPrunes), t.poolPrune, function (v) { t.poolPrune = v; App.change(); });
    var poolOpen = t.partySize != null || t.poolRules || t.poolPick || t.poolPrune;
    return panel("Battle", [
      U.field("Battle type", seg, { field: "battleType" }),
      U.field("AI behaviour", common, { field: "ai" }),
      h("details", null, h("summary", null, "More AI flags (" + D.aiFlags.filter(function (f) { return !f.common; }).length + ")"), more),
      U.field("Items in the bag (up to 4)", items, { field: "items" }),
      h("div", { class: "grid g2" }, U.field("Mugshot", mug, { field: "mugshot" }), U.field("Starting field effect", start, { field: "startingStatus" })),
      h("details", poolOpen ? { open: true } : null, h("summary", null, "Party pool (random team from a larger list)"),
        h("div", { class: "grid g4" },
          U.field("Party Size", size, { field: "partySize", help: "Blank = send out every Pokémon." }),
          U.field("Pool rules", rules, { field: "poolRules" }), U.field("Pick", pick, { field: "poolPick" }), U.field("Prune", prune, { field: "poolPrune" }))),
    ]);
  }

  /* ---- party cards ---- */
  function partyPanel(t) {
    S.party = h("div", { class: "party" });
    S.cards = [];
    (t.party || []).forEach(function (m, i) { var c = card(t, m, i); S.cards.push(c); S.party.appendChild(c); });
    var isPool = t.partySize != null;
    var add = h("button", { class: "add-mon", type: "button", onclick: function () {
      var max = t.partySize != null ? 255 : 6;
      if (t.party.length >= max) { U.toast(max === 6 ? "6 Pokémon is the limit without a pool" : "Pools hold at most 255"); return; }
      var last = t.party[t.party.length - 1];
      t.party.push(TB.project.newMon(last && last.level ? +last.level : 5));
      App.change({ cards: true, head: true });
      setTimeout(function () { var el = U.$("#m" + (t.party.length - 1) + "-species"); if (el) el.focus(); }, 30);
    } }, "+ Add Pokémon");
    var settings = App.project.settings;
    function toggle(key, label) {
      var cb = h("input", { type: "checkbox", checked: settings[key] });
      cb.addEventListener("change", function () { settings[key] = cb.checked; App.change({ cards: true }); });
      return h("label", { class: "check-inline small" }, cb, label);
    }
    return panel("Party" + (isPool ? " pool" : ""), [S.party, add],
      h("div", { class: "btn-row" }, toggle("canonOnly", "Gen 1–4 roster"), toggle("learnsetOnly", "Learnable moves only"), toggle("showGimmicks", "Tera & Dynamax")));
  }

  function card(t, m, i) {
    var D = App.D;
    var el = h("article", { class: "mon", "data-slot": String(i), "aria-label": "Pokémon " + (i + 1) });
    var spCombo = U.combo({ id: "m" + i + "-species", value: m.species, label: function (c) { return D.label("species", c); }, options: speciesOptions(),
      placeholder: "Search species", allowClear: false, onChange: function (c) {
        if (!c) return;
        m.species = c;
        App.change({ card: i, head: true });
      } });
    var lv = h("input", { type: "number", id: "m" + i + "-level", min: 1, max: 100, value: m.level == null ? "" : m.level, placeholder: "100", "aria-label": "Level" });
    lv.addEventListener("input", function () { m.level = intOrNull(lv.value); App.change({ derived: true, head: true }); });
    var gender = U.select("m" + i + "-gender", [{ c: "", n: "Any" }, { c: "M", n: "♂ M" }, { c: "F", n: "♀ F" }], m.gender, function (v) { m.gender = v; App.change(); });
    gender.setAttribute("aria-label", "Gender");
    function move(dir) {
      var j = i + dir;
      if (j < 0 || j >= t.party.length) return;
      var tmp = t.party[i]; t.party[i] = t.party[j]; t.party[j] = tmp;
      App.change({ cards: true, head: true });
    }
    var tools = h("div", { class: "tools" },
      h("button", { class: "btn quiet icon", title: "Move up", "aria-label": "Move up", disabled: i === 0, onclick: function () { move(-1); } }, "↑"),
      h("button", { class: "btn quiet icon", title: "Move down", "aria-label": "Move down", disabled: i === t.party.length - 1, onclick: function () { move(1); } }, "↓"),
      h("button", { class: "btn quiet icon", title: "Duplicate", "aria-label": "Duplicate", onclick: function () {
        var max = t.partySize != null ? 255 : 6;
        if (t.party.length >= max) { U.toast("No room for another Pokémon"); return; }
        t.party.splice(i + 1, 0, JSON.parse(JSON.stringify(m)));
        App.change({ cards: true, head: true });
      } }, "⧉"),
      h("button", { class: "btn quiet icon danger", title: "Remove", "aria-label": "Remove", onclick: function () {
        t.party.splice(i, 1);
        App.change({ cards: true, head: true });
      } }, "✕"));
    var top = h("div", { class: "mon-top" },
      h("span", { class: "slot" }, "#" + (i + 1)),
      U.monIcon(D, m.species, "icon"),
      U.field(null, spCombo, { cls: "species", field: "species", slot: i }),
      U.field(null, lv, { cls: "lv", field: "level", slot: i }),
      U.field(null, gender, { cls: "gender", field: "gender", slot: i }),
      tools);

    var ab = U.combo({ id: "m" + i + "-ability", value: m.ability, label: function (c) { return D.label("ability", c); }, options: abilityOptions(m),
      groups: ABILITY_GROUPS, placeholder: "Ability 1 (default)", allowClear: true, onChange: function (c) { m.ability = c; App.change({ derived: true }); } });
    var item = U.combo({ id: "m" + i + "-item", value: m.item, label: function (c) { return D.label("item", c); }, options: itemOptions(),
      placeholder: "None", allowClear: true, onChange: function (c) { m.item = c; App.change(); } });
    var classBall = D.label("item", D.classBall(t.trainerClass));
    var ball = U.select("m" + i + "-ball", [{ c: "", n: classBall + " (class)" }].concat(D.raw.balls.map(function (c) { return { c: c, n: D.label("item", c) }; })),
      m.ball, function (v) { m.ball = v; App.change(); });
    var natures = [{ c: "", n: "Hardy (default)" }].concat(D.natures.map(function (n) {
      return { c: n.c, n: n.n + (n.up ? " (+" + STAT_LABEL[n.up] + " −" + STAT_LABEL[n.down] + ")" : " (neutral)") };
    }));
    var nature = U.select("m" + i + "-nature", natures, m.nature, function (v) { m.nature = v; App.change({ derived: true }); });

    var moves = h("div", { class: "moves" });
    var metas = [];
    [0, 1, 2, 3].forEach(function (k) {
      var mc = U.combo({ id: "m" + i + "-move" + k, value: (m.moves || [])[k] || "", label: function (c) { return D.label("move", c); }, options: moveOptions(m),
        groups: MOVE_GROUPS, placeholder: "Move " + (k + 1), allowClear: true, onChange: function (c) {
          var arr = (m.moves || []).slice(); arr[k] = c; m.moves = arr.filter(Boolean); App.change({ derived: true });
          // keep the four slots aligned with the compacted list
          U.$$("[data-movek]", el).forEach(function (w, n) { var cbx = w._combo; if (cbx) cbx.set(m.moves[n] || ""); });
        } });
      var meta = h("div", { class: "move-meta" });
      metas.push(meta);
      var w = h("div", { "data-movek": String(k), "data-field": "moves", "data-slot": String(i) }, mc.el, meta);
      w._combo = mc;
      moves.appendChild(w);
    });

    var extras = extrasBlock(t, m, i);
    var derived = { defaults: h("div", { class: "defaults", hidden: true }), stats: h("div", { class: "stats" }), issues: h("div", { class: "mon-issues" }), metas: metas, icon: U.$(".icon", top) };
    el._derived = derived;
    el.appendChild(top);
    el.appendChild(h("div", { class: "mon-body" },
      h("div", { class: "grid g4" },
        U.field("Ability", ab, { field: "ability", slot: i, for: "m" + i + "-ability" }),
        U.field("Held item", item, { field: "item", slot: i, for: "m" + i + "-item" }),
        U.field("Ball", ball, { field: "ball", slot: i }),
        U.field("Nature", nature, { field: "nature", slot: i })),
      h("div", null, h("div", { class: "label", style: { marginBottom: "6px" } }, "Moves"), moves, derived.defaults),
      derived.stats, extras, derived.issues));
    fillDerived(el, t, m, i);
    return el;
  }

  function extrasBlock(t, m, i) {
    var D = App.D, settings = App.project.settings;
    function statsInputs(kind, placeholder, max) {
      var row = h("div", { class: "grid g6" });
      TB.party.STAT_KEYS.forEach(function (k) {
        var inp = h("input", { type: "number", id: "m" + i + "-" + kind + k, min: 0, max: max, placeholder: placeholder,
          value: m[kind] && m[kind][k] != null ? m[kind][k] : "" });
        inp.addEventListener("input", function () {
          var v = intOrNull(inp.value), cur = m[kind] || {};
          if (v == null) delete cur[k]; else cur[k] = v;
          m[kind] = Object.keys(cur).length ? cur : null;
          if (m[kind]) TB.party.STAT_KEYS.forEach(function (s) { if (m[kind][s] == null) m[kind][s] = +placeholder; });
          App.change({ derived: true });
        });
        row.appendChild(U.field(STAT_LABEL[k], inp, { field: kind, slot: i }));
      });
      return row;
    }
    var nick = h("input", { type: "text", id: "m" + i + "-nick", value: m.nickname, placeholder: "None" });
    nick.addEventListener("input", function () { m.nickname = nick.value.trim(); App.change(); });
    var happy = h("input", { type: "number", id: "m" + i + "-happy", min: 0, max: 255, value: m.happiness == null ? "" : m.happiness, placeholder: "0" });
    happy.addEventListener("input", function () { m.happiness = intOrNull(happy.value); App.change({ derived: true }); });
    var shiny = h("input", { type: "checkbox", checked: !!m.shiny });
    shiny.addEventListener("change", function () { m.shiny = shiny.checked ? true : null; App.change(); });
    var parts = [
      h("div", { class: "label" }, "IVs (blank = 31)"), statsInputs("ivs", "31", 31),
      h("div", { class: "label" }, "EVs (blank = 0; players max 252 per stat, 510 total)"), statsInputs("evs", "0", 252),
      h("div", { class: "grid g3" },
        U.field("Nickname", nick, { field: "nickname", slot: i }),
        U.field("Happiness", happy, { field: "happiness", slot: i, help: "Default 0: Return is weakest, Frustration strongest." }),
        U.field("Shiny", h("label", { class: "check-inline" }, shiny, "Shiny"), { field: "shiny", slot: i })),
    ];
    if (settings.showGimmicks || m.teraType || m.dynamaxLevel != null || m.gigantamax) {
      var tera = U.select("m" + i + "-tera", [{ c: "", n: "None" }].concat(D.types.filter(function (x) { return !x.special || x.c === "TYPE_STELLAR"; })), m.teraType,
        function (v) { m.teraType = v; App.change(); });
      var dmax = h("input", { type: "number", id: "m" + i + "-dmax", min: 0, max: 10, value: m.dynamaxLevel == null ? "" : m.dynamaxLevel, placeholder: "Off" });
      dmax.addEventListener("input", function () { m.dynamaxLevel = intOrNull(dmax.value); App.change(); });
      var gmax = h("input", { type: "checkbox", checked: !!m.gigantamax });
      gmax.addEventListener("change", function () { m.gigantamax = gmax.checked ? true : null; App.change(); });
      parts.push(h("div", { class: "grid g3" }, U.field("Tera Type", tera, { field: "teraType", slot: i }),
        U.field("Dynamax Level", dmax, { field: "dynamaxLevel", slot: i }), U.field("Gigantamax", h("label", { class: "check-inline" }, gmax, "Gigantamax"), { slot: i })));
    }
    if (t.partySize != null || (m.tags && m.tags.length)) {
      var tags = h("div", { class: "chips" });
      D.lists.poolTags.forEach(function (tg) {
        var cb = h("input", { type: "checkbox", checked: (m.tags || []).indexOf(tg.c) >= 0 });
        cb.addEventListener("change", function () {
          var set = (m.tags || []).filter(function (x) { return x !== tg.c; });
          if (cb.checked) set.push(tg.c);
          m.tags = set;
          App.change();
        });
        tags.appendChild(h("label", { class: "check-inline small", style: { marginRight: "10px" } }, cb, tg.n));
      });
      parts.push(U.field("Pool tags", tags, { field: "tags", slot: i }));
    }
    var open = m.ivs || m.evs || m.nickname || m.happiness != null || m.shiny || m.teraType || (m.tags && m.tags.length);
    return h("details", open ? { open: true } : null, h("summary", null, "IVs, EVs and extras"), h("div", { style: { display: "flex", flexDirection: "column", gap: "10px" } }, parts));
  }

  function fillDerived(el, t, m, i) {
    var D = App.D, d = el._derived;
    if (!d) return;
    var e = m.species ? TB.calc.effectiveMon(D, t, m) : null;
    // icon
    var icon = U.monIcon(D, m.species, "icon");
    d.icon.replaceWith(icon);
    d.icon = icon;
    // move meta
    var explicit = (m.moves || []).filter(Boolean);
    d.metas.forEach(function (meta, k) {
      U.clear(meta);
      var mv = D.mv[D.canon(explicit[k])];
      if (!mv) return;
      meta.appendChild(U.typeChip(D, mv.t));
      meta.appendChild(h("span", { class: "cat" }, CAT[mv.cat]));
      if (mv.cat !== 2) meta.appendChild(h("span", null, mv.p > 1 ? "Power " + mv.p : "Varies"));
      meta.appendChild(h("span", null, mv.a ? mv.a + "% acc" : "Never misses"));
      if (mv.pri) meta.appendChild(h("span", null, (mv.pri > 0 ? "+" : "") + mv.pri + " priority"));
    });
    // default moves
    if (e && e.movesAreDefault) {
      d.defaults.hidden = false;
      U.clear(d.defaults);
      d.defaults.appendChild(h("span", null, "No moves listed. At Lv " + e.level + " it uses its last level-up moves: ",
        h("b", null, e.moves.map(function (x) { return D.label("move", x); }).join(" · ") || "none"), "."));
    } else d.defaults.hidden = true;
    // stats
    U.clear(d.stats);
    if (e) {
      var nat = D.nat[e.nature] || {};
      TB.calc.STATS.forEach(function (k, idx) {
        var base = e.rec.b[idx];
        d.stats.appendChild(h("div", { class: "stat", title: "Base " + base + " · IV " + e.ivs[k] + " · EV " + e.evs[k] },
          h("div", { class: "k" }, h("span", null, STAT_LABEL[k]),
            nat.up === k ? h("span", { class: "nat-up" }, "+") : nat.down === k ? h("span", { class: "nat-down" }, "−") : null),
          h("div", { class: "v" }, e.stats[k]),
          h("div", { class: "bar" }, h("i", { style: { width: Math.min(100, (base / 180) * 100) + "%" } }))));
      });
    }
  }

  /* ---- story & dialogue ---- */
  function storyPanel(t) {
    var D = App.D;
    t.meta = t.meta || {};
    t.dialogue = t.dialogue || {};
    var caps = D.raw.levelCaps || [];
    var stageOpts = [{ c: "", n: "Not set" }];
    for (var s = 0; s <= 8; s++) stageOpts.push({ c: String(s), n: stageText(s) + (caps[s] ? " · level cap " + caps[s].level : "") });
    stageOpts.push({ c: "9", n: "Post-game · no cap" });
    var stage = U.select("f-stage", stageOpts, t.meta.stage == null ? "" : String(t.meta.stage), function (v) { t.meta.stage = v; App.change({ head: true, derived: true }); });
    var role = U.select("f-role", [{ c: "", n: "Not set" }].concat(TB.project.ROLES.map(function (r) { return { c: r, n: r }; })), t.meta.role || "",
      function (v) { t.meta.role = v; App.change({ head: true }); });
    var map = U.combo({ id: "f-map", value: t.meta.map || "", label: function (c) { return (D.raw.maps[c] || {}).n || c; }, options: mapOptions(),
      placeholder: "Search maps", allowClear: true, onChange: function (c) { t.meta.map = c; App.change(); } });
    var back = h("textarea", { id: "f-back", placeholder: "Who is this trainer, and why are they here? Saved as a comment above the trainers.party block." }, t.backstory || "");
    back.addEventListener("input", function () { t.backstory = back.value; App.change(); });

    S.dialogue = h("div", { class: "dialogue-grid" });
    fillDialogue(t);
    return panel("Story & dialogue", [
      h("div", { class: "grid g3" },
        U.field("Stage", stage, { field: "stage", help: "Badges the player has at this battle." }),
        U.field("Role", role, { field: "role" }),
        U.field("Map", map, { field: "map", for: "f-map" })),
      U.field("Backstory and notes", back, { field: "backstory" }),
      S.dialogue,
    ]);
  }

  function fillDialogue(t) {
    var D = App.D;
    U.clear(S.dialogue);
    var keys = [["intro", "Before battle"], ["defeat", "When defeated"], ["after", "Talking afterwards"]];
    if (t.battleType === "Doubles") keys.push(["notEnough", "Player has only one Pokémon"]);
    keys.forEach(function (kv) {
      var k = kv[0];
      var ta = h("textarea", { id: "f-dlg-" + k, rows: 2, placeholder: "Plain text. Use \\p for a new box; lines wrap like poryscript's format()." }, t.dialogue[k] || "");
      var prev = h("div");
      function paint() { U.clear(prev); if (ta.value.trim()) prev.appendChild(TB.textbox.render(D, ta.value)); }
      var repaint = U.debounce(paint, 120);
      ta.addEventListener("input", function () { t.dialogue[k] = ta.value; repaint(); App.change(); });
      paint();
      S.dialogue.appendChild(U.field(kv[1], h("div", { style: { display: "flex", flexDirection: "column", gap: "8px" } }, ta, prev), { field: "dlg-" + k }));
    });
  }

  /* ---------------------------------------------------------- inspector ---- */
  var TABS = [["checks", "Checks"], ["party", ".party"], ["opponents", "opponents.h"], ["script", "Script"], ["howto", "How to add"]];
  function inspector() {
    S.tabs = h("div", { class: "tabs", role: "tablist" });
    S.tabBody = h("div", { class: "tab-body", role: "tabpanel" });
    TABS.forEach(function (tb) {
      S.tabs.appendChild(h("button", { role: "tab", id: "tab-" + tb[0], "aria-selected": App.inspectorTab === tb[0] ? "true" : "false", onclick: function () {
        App.inspectorTab = tb[0];
        U.$$("button", S.tabs).forEach(function (b) { b.setAttribute("aria-selected", b.id === "tab-" + tb[0] ? "true" : "false"); });
        fillInspector();
      } }, tb[1], tb[0] === "checks" ? h("span", { id: "tab-check-count" }) : null));
    });
    var el = h("aside", { class: "inspector", "aria-label": "Inspector" }, S.tabs, S.tabBody);
    fillInspector();
    return el;
  }

  function fillInspector() {
    var D = App.D, t = App.trainer();
    if (!t || !S.tabBody) return;
    var list = App.checks(t), sum = TB.checks.summary(list);
    var cnt = U.$("#tab-check-count");
    if (cnt) { U.clear(cnt); if (sum.error) cnt.appendChild(h("span", { class: "dot error" })); else if (sum.warn) cnt.appendChild(h("span", { class: "dot warn" })); }
    U.clear(S.tabBody);
    var body = S.tabBody, tab = App.inspectorTab;
    if (tab === "checks") {
      body.appendChild(h("div", { class: "summary" },
        h("span", { class: "sev error" }, sum.error + " errors"), h("span", { class: "sev warn" }, sum.warn + " warnings"), h("span", { class: "sev note" }, sum.note + " notes")));
      if (!list.length) body.appendChild(h("div", { class: "empty" }, h("h3", null, "Nothing to flag"), "This trainer compiles and every Pokémon is obtainable at its level."));
      list.forEach(function (c) {
        var where = c.slot != null && t.party[c.slot] ? "#" + (c.slot + 1) + " " + D.label("species", t.party[c.slot].species) : "Trainer";
        var meta = h("div", { class: "meta" }, h("span", { class: "slotref" }, c.code), h("span", null, where));
        if (c.sev !== "error") {
          meta.appendChild(h("button", { class: "btn quiet small", onclick: function () {
            var ok = String((t.meta && t.meta.ok) || "").split(",").map(function (x) { return x.trim(); }).filter(Boolean);
            var i = ok.indexOf(c.key);
            if (i >= 0) ok.splice(i, 1); else ok.push(c.key);
            t.meta = t.meta || {};
            t.meta.ok = ok.join(", ");
            App.change();
          } }, c.accepted ? "Reopen" : "Accept"));
        }
        body.appendChild(h("div", { class: "check " + c.sev + (c.accepted ? " accepted" : "") }, h("span", { class: "stripe" }), h("div", null, h("div", { class: "msg" }, c.msg), meta)));
      });
      body.appendChild(h("p", { class: "small muted" }, "Errors break the build or make the game do something other than what is written. Warnings compile but describe a team a player couldn't have. Accepting a warning records it in the trainer's comment as @ok."));
    } else if (tab === "party") {
      var txt = TB.project.partyText(t);
      body.appendChild(h("div", { class: "btn-row" },
        h("button", { class: "btn primary small", onclick: function () { U.copy(txt, "Block copied"); } }, "Copy block"),
        h("button", { class: "btn small", onclick: function () { U.download(txt, t.id + ".party"); } }, "Download")));
      body.appendChild(h("pre", { class: "code" }, txt));
    } else if (tab === "opponents") {
      var o = TB.emit.opponents(D, App.project.trainers);
      var used = D.opponents.count, max = D.opponents.max, mine = o.ids.length;
      body.appendChild(h("div", null,
        h("div", { class: "label" }, "Trainer ID space"),
        h("div", { class: "meter", role: "img", "aria-label": used + " used, " + mine + " new, " + max + " max" },
          h("i", { class: "used", style: { width: (100 * Math.min(used, max)) / max + "%" } }),
          h("i", { class: o.overCap ? "over" : "mine", style: { width: (100 * Math.min(mine, Math.max(0, max - used))) / max + "%" } })),
        h("div", { class: "small muted tabular", style: { marginTop: "4px" } },
          used + " defined in opponents.h · " + mine + " new in this project · MAX_TRAINERS_COUNT " + max + " · " +
          Math.max(0, max - used - mine) + " left")));
      if (o.overCap) body.appendChild(h("div", { class: "detail", style: { color: "var(--err)" } },
        "The project needs " + (o.count - max) + " more IDs than MAX_TRAINERS_COUNT allows. Raise it in include/constants/opponents.h; each trainer uses one save flag."));
      body.appendChild(h("div", { class: "btn-row" }, h("button", { class: "btn primary small", onclick: function () { U.copy(o.text, "Copied"); } }, "Copy")));
      body.appendChild(h("pre", { class: "code" }, o.text));
    } else if (tab === "script") {
      var sc = TB.emit.poryscript(D, t);
      body.appendChild(h("p", { class: "small muted" }, "Paste into the map's scripts.pory and point an object event's script at ", h("code", null, TB.emit.pascal(t.id) + "_TrainerBattle"), ". format() wraps the text when the ROM builds."));
      body.appendChild(h("div", { class: "btn-row" }, h("button", { class: "btn primary small", onclick: function () { U.copy(sc, "Script copied"); } }, "Copy script")));
      body.appendChild(h("pre", { class: "code" }, sc));
    } else if (tab === "howto") {
      var isNew = !(t.id in D.opponents.ids);
      body.appendChild(h("ol", { class: "steps" },
        h("li", null, "Easiest: on ", h("a", { href: "#project" }, "Project & data"), ", copy the apply bundle, save it as ", h("code", null, "bundle.json"),
          ", then run ", h("code", null, "python3 tools/trainer_builder/apply.py bundle.json"), " to preview and add ", h("code", null, "--write"), " to change the files."),
        h("li", null, "By hand: paste the trainers.party block into ", h("code", null, "src/data/trainers.party"),
          t.id in D.opponents.ids ? " in place of the existing " + t.id + " block." : " (anywhere after TRAINER_NONE)."),
        isNew ? h("li", null, "Add the #define from the opponents.h tab and raise TRAINERS_COUNT.") : null,
        h("li", null, "Paste the Script tab into ", h("code", null, "data/maps/" + (((D.raw.maps[(t.meta || {}).map] || {}).folder) || "<Map>") + "/scripts.pory"), " and give a trainer object that script."),
        h("li", null, "Build with ", h("code", null, "make -j$(nproc)"), ".")));
    }
    updateHighlights(list);
  }

  function updateHighlights(list) {
    if (!S.sheet) return;
    U.$$(".has-error, .has-warn", S.sheet).forEach(function (el) { el.classList.remove("has-error", "has-warn"); });
    var t = App.trainer();
    var bySlot = {};
    list.forEach(function (c) {
      if (c.accepted) return;
      if (c.field) {
        var sel = c.slot != null ? '[data-slot="' + c.slot + '"][data-field="' + c.field + '"]' : '[data-field="' + c.field + '"]:not([data-slot])';
        U.$$(sel, S.sheet).forEach(function (el) { if (c.sev !== "note") el.classList.add(c.sev === "error" ? "has-error" : "has-warn"); });
      }
      if (c.slot != null) (bySlot[c.slot] = bySlot[c.slot] || []).push(c);
    });
    (S.cards || []).forEach(function (cardEl, i) {
      var d = cardEl._derived;
      if (!d) return;
      U.clear(d.issues);
      // The default-moves note is already shown inside the card.
      var items = (bySlot[i] || []).filter(function (c) { return c.code !== "N_DEFAULT_MOVES"; });
      cardEl.classList.toggle("err", items.some(function (c) { return c.sev === "error"; }));
      items.forEach(function (c) {
        d.issues.appendChild(h("div", { class: "mon-issue" }, h("span", { class: "dot " + c.sev }), h("span", null, c.msg)));
      });
    });
    void t;
  }

  /* -------------------------------------------------------------- render ---- */
  function render(main) {
    S = { railQ: S.railQ };
    var t = App.trainer();
    if (!t) {
      main.appendChild(h("div", { class: "panel" }, h("div", { class: "empty" },
        h("h3", null, "No trainers in this project yet"),
        h("p", null, "Start a new trainer, copy one from the Emerald roster, or import a trainers.party file."),
        h("div", { class: "btn-row", style: { justifyContent: "center" } },
          h("button", { class: "btn primary", onclick: newTrainer }, "New trainer"),
          h("a", { class: "btn", href: "#roster" }, "Browse the roster"),
          h("a", { class: "btn", href: "#project" }, "Import trainers.party")))));
      return;
    }
    App.sel = t.uid;
    S.sheet = h("section", { class: "sheet", "aria-label": "Trainer sheet" });
    fillSheet(t);
    main.appendChild(h("div", { class: "workbench" }, switcher(), rail(), S.sheet, inspector()));
  }

  function fillSheet(t) {
    U.clear(S.sheet);
    S.head = sheetHead(t);
    S.sheet.appendChild(S.head);
    S.sheet.appendChild(trainerPanel(t));
    S.sheet.appendChild(partyPanel(t));
    S.sheet.appendChild(battlePanel(t));
    S.sheet.appendChild(storyPanel(t));
  }

  var refreshInspector = U.debounce(function () { fillInspector(); fillRail(); }, 140);

  function refresh(opts) {
    var t = App.trainer();
    if (!t || !S.sheet) return;
    if (opts.sheet) { fillSheet(t); }
    else if (opts.cards) {
      var partyPanelEl = S.party.closest(".panel");
      partyPanelEl.replaceWith(partyPanel(t));
    } else if (opts.card != null && S.cards[opts.card]) {
      var fresh = card(t, t.party[opts.card], opts.card);
      S.cards[opts.card].replaceWith(fresh);
      S.cards[opts.card] = fresh;
    } else if (opts.derived) {
      (S.cards || []).forEach(function (c, i) { fillDerived(c, t, t.party[i], i); });
    }
    if (opts.dialogue && S.dialogue) fillDialogue(t);
    if (opts.head || opts.cards || opts.card != null) {
      var head = sheetHead(t);
      S.head.replaceWith(head);
      S.head = head;
    }
    refreshInspector();
  }

  App.views.workbench = { render: render, refresh: refresh };
})(globalThis.TB = globalThis.TB || {});
