/* Trainer Builder — UI. Vanilla JS, no dependencies, runs from file://. */
(function () {
  "use strict";
  var D = globalThis.TBDATA, S = globalThis.TBSerializer;
  var $ = function (s, r) { return (r || document).querySelector(s); };
  var $$ = function (s, r) { return Array.prototype.slice.call((r || document).querySelectorAll(s)); };

  /* ---- option lists + reverse lookups -------------------------------- */
  var LISTS = {
    class: D.classes, pic: D.pics, item: D.items,
    species: D.species, ability: D.abilities, move: D.moves,
  };
  var LABEL = {};
  Object.keys(LISTS).forEach(function (k) {
    LABEL[k] = {};
    LISTS[k].forEach(function (o) { LABEL[k][o.c] = o.n; });
  });
  function labelOf(kind, c) { return (LABEL[kind] && LABEL[kind][c]) || c; }

  function optionsFor(kind) {
    var list = LISTS[kind];
    if (kind === "species" && $("#canon-only").checked) {
      list = list.filter(function (o) { return o.sc; });   // Gen 1-4 families + forms
    }
    return list;
  }

  // Species of the party card a move combo lives in (for learnset filtering).
  function moveSpecies(input) {
    var card = input.closest(".mon");
    if (!card) return "";
    var sp = card.querySelector('[data-f="species"]');
    return sp ? (sp.dataset.value || "") : "";
  }

  // Move options for a species: its learnset, tagged by method + level, sorted
  // level-up (by level) → egg → TM/tutor. Falls back to all moves when the
  // "Learnset moves only" toggle is off, no species is set, or there's no data.
  function moveOptionsFor(speciesConst) {
    var filterOn = !$("#learn-filter") || $("#learn-filter").checked;
    if (!filterOn || !speciesConst) return LISTS.move;
    var rec = D.learn && D.learn[speciesConst.slice(8)];   // strip "SPECIES_"
    if (!rec) return LISTS.move;
    var out = [], seen = {};
    (rec.lv || []).forEach(function (p) {
      var m = D.moves[p[1]];
      out.push({ c: m.c, n: m.n, badge: "Lv " + p[0], bclass: "b-lv", rank: [0, p[0]] });
      seen[m.c] = 1;
    });
    (rec.egg || []).forEach(function (i) {
      var m = D.moves[i];
      if (!seen[m.c]) { out.push({ c: m.c, n: m.n, badge: "Egg", bclass: "b-egg", rank: [1, 0] }); seen[m.c] = 1; }
    });
    (rec.tm || []).forEach(function (i) {
      var m = D.moves[i];
      if (!seen[m.c]) { out.push({ c: m.c, n: m.n, badge: "TM", bclass: "b-tm", rank: [2, 0] }); seen[m.c] = 1; }
    });
    out.sort(function (a, b) { return a.rank[0] - b.rank[0] || a.rank[1] - b.rank[1] || a.n.localeCompare(b.n); });
    return out;
  }

  /* ---- combobox ------------------------------------------------------ */
  var openPop = null;
  function closePop() { if (openPop) { openPop.classList.remove("open"); openPop = null; } }
  document.addEventListener("click", function (e) {
    if (openPop && !e.target.closest(".combo")) closePop();
  });

  function attachCombo(input) {
    var wrap = input.closest(".combo");
    var pop = document.createElement("div");
    pop.className = "combo-pop";
    wrap.appendChild(pop);
    var active = -1, rendered = [];

    function render(q) {
      var kind = input.dataset.kind;
      q = (q || "").trim().toLowerCase();
      var opts = kind === "move" ? moveOptionsFor(moveSpecies(input)) : optionsFor(kind);
      var out = [], i;
      for (i = 0; i < opts.length && out.length < 60; i++) {
        var o = opts[i];
        if (!q || o.n.toLowerCase().indexOf(q) >= 0 || o.c.toLowerCase().indexOf(q) >= 0) out.push(o);
      }
      rendered = out; active = -1;
      pop.innerHTML = out.map(function (o, idx) {
        var right = "";
        if (kind === "species" && !o.sc) right = '<span class="gbadge">out of scope</span> ';
        else if (o.badge) right = '<span class="lbadge ' + (o.bclass || "") + '">' + esc(o.badge) + "</span> ";
        return '<div class="combo-opt" data-i="' + idx + '"><span>' + esc(o.n) + "</span>" +
               right + "<small>" + esc(o.c) + "</small></div>";
      }).join("") || '<div class="combo-opt"><span class="muted">no match</span></div>';
    }
    function open() { closePop(); render(input.value); pop.classList.add("open"); openPop = pop; }
    function pick(o) {
      input.dataset.value = o.c; input.dataset.label = o.n; input.value = o.n;
      closePop(); onClassPicSync(input); rerender();
    }

    input.addEventListener("focus", open);
    input.addEventListener("input", function () { input.dataset.value = ""; render(input.value); pop.classList.add("open"); openPop = pop; });
    input.addEventListener("keydown", function (e) {
      if (!pop.classList.contains("open")) return;
      if (e.key === "ArrowDown" || e.key === "ArrowUp") {
        e.preventDefault();
        active += (e.key === "ArrowDown" ? 1 : -1);
        if (active < 0) active = rendered.length - 1;
        if (active >= rendered.length) active = 0;
        $$(".combo-opt", pop).forEach(function (el, i) { el.classList.toggle("active", i === active); });
      } else if (e.key === "Enter") {
        e.preventDefault();
        var idx = active >= 0 ? active : 0;
        if (rendered[idx]) pick(rendered[idx]);
      } else if (e.key === "Escape") { input.value = input.dataset.label || ""; closePop(); }
    });
    pop.addEventListener("mousedown", function (e) {
      var el = e.target.closest(".combo-opt"); if (!el) return;
      var idx = +el.dataset.i; if (rendered[idx]) pick(rendered[idx]);
    });
    input.addEventListener("blur", function () {
      setTimeout(function () {            // snap back to a valid selection
        if (!input.value.trim()) { input.dataset.value = ""; input.dataset.label = ""; }
        else input.value = input.dataset.label || "";
        if (openPop === pop) closePop();
      }, 120);
    });
  }
  function comboVal(input) { return input.dataset.value || ""; }
  function setCombo(input, c) {
    if (!c) { input.value = ""; input.dataset.value = ""; input.dataset.label = ""; return; }
    var kind = input.dataset.kind, n = labelOf(kind, c);
    input.dataset.value = c; input.dataset.label = n; input.value = n;
  }

  // When you pick a Class and Pic is empty, offer the matching pic automatically.
  function onClassPicSync(input) {
    if (input.id !== "t-class") return;
    var pic = $("#t-pic");
    if (comboVal(pic)) return;
    var suffix = comboVal(input).replace("TRAINER_CLASS_", "");
    var match = D.pics.filter(function (p) { return p.c === "TRAINER_PIC_" + suffix; })[0];
    if (match) setCombo(pic, match.c);
  }

  function esc(s) { return String(s).replace(/[&<>"]/g, function (c) {
    return { "&": "&amp;", "<": "&lt;", ">": "&gt;", '"': "&quot;" }[c]; }); }

  /* ---- static fields ------------------------------------------------- */
  // Music
  var mus = $("#t-music");
  mus.innerHTML = '<option value="">—</option>' + D.music.map(function (m) {
    return '<option value="' + m.c + '">' + esc(m.n) + "</option>"; }).join("");

  // AI flags (common as checkboxes, rest under the disclosure)
  function aiBox(f) {
    return '<label><input type="checkbox" value="' + f.c + '"' +
      (f.c === "AI_FLAG_BASIC_TRAINER" ? " checked" : "") + ">" + esc(f.n) + "</label>";
  }
  $("#ai-common").innerHTML = D.aiFlags.filter(function (f) { return f.common; }).map(aiBox).join("");
  $("#ai-advanced").innerHTML = D.aiFlags.filter(function (f) { return !f.common; }).map(aiBox).join("");

  // Item bag (4 slots)
  $("#t-items").innerHTML = [0, 1, 2, 3].map(function (i) {
    return '<div class="fld"><label>Slot ' + (i + 1) + '</label><div class="combo">' +
      '<input class="combo-in" data-kind="item" placeholder="optional"></div></div>'; }).join("");

  // Trainer-level combos
  attachCombo($("#t-class")); attachCombo($("#t-pic"));
  $$("#t-items .combo-in").forEach(attachCombo);

  /* ---- party cards --------------------------------------------------- */
  var party = $("#party-cards");
  function monCard() {
    var d = document.createElement("div");
    d.className = "mon";
    d.innerHTML =
      '<div class="mon-head"><b class="mon-n"></b><button class="x" data-act="remove" title="remove">&times;</button></div>' +
      '<div class="row"><div class="fld grow"><label>Species</label><div class="combo">' +
        '<input class="combo-in" data-kind="species" data-f="species" placeholder="search species…"></div></div></div>' +
      '<div class="row">' +
        '<div class="fld sm"><label>Gender</label><select data-f="gender"><option value="">—</option><option>M</option><option>F</option></select></div>' +
        '<div class="fld sm"><label>Level</label><input type="number" data-f="level" min="1" max="100" value="5"></div>' +
        '<div class="fld"><label>Ability</label><div class="combo"><input class="combo-in" data-kind="ability" data-f="ability" placeholder="optional"></div></div>' +
        '<div class="fld"><label>Held item</label><div class="combo"><input class="combo-in" data-kind="item" data-f="item" placeholder="optional"></div></div>' +
      "</div>" +
      '<div class="row"><div class="fld grow"><label>Moves (up to 4)</label></div></div>' +
      '<div class="row">' + [0, 1, 2, 3].map(function (i) {
        return '<div class="fld"><div class="combo"><input class="combo-in" data-kind="move" data-f="move" placeholder="move ' + (i + 1) + '…"></div></div>';
      }).join("") + "</div>" +
      '<details><summary>Custom IVs (default 31)</summary><div class="iv-grid" style="margin-top:6px">' +
        [["hp", "HP"], ["atk", "Atk"], ["def", "Def"], ["spa", "SpA"], ["spd", "SpD"], ["spe", "Spe"]].map(function (s) {
          return '<div class="fld sm"><label>' + s[1] + '</label><input type="number" data-iv="' + s[0] + '" min="0" max="31" placeholder="31"></div>';
        }).join("") + "</div></details>";
    party.appendChild(d);
    $$(".combo-in", d).forEach(attachCombo);
    renumber();
    return d;
  }
  function renumber() {
    $$(".mon", party).forEach(function (m, i) { $(".mon-n", m).textContent = "Pokémon " + (i + 1); });
  }
  party.addEventListener("click", function (e) {
    if (e.target.dataset.act === "remove") {
      if ($$(".mon", party).length > 1) { e.target.closest(".mon").remove(); renumber(); rerender(); }
    }
  });
  $("#add-mon").addEventListener("click", function () {
    if ($$(".mon", party).length >= 6) { toast("6 Pokémon max"); return; }
    monCard(); rerender();
  });

  /* ---- read form → trainer object ------------------------------------ */
  function readMon(card) {
    var get = function (f) { return $('[data-f="' + f + '"]', card); };
    var moves = $$('[data-f="move"]', card).map(comboVal).filter(Boolean);
    var ivInputs = $$("[data-iv]", card), ivs = null, any = false, obj = {};
    ivInputs.forEach(function (inp) {
      var v = inp.value.trim();
      obj[inp.dataset.iv] = v === "" ? 31 : Math.max(0, Math.min(31, +v));
      if (v !== "") any = true;
    });
    if (any) ivs = obj;
    return {
      species: comboVal(get("species")),
      gender: get("gender").value,
      level: get("level").value,
      ability: comboVal(get("ability")),
      item: comboVal(get("item")),
      moves: moves, ivs: ivs,
    };
  }
  function readTrainer() {
    return {
      id: $("#t-id").value.trim() || "TRAINER_UNNAMED",
      name: $("#t-name").value.trim(),
      trainerClass: comboVal($("#t-class")),
      pic: comboVal($("#t-pic")),
      gender: $("#t-gender").value,
      music: mus.value,
      doubleBattle: $("#t-double").value === "1",
      ai: $$('#ai-common input:checked, #ai-advanced input:checked').map(function (c) { return c.value; }),
      items: $$("#t-items .combo-in").map(comboVal).filter(Boolean),
      backstory: $("#t-backstory").value,
      party: $$(".mon", party).map(readMon).filter(function (m) { return m.species; }),
    };
  }

  /* ---- render -------------------------------------------------------- */
  function rerender() {
    var t = readTrainer();
    $("#preview").textContent = S.trainerToParty(t);
    var id = t.id;

    var warn = [];
    if (!t.name) warn.push("<b>Name</b> is required (shown in battle).");
    if (!t.pic) warn.push("<b>Pic</b> is required — pick a battle sprite (auto-fills from Class for standard classes).");
    if (!t.trainerClass) warn.push("No <b>Class</b> set — recommended (affects prize money & flavour).");
    if (!$("#t-id").value.trim()) warn.push("No <b>Trainer ID</b> — using <code>TRAINER_UNNAMED</code>.");
    if (!t.party.length) warn.push("Add at least one Pokémon (with a species).");
    var warnHtml = warn.length
      ? '<div style="border:1px solid var(--warn);border-radius:8px;padding:8px 10px;margin-bottom:8px;color:var(--warn)">' +
        "&#9888; Before this compiles:<br>" + warn.map(function (w) { return "&bull; " + w; }).join("<br>") + "</div>"
      : "";

    $("#reg-checklist").innerHTML = warnHtml +
      "<b>To make <code>" + esc(id) + "</code> battle in-game:</b><br>" +
      "1. Paste the block above into <code>src/data/trainers.party</code>.<br>" +
      "2. Add <code>#define " + esc(id) + "&nbsp;&lt;next id&gt;</code> in <code>include/constants/opponents.h</code> " +
      "(and bump <code>TRAINERS_COUNT</code> past it).<br>" +
      "3. Reference it from a map: <code>trainerbattle_single(" + esc(id) + ", …)</code>.<br>" +
      "4. <code>make -j$(nproc) modern</code> to build.";
  }
  globalThis.__tbRender = rerender;
  $(".wrap").addEventListener("input", rerender);
  $(".wrap").addEventListener("change", rerender);

  /* ---- actions ------------------------------------------------------- */
  function toast(msg) {
    var t = $("#toast"); t.textContent = msg; t.classList.add("show");
    clearTimeout(toast._t); toast._t = setTimeout(function () { t.classList.remove("show"); }, 1400);
  }
  function copy(text, ok) {
    if (navigator.clipboard && navigator.clipboard.writeText) {
      navigator.clipboard.writeText(text).then(function () { toast(ok); }, function () { legacy(); });
    } else legacy();
    function legacy() {
      var ta = document.createElement("textarea"); ta.value = text; document.body.appendChild(ta);
      ta.select(); try { document.execCommand("copy"); toast(ok); } catch (e) { toast("Copy failed"); }
      document.body.removeChild(ta);
    }
  }
  function download(text, name) {
    var b = new Blob([text], { type: "text/plain" }), u = URL.createObjectURL(b);
    var a = document.createElement("a"); a.href = u; a.download = name; a.click();
    setTimeout(function () { URL.revokeObjectURL(u); }, 1000);
  }
  $("#btn-copy").addEventListener("click", function () { copy($("#preview").textContent, "Block copied"); });
  $("#btn-download").addEventListener("click", function () {
    download($("#preview").textContent, (readTrainer().id) + ".party");
  });

  /* ---- saved list (localStorage) ------------------------------------- */
  var KEY = "tb_saved_v1";
  function loadSaved() { try { return JSON.parse(localStorage.getItem(KEY)) || []; } catch (e) { return []; } }
  function storeSaved(a) { try { localStorage.setItem(KEY, JSON.stringify(a)); } catch (e) { toast("Storage unavailable"); } }
  function renderSaved() {
    var a = loadSaved(), box = $("#saved-list");
    if (!a.length) { box.innerHTML = '<p class="muted">Nothing saved yet. Build a trainer and hit “Save to list”.</p>'; return; }
    box.innerHTML = a.map(function (s, i) {
      return '<div class="saved"><span class="nm"><b>' + esc(s.obj.name || "(no name)") + "</b> " +
        '<span class="muted">' + esc(s.obj.id) + "</span></span><span>" +
        '<button class="mini ghost" data-act="load" data-i="' + i + '">Load</button> ' +
        '<button class="x" data-act="del" data-i="' + i + '">&times;</button></span></div>';
    }).join("");
  }
  $("#saved-list").addEventListener("click", function (e) {
    var btn = e.target.closest("button"); if (!btn) return;
    var a = loadSaved(), i = +btn.dataset.i;
    if (btn.dataset.act === "del") { a.splice(i, 1); storeSaved(a); renderSaved(); }
    else if (btn.dataset.act === "load") { applyTrainer(a[i].obj); toast("Loaded"); }
  });
  $("#btn-save").addEventListener("click", function () {
    var t = readTrainer(), a = loadSaved();
    var existing = a.map(function (s) { return s.obj.id; }).indexOf(t.id);
    var entry = { obj: t, ts: Date.now() };
    if (existing >= 0) a[existing] = entry; else a.push(entry);
    storeSaved(a); renderSaved(); toast(existing >= 0 ? "Updated" : "Saved");
  });
  $("#btn-export-all").addEventListener("click", function () {
    var a = loadSaved(); if (!a.length) { toast("Nothing saved"); return; }
    copy(a.map(function (s) { return S.trainerToParty(s.obj); }).join("\n"), "All " + a.length + " copied");
  });

  /* ---- apply a saved trainer back into the form ---------------------- */
  function applyTrainer(t) {
    $("#t-id").value = t.id === "TRAINER_UNNAMED" ? "" : (t.id || "");
    $("#t-name").value = t.name || "";
    setCombo($("#t-class"), t.trainerClass); setCombo($("#t-pic"), t.pic);
    $("#t-gender").value = t.gender || ""; mus.value = t.music || "";
    $("#t-double").value = t.doubleBattle ? "1" : "";
    $("#t-backstory").value = t.backstory || "";
    $$('#ai-common input, #ai-advanced input').forEach(function (c) { c.checked = (t.ai || []).indexOf(c.value) >= 0; });
    var bag = $$("#t-items .combo-in");
    bag.forEach(function (inp, i) { setCombo(inp, (t.items || [])[i] || ""); });
    party.innerHTML = "";
    var mons = (t.party && t.party.length) ? t.party : [{}];
    mons.forEach(function (m) {
      var card = monCard();
      setCombo($('[data-f="species"]', card), m.species || "");
      $('[data-f="gender"]', card).value = m.gender || "";
      $('[data-f="level"]', card).value = m.level != null ? m.level : 5;
      setCombo($('[data-f="ability"]', card), m.ability || "");
      setCombo($('[data-f="item"]', card), m.item || "");
      var mv = $$('[data-f="move"]', card);
      (m.moves || []).forEach(function (mc, i) { if (mv[i]) setCombo(mv[i], mc); });
      if (m.ivs) $$("[data-iv]", card).forEach(function (inp) {
        var v = m.ivs[inp.dataset.iv]; if (v != null) inp.value = v; });
    });
    rerender();
  }

  /* ---- boot ---------------------------------------------------------- */
  // The demo trainer is injected by build.py (different for the private vs the
  // sanitized public build), so no canon content is hard-coded in this file.
  var DEMO = globalThis.TBDEMO || null;
  globalThis.__tbDemo = function () { if (DEMO) applyTrainer(DEMO); };

  monCard();          // start with one empty Pokémon
  renderSaved();
  rerender();
  if (location.hash === "#demo") __tbDemo();
})();
