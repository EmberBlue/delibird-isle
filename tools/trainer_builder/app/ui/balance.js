/* Trainer Builder — Balance view: difficulty curve, matchup lab, type coverage. */
(function (TB) {
  "use strict";
  var U = TB.ui, h = U.h, App = TB.app, C = TB.calc;
  var SVGNS = "http://www.w3.org/2000/svg";
  var B = { trainer: null, cell: null };

  // Emerald's gym leaders and Elite Four, by the badges the player holds when fighting them.
  var EMERALD_LADDER = [
    ["TRAINER_ROXANNE_1", 0], ["TRAINER_BRAWLY_1", 1], ["TRAINER_WATTSON_1", 2], ["TRAINER_FLANNERY_1", 3],
    ["TRAINER_NORMAN_1", 4], ["TRAINER_WINONA_1", 5], ["TRAINER_TATE_AND_LIZA_1", 6], ["TRAINER_JUAN_1", 7],
    ["TRAINER_SIDNEY", 8], ["TRAINER_PHOEBE", 8], ["TRAINER_GLACIA", 8], ["TRAINER_DRAKE", 8], ["TRAINER_WALLACE", 8],
  ];

  function s(tag, attrs, kids) {
    var el = document.createElementNS(SVGNS, tag);
    Object.keys(attrs || {}).forEach(function (k) { el.setAttribute(k, attrs[k]); });
    (kids || []).forEach(function (k) { if (k) el.appendChild(typeof k === "string" ? document.createTextNode(k) : k); });
    return el;
  }
  function lvOf(m) { return m.level != null && m.level !== "" ? +m.level : 100; }
  function teamLevels(t) {
    var lv = (t.party || []).filter(function (m) { return m.species; }).map(lvOf);
    if (!lv.length) return null;
    return { min: Math.min.apply(null, lv), max: Math.max.apply(null, lv), mean: lv.reduce(function (a, b) { return a + b; }, 0) / lv.length };
  }
  function panel(title, sub, body) {
    return h("section", { class: "panel" }, h("div", { class: "ph" }, h("div", null, h("h3", null, title), sub ? h("div", { class: "small muted" }, sub) : null)),
      h("div", { class: "pb" }, body));
  }

  /* ------------------------------------------------------- curve ---- */
  function curve() {
    var D = App.D, caps = D.raw.levelCaps || [];
    var ref = TB.project.reference(D), byId = {};
    ref.forEach(function (t) { if (!t.difficulty || t.difficulty === "Normal") byId[t.id] = t; });
    var pts = App.project.trainers.filter(function (t) { return t.meta && t.meta.stage !== "" && t.meta.stage != null && teamLevels(t); });
    var refPts = EMERALD_LADDER.filter(function (x) { return byId[x[0]] && teamLevels(byId[x[0]]); })
      .map(function (x) { return { t: byId[x[0]], stage: x[1], lv: teamLevels(byId[x[0]]) }; });
    var maxLv = 10;
    pts.forEach(function (t) { maxLv = Math.max(maxLv, teamLevels(t).max); });
    refPts.forEach(function (r) { maxLv = Math.max(maxLv, r.lv.max); });
    caps.forEach(function (c) { maxLv = Math.max(maxLv, c.level); });
    var yMax = Math.ceil((maxLv + 4) / 10) * 10;
    var W = 760, H = 330, L = 44, R = 16, T = 14, Bm = 40;
    var stages = 10;
    function x(st) { return L + ((st + 0.5) / stages) * (W - L - R); }
    function y(v) { return T + (1 - v / yMax) * (H - T - Bm); }
    var svg = s("svg", { viewBox: "0 0 " + W + " " + H, class: "chart", role: "img", "aria-label": "Party levels by badge stage against level caps" });
    var grid = s("g", { class: "grid" });
    for (var v = 0; v <= yMax; v += 10) {
      grid.appendChild(s("line", { x1: L, x2: W - R, y1: y(v), y2: y(v) }));
      svg.appendChild(s("text", { x: L - 8, y: y(v) + 4, "text-anchor": "end" }, [String(v)]));
    }
    svg.insertBefore(grid, svg.firstChild);
    for (var st = 0; st < stages; st++) {
      svg.appendChild(s("text", { x: x(st), y: H - Bm + 18, "text-anchor": "middle" }, [st === 9 ? "Post" : String(st)]));
    }
    svg.appendChild(s("text", { x: (L + W - R) / 2, y: H - 6, "text-anchor": "middle" }, ["Badges held when the battle happens"]));
    svg.appendChild(s("text", { x: 12, y: T + (H - T - Bm) / 2, "text-anchor": "middle", transform: "rotate(-90 12 " + (T + (H - T - Bm) / 2) + ")" }, ["Level"]));
    // level caps (step)
    if (caps.length) {
      var d = "";
      caps.forEach(function (c, i) {
        var x0 = L + (i / stages) * (W - L - R), x1 = L + ((i + 1) / stages) * (W - L - R);
        d += (i ? "L" : "M") + x0 + "," + y(c.level) + "L" + x1 + "," + y(c.level);
      });
      svg.appendChild(s("path", { d: d, fill: "none", stroke: "var(--warn)", "stroke-width": 2, "stroke-dasharray": "5 4" }));
    }
    // Emerald reference
    refPts.forEach(function (r, k) {
      var same = refPts.filter(function (o) { return o.stage === r.stage; });
      var j = same.indexOf(r), off = same.length > 1 ? (j - (same.length - 1) / 2) * 9 : 0;
      var cx = x(r.stage) + off, cy = y(r.lv.max);
      svg.appendChild(s("path", { d: "M" + cx + "," + (cy - 6) + "l6,6l-6,6l-6,-6z", fill: "var(--surface)", stroke: "var(--muted)", "stroke-width": 1.6 },
        [s("title", {}, [r.t.name + " (Emerald reference): ace Lv " + r.lv.max])]));
      void k;
    });
    // project trainers
    var byStage = {};
    pts.forEach(function (t) { var k = Math.min(9, +t.meta.stage); (byStage[k] = byStage[k] || []).push(t); });
    Object.keys(byStage).forEach(function (k) {
      var list = byStage[k];
      list.forEach(function (t, j) {
        var lv = teamLevels(t);
        var off = list.length > 1 ? (j - (list.length - 1) / 2) * Math.min(14, 60 / list.length) : 0;
        var cx = x(+k) + off + 0.5;
        var over = caps[+k] && lv.max > caps[+k].level;
        var col = over ? "var(--err)" : "var(--accent)";
        var g = s("g", { style: "cursor:pointer" }, [s("title", {}, [(t.name || t.id) + ": Lv " + lv.min + "–" + lv.max + (over ? ", above the cap" : "")])]);
        g.appendChild(s("line", { x1: cx, x2: cx, y1: y(lv.min), y2: y(lv.max), stroke: col, "stroke-width": 3, "stroke-linecap": "round", opacity: 0.55 }));
        g.appendChild(s("circle", { cx: cx, cy: y(lv.max), r: 5.5, fill: col, stroke: "var(--surface)", "stroke-width": 1.5 }));
        g.addEventListener("click", function () { App.select(t.uid); });
        svg.appendChild(g);
      });
    });
    function key(svg, label) { return h("span", null, h("span", { html: svg }), label); }
    var legend = h("div", { class: "legend" },
      key('<svg width="14" height="14" aria-hidden="true"><circle cx="7" cy="7" r="5" fill="var(--accent)"/></svg>', "Project trainer: dot = ace, bar = level range"),
      key('<svg width="14" height="14" aria-hidden="true"><path d="M7 1l6 6-6 6-6-6z" fill="none" stroke="var(--muted)" stroke-width="1.6"/></svg>', "Emerald gym leader / Elite Four ace (this repo's data)"),
      key('<svg width="22" height="10" aria-hidden="true"><path d="M0 5h22" stroke="var(--warn)" stroke-width="2" stroke-dasharray="5 4"/></svg>', "Level cap from src/caps.c"));
    var body = [h("div", { style: { overflowX: "auto" } }, svg), legend];
    if (!pts.length) body.unshift(h("div", { class: "detail" }, "No project trainer has a Stage yet. Set one under Story & dialogue to plot it here."));
    var over = pts.filter(function (t) { var c = caps[Math.min(8, +t.meta.stage)]; return +t.meta.stage < 9 && c && teamLevels(t).max > c.level; });
    if (over.length) body.push(h("div", { class: "detail" }, h("b", null, "Above the cap: "),
      over.map(function (t) { return (t.name || t.id) + " (ace Lv " + teamLevels(t).max + ", cap " + caps[+t.meta.stage].level + ")"; }).join("; ")));
    var capNote = D.config.B_LEVEL_CAP_TYPE ? "" : " B_LEVEL_CAP_TYPE is LEVEL_CAP_NONE, so these caps are a design guide; the game doesn't enforce them.";
    return panel("Difficulty curve", "Every project trainer with a Stage, against the project's level caps." + capNote, body);
  }

  /* ---------------------------------------------------- matchup lab ---- */
  function encounterMaps() {
    var D = App.D, seen = {}, out = [];
    D.raw.encounters.forEach(function (e) {
      if (!e.map || seen[e.map]) return;
      seen[e.map] = 1;
      out.push({ c: e.map, n: (D.raw.maps[e.map] || {}).n || e.map });
    });
    return out.sort(function (a, b) { return a.n.localeCompare(b.n); });
  }

  function poolFor(t) {
    var D = App.D, bal = App.project.balance, lv = teamLevels(t) || { mean: 5, max: 5 };
    var targetLv = bal.levelMode === "ace" ? lv.max : Math.round(lv.mean);
    var bySp = {};
    D.raw.encounters.forEach(function (e) {
      if (bal.maps.indexOf(e.map) < 0) return;
      bal.methods.forEach(function (f) {
        (e.f[f] || []).forEach(function (row) {
          var sp = D.spIdx[row[0]];
          if (!sp) return;
          var r = bySp[sp.c] = bySp[sp.c] || { c: sp.c, minL: 100, maxL: 1, pct: 0, from: "wild" };
          r.minL = Math.min(r.minL, row[1]); r.maxL = Math.max(r.maxL, row[2]); r.pct += row[3];
        });
      });
    });
    (bal.custom || []).forEach(function (cm) { bySp[cm.species + "#c"] = { c: cm.species, level: cm.level, from: "custom", pct: 1e9 }; });
    var list = Object.keys(bySp).map(function (k) { return bySp[k]; }).sort(function (a, b) { return b.pct - a.pct; });
    var truncated = list.length > 30;
    list = list.slice(0, 30);
    return {
      truncated: truncated, targetLv: targetLv,
      mons: list.map(function (r) {
        var level = r.from === "custom" ? r.level : bal.levelMode === "wild" ? r.maxL : Math.max(1, Math.min(100, targetLv + (+bal.levelOffset || 0)));
        var e = C.effectiveMon(D, {}, { species: r.c, level: level }, { defaultIV: +bal.iv });
        if (e) e.from = r.from;
        return e;
      }).filter(Boolean),
    };
  }

  function matchupLab() {
    var D = App.D, bal = App.project.balance;
    var trainers = App.project.trainers.filter(function (t) { return (t.party || []).some(function (m) { return m.species; }); });
    if (!trainers.length) return panel("Matchup lab", null, [h("div", { class: "empty" }, "Add a trainer with at least one Pokémon to test matchups.")]);
    var t = trainers.filter(function (x) { return x.uid === (B.trainer || App.sel); })[0] || trainers[0];
    B.trainer = t.uid;
    if (!bal.maps.length) {
      var home = t.meta && t.meta.map;
      var maps = encounterMaps();
      bal.maps = [home && maps.some(function (m) { return m.c === home; }) ? home : (maps.filter(function (m) { return m.c === "MAP_PARCEL_ISLE"; })[0] || maps[0] || {}).c].filter(Boolean);
    }
    var redo = function () { App.change(); var main = U.$("#view"); U.clear(main); render(main); };

    var tSel = U.select("bal-trainer", trainers.map(function (x) { return { c: x.uid, n: (x.name || "Unnamed") + " · " + x.id }; }), t.uid, function (v) { B.trainer = v; B.cell = null; redo(); });
    var chips = h("div", { class: "chips" });
    bal.maps.forEach(function (mc) {
      chips.appendChild(h("span", { class: "chip" }, (D.raw.maps[mc] || {}).n || mc,
        h("button", { "aria-label": "Remove", onclick: function () { bal.maps = bal.maps.filter(function (x) { return x !== mc; }); redo(); } }, "×")));
    });
    (bal.custom || []).forEach(function (cm, i) {
      chips.appendChild(h("span", { class: "chip" }, D.label("species", cm.species) + " Lv " + cm.level,
        h("button", { "aria-label": "Remove", onclick: function () { bal.custom.splice(i, 1); redo(); } }, "×")));
    });
    var addMap = U.combo({ id: "bal-addmap", value: "", label: function (c) { return (D.raw.maps[c] || {}).n || c; }, options: function () { return encounterMaps(); },
      placeholder: "Add a map's wild Pokémon", onChange: function (c) { if (c && bal.maps.indexOf(c) < 0) bal.maps.push(c); redo(); } });
    var addMonLv = h("input", { type: "number", id: "bal-addlv", min: 1, max: 100, placeholder: "Lv", style: { width: "80px" } });
    var addMon = U.combo({ id: "bal-addmon", value: "", label: function (c) { return D.label("species", c); },
      options: function () { return D.species.filter(function (x) { return x.sc; }).map(function (x) { return { c: x.c, n: x.n, icon: D.image(x.icon) }; }); },
      placeholder: "Add a specific Pokémon (e.g. a starter)", onChange: function (c) {
        if (!c) return;
        var lvl = +addMonLv.value || Math.round((teamLevels(t) || { mean: 5 }).mean);
        bal.custom = (bal.custom || []).concat([{ species: c, level: lvl }]);
        redo();
      } });
    var methods = h("div", { class: "btn-row" });
    [["land_mons", "Grass"], ["water_mons", "Surfing"], ["fishing_mons", "Fishing"], ["rock_smash_mons", "Rock Smash"]].forEach(function (m) {
      var cb = h("input", { type: "checkbox", checked: bal.methods.indexOf(m[0]) >= 0 });
      cb.addEventListener("change", function () {
        bal.methods = bal.methods.filter(function (x) { return x !== m[0]; });
        if (cb.checked) bal.methods.push(m[0]);
        redo();
      });
      methods.appendChild(h("label", { class: "check-inline small" }, cb, m[1]));
    });
    var mode = U.select("bal-mode", [{ c: "avg", n: "Trainer's average level" }, { c: "ace", n: "Trainer's ace level" }, { c: "wild", n: "Highest wild level" }],
      bal.levelMode, function (v) { bal.levelMode = v; redo(); });
    var off = h("input", { type: "number", id: "bal-off", min: -20, max: 20, value: bal.levelOffset, disabled: bal.levelMode === "wild" });
    off.addEventListener("change", function () { bal.levelOffset = +off.value || 0; redo(); });
    var iv = U.select("bal-iv", [{ c: "0", n: "0 (worst)" }, { c: "15", n: "15 (average wild)" }, { c: "31", n: "31 (perfect)" }], String(bal.iv), function (v) { bal.iv = +v; redo(); });

    var team = (t.party || []).filter(function (m) { return m.species; }).map(function (m) { return C.effectiveMon(D, t, m); }).filter(Boolean);
    var pool = poolFor(t);
    var controls = [
      h("div", { class: "grid g3" }, U.field("Trainer", tSel), U.field("Player level", mode), U.field("Level offset", off, { help: "Added to the level on the left." })),
      U.field("Player's Pokémon come from", h("div", { style: { display: "flex", flexDirection: "column", gap: "8px" } }, chips,
        h("div", { class: "grid g2" }, addMap.el, h("div", { style: { display: "flex", gap: "8px" } }, h("div", { style: { flex: 1 } }, addMon.el), addMonLv)), methods)),
      h("div", { class: "grid g3" }, U.field("Player IVs", iv)),
    ];
    if (!pool.mons.length) {
      return panel("Matchup lab", "One-on-one outcomes between this trainer's team and Pokémon the player can catch.",
        controls.concat([h("div", { class: "detail" }, "No wild Pokémon on the chosen maps with these methods. Add a map or a specific Pokémon.")]));
    }

    // grid
    var grid = team.map(function (a) { return pool.mons.map(function (b) { return C.matchup(D, a, b); }); });
    var wins = 0, n = 0;
    grid.forEach(function (row) { row.forEach(function (r) { n++; wins += r.result === "win" ? 1 : r.result === "tie" ? 0.5 : 0; }); });
    var rowRates = grid.map(function (row) { return row.reduce(function (s2, r) { return s2 + (r.result === "win" ? 1 : r.result === "tie" ? 0.5 : 0); }, 0) / row.length; });
    var colRates = pool.mons.map(function (_, j) { return grid.reduce(function (s2, row) { return s2 + (row[j].result === "loss" ? 1 : row[j].result === "tie" ? 0.5 : 0); }, 0) / grid.length; });
    var hardest = rowRates.indexOf(Math.max.apply(null, rowRates));
    var bestAns = colRates.indexOf(Math.max.apply(null, colRates));
    var pct = function (x) { return Math.round(x * 100) + "%"; };

    var kpis = h("div", { class: "kpis" },
      kpiBox("Trainer wins", pct(wins / n), n + " one-on-ones (" + team.length + " × " + pool.mons.length + "), ties count half"),
      kpiBox("Toughest Pokémon", D.label("species", team[hardest].species), "beats " + pct(rowRates[hardest]) + " of the player's options"),
      colRates[bestAns] > 0
        ? kpiBox("Best answer", D.label("species", pool.mons[bestAns].species), "beats " + pct(colRates[bestAns]) + " of the team")
        : kpiBox("Best answer", "None", "no option here beats any of the team one-on-one"),
      kpiBox("Player level", pool.mons[0] ? "Lv " + pool.mons[0].level + (pool.mons.some(function (m) { return m.level !== pool.mons[0].level; }) ? "+" : "") : "—", "IVs " + bal.iv + ", EVs 0, neutral nature"));

    var thead = h("tr", null, h("th", null, "Trainer ↓ / Player →"));
    pool.mons.forEach(function (b) { thead.appendChild(h("th", { class: "sp", title: D.label("species", b.species) + " Lv " + b.level }, D.label("species", b.species))); });
    thead.appendChild(h("th", null, "Wins"));
    var tbody = h("tbody");
    var detail = h("div");
    team.forEach(function (a, i) {
      var tr = h("tr", null, h("th", { style: { whiteSpace: "nowrap", textTransform: "none", letterSpacing: 0, fontSize: "13px" } },
        U.monIcon(D, a.species), " ", D.label("species", a.species), " ", h("span", { class: "muted" }, "Lv " + a.level)));
      grid[i].forEach(function (r, j) {
        var td = h("td", { class: "cell " + r.result, tabindex: "0", title: D.label("species", a.species) + " vs " + D.label("species", pool.mons[j].species) },
          r.result === "win" ? "W" : r.result === "loss" ? "L" : "T");
        var show = function () { B.cell = [i, j]; showDetail(detail, a, pool.mons[j], r); };
        td.addEventListener("click", show);
        td.addEventListener("keydown", function (e) { if (e.key === "Enter") show(); });
        tr.appendChild(td);
      });
      tr.appendChild(h("td", { class: "num" }, pct(rowRates[i])));
      tbody.appendChild(tr);
    });
    var foot = h("tr", null, h("th", { style: { textTransform: "none", letterSpacing: 0, fontSize: "12.5px" } }, "Player wins"));
    colRates.forEach(function (r) { foot.appendChild(h("td", { class: "num small" }, pct(r))); });
    foot.appendChild(h("td"));
    tbody.appendChild(foot);
    if (B.cell && grid[B.cell[0]] && grid[B.cell[0]][B.cell[1]]) showDetail(detail, team[B.cell[0]], pool.mons[B.cell[1]], grid[B.cell[0]][B.cell[1]]);
    else showDetail(detail, team[hardest], pool.mons[bestAns], grid[hardest][bestAns]);

    return panel("Matchup lab", "One-on-one outcomes between this trainer's team and Pokémon the player can catch. W = the trainer's Pokémon wins.", controls.concat([
      kpis,
      h("div", { class: "table-wrap" }, h("table", { class: "data heat" }, h("thead", null, thead), tbody)),
      pool.truncated ? h("div", { class: "small muted" }, "Showing the 30 most common wild species on these maps.") : null,
      detail,
      assumptions(),
    ]));
  }

  function kpiBox(k, v, sub) { return h("div", { class: "kpi" }, h("div", { class: "k" }, k), h("div", { class: "v" }, v), h("div", { class: "s" }, sub)); }

  function moveLine(D, att, def, r) {
    if (!r) return h("div", null, D.label("species", att.species), " has no damaging move against ", D.label("species", def.species), ".");
    var odds = r.ko.median ? (r.ko.median === 1 ? "KOs in one hit" : "KOs in " + r.ko.median + " hits (median)") : "can't KO within 8 hits";
    if (r.ko.n && r.ko.n < (r.ko.median || 99)) odds += "; " + Math.round(r.ko.p * 100) + "% chance in " + r.ko.n;
    return h("div", null, h("b", null, D.label("species", att.species)), " uses ", h("b", null, D.label("move", r.move)), " ",
      U.typeChip(D, D.mv[r.move].t), " for ", h("span", { class: "tabular" }, r.pctMin.toFixed(1) + "–" + r.pctMax.toFixed(1) + "%"),
      " (" + r.min + "–" + r.max + " of " + def.stats.hp + " HP", r.eff !== 1 ? ", " + r.eff + "× effective" : "", r.note ? ", " + r.note : "", "), ", odds,
      r.accuracy && r.accuracy < 100 ? ", " + r.accuracy + "% accuracy" : "", ".");
  }
  function showDetail(el, a, b, r) {
    var D = App.D;
    U.clear(el);
    var first = r.aFirst === null ? "Speed tie: either can move first." : (r.aFirst ? D.label("species", a.species) : D.label("species", b.species)) + " moves first (" +
      a.stats.spe + " vs " + b.stats.spe + " Speed" + ((r.a && r.a.priority) || (r.b && r.b.priority) ? ", priority counted" : "") + ").";
    var verdict = r.result === "win" ? "The trainer's " + D.label("species", a.species) + " wins." : r.result === "loss" ? "The player's " + D.label("species", b.species) + " wins." : "Too close to call.";
    el.appendChild(h("div", { class: "detail" },
      h("div", { style: { display: "flex", gap: "8px", alignItems: "center", marginBottom: "6px" } }, U.monIcon(D, a.species), h("b", null, "vs"), U.monIcon(D, b.species),
        h("span", { class: "sev " + (r.result === "win" ? "error" : r.result === "loss" ? "ok" : "warn") }, verdict)),
      moveLine(D, a, b, r.a), moveLine(D, b, a, r.b), h("div", null, first)));
  }

  function assumptions() {
    return h("details", { class: "assume" }, h("summary", null, "How outcomes are decided"),
      h("ul", null,
        h("li", null, "Stats use the engine's CalculateMonStats. Damage follows its formula and rounding (checked against Bulbapedia's worked examples), with all 16 damage rolls."),
        h("li", null, "Each side uses its best damaging move every turn (expected damage × accuracy). Turns to KO is the first number of hits with at least a 50% chance to KO."),
        h("li", null, "Fewer turns wins; on a tie the side that moves first wins (priority, then Speed). Equal Speed is a toss-up."),
        h("li", null, "Not modelled: critical hits, status moves, stat changes, switching, held items, weather, and abilities other than Levitate-style immunities, Thick Fat, Huge/Pure Power, Wonder Guard and Adaptability."),
        h("li", null, "Player Pokémon use their default level-up moves, ability slot 1, a neutral nature and the IVs chosen above. Trainer Pokémon use exactly what the game builds from trainers.party.")));
  }

  /* ------------------------------------------------------- coverage ---- */
  function coverage() {
    var D = App.D;
    var t = App.project.trainers.filter(function (x) { return x.uid === (B.trainer || App.sel); })[0] || App.trainer();
    if (!t) return null;
    var team = (t.party || []).filter(function (m) { return m.species; }).map(function (m) { return C.effectiveMon(D, t, m); }).filter(Boolean);
    if (!team.length) return null;
    var types = D.types.filter(function (x) { return !x.special; });
    var head = h("tr", null, h("th", null, ""));
    types.forEach(function (ty) { head.appendChild(h("th", { style: { padding: "6px 2px", textAlign: "center" } }, U.typeChip(D, ty.i))); });
    function row(label, cells) { return h("tr", null, h("th", { style: { textTransform: "none", letterSpacing: 0, fontSize: "12.5px", whiteSpace: "nowrap" } }, label), cells); }
    var off = types.map(function (dt) {
      var best = 0;
      team.forEach(function (e) { e.moves.forEach(function (mc) { var mv = D.mv[mc]; if (mv && mv.cat !== 2) best = Math.max(best, C.typeEff(D, mv.t, [dt.i])); }); });
      var txt = best >= 2 ? "2×" : best === 1 ? "1×" : best > 0 ? "½" : "—";
      return h("td", { style: { background: best >= 2 ? "var(--ok-soft)" : best < 1 ? "var(--warn-soft)" : "transparent", color: best >= 2 ? "var(--ok)" : best < 1 ? "var(--warn)" : "var(--muted)" } }, txt);
    });
    var weak = types.map(function (at) {
      var n = team.filter(function (e) { return C.typeEff(D, at.i, e.types) >= 2; }).length;
      return h("td", { style: { background: n >= 3 ? "var(--err-soft)" : "transparent", color: n ? "var(--err)" : "var(--faint)" } }, n || "·");
    });
    var resist = types.map(function (at) {
      var n = team.filter(function (e) { return C.typeEff(D, at.i, e.types) < 1; }).length;
      return h("td", { style: { color: n ? "var(--ok)" : "var(--faint)" } }, n || "·");
    });
    return panel("Type coverage: " + (t.name || t.id), "Moves as the game will use them (listed or default). Weak and resist count team members.", [
      h("div", { class: "table-wrap" }, h("table", { class: "data cov" }, h("thead", null, head),
        h("tbody", null, row("Best hit against", off), row("Weak to", weak), row("Resists", resist)))),
    ]);
  }

  function render(main) {
    main.appendChild(h("div", { class: "cols" }, curve(), matchupLab(), coverage()));
  }
  App.views.balance = { render: render };
})(globalThis.TB = globalThis.TB || {});
