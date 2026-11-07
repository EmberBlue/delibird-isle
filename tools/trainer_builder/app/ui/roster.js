/* Trainer Builder — Roster view: every trainer in the project and in the
   repo's trainers.party, filterable, with party previews and check status. */
(function (TB) {
  "use strict";
  var U = TB.ui, h = U.h, App = TB.app;
  var PAGE = 60;

  function levels(t) {
    var lv = (t.party || []).filter(function (m) { return m.species; }).map(function (m) { return m.level != null && m.level !== "" ? +m.level : 100; });
    if (!lv.length) return null;
    return { min: Math.min.apply(null, lv), max: Math.max.apply(null, lv), mean: lv.reduce(function (a, b) { return a + b; }, 0) / lv.length };
  }

  function rows() {
    var D = App.D, st = App.rosterState, out = [];
    if (st.source !== "repo") App.project.trainers.forEach(function (t) { out.push({ t: t, src: "project" }); });
    if (st.source !== "project") TB.project.reference(D).forEach(function (t) { out.push({ t: t, src: t.custom ? "repo-custom" : "repo" }); });
    var q = st.q.trim().toLowerCase();
    return out.filter(function (r) {
      var t = r.t;
      if (q) {
        var hay = (t.name + " " + t.id + " " + D.label("class", t.trainerClass) + " " +
          (t.party || []).map(function (m) { return D.label("species", m.species); }).join(" ")).toLowerCase();
        if (hay.indexOf(q) < 0) return false;
      }
      if (st.stage !== "") {
        var s = t.meta && t.meta.stage;
        if (String(s) !== st.stage) return false;
      }
      return true;
    });
  }

  function render(main) {
    var D = App.D, st = App.rosterState;
    var seg = h("div", { class: "seg", role: "group", "aria-label": "Source" });
    [["project", "This project"], ["repo", "trainers.party"], ["all", "Both"]].forEach(function (o) {
      seg.appendChild(h("button", { type: "button", "aria-pressed": st.source === o[0] ? "true" : "false", onclick: function () { st.source = o[0]; st.page = 0; App.render(); } }, o[1]));
    });
    var q = h("input", { type: "text", id: "roster-q", placeholder: "Name, ID, class or species", value: st.q });
    var body = h("div");
    q.addEventListener("input", U.debounce(function () { st.q = q.value; st.page = 0; fill(body); }, 150));
    var stageSel = U.select("roster-stage", [{ c: "", n: "Any stage" }].concat([0, 1, 2, 3, 4, 5, 6, 7, 8].map(function (s) { return { c: String(s), n: s + " badges" }; })),
      st.stage, function (v) { st.stage = v; st.page = 0; fill(body); });
    main.appendChild(h("div", { class: "toolbar" },
      U.field("Source", seg), U.field("Search", q), U.field("Stage", stageSel),
      h("p", { class: "small muted", style: { flex: "2 1 260px", margin: 0 } },
        "trainers.party holds " + TB.project.reference(D).length + " trainers from commit " + (D.meta.commit || "?").slice(0, 8) + ". " +
        Object.keys(D.baseline).length + " came with expansion " + (D.meta.expansion || "") + "; the rest were added in this repo.")));
    main.appendChild(body);
    fill(body);
  }

  function fill(body) {
    var D = App.D, st = App.rosterState;
    U.clear(body);
    var list = rows();
    var pages = Math.max(1, Math.ceil(list.length / PAGE));
    st.page = Math.min(st.page, pages - 1);
    var slice = list.slice(st.page * PAGE, st.page * PAGE + PAGE);
    if (!list.length) {
      body.appendChild(h("div", { class: "panel" }, h("div", { class: "empty" }, h("h3", null, "No trainers match"), "Change the source or clear the search.")));
      return;
    }
    var tbody = h("tbody");
    slice.forEach(function (r) {
      var t = r.t, lv = levels(t);
      var icons = h("div", { class: "icons" });
      (t.party || []).slice(0, 12).forEach(function (m) {
        if (!m.species) return;
        var img = U.monIcon(D, m.species);
        img.title = D.label("species", m.species) + " Lv " + (m.level == null || m.level === "" ? 100 : m.level);
        icons.appendChild(img);
      });
      var sum = TB.checks.summary(r.src === "project" ? App.checks(t) : TB.checks.run(D, t, {}));
      var where = r.src === "project" ? (t.meta && t.meta.map) : (D.raw.trainerMaps[t.id] || [])[0];
      var action = r.src === "project"
        ? h("button", { class: "btn small", onclick: function () { App.select(t.uid); } }, "Open")
        : h("button", { class: "btn small", title: "Copy into this project to edit. Applying it replaces this block in trainers.party.", onclick: function () {
            var c = TB.project.clone(t);
            delete c.custom;
            App.addTrainer(c);
            U.toast("Copied " + t.id + " into the project");
          } }, "Copy to project");
      tbody.appendChild(h("tr", null,
        h("td", null, U.picImg(D, t.pic, "pic40")),
        h("td", null, h("b", null, t.name || "(no name)"), h("div", { class: "mono small muted" }, t.id + (t.difficulty && t.difficulty !== "Normal" ? " · " + t.difficulty : ""))),
        h("td", null, D.label("class", t.trainerClass)),
        h("td", null, r.src === "project" ? h("span", { class: "badge lv" }, "Project") : r.src === "repo-custom" ? h("span", { class: "badge tm" }, "Repo, custom") : h("span", { class: "badge" }, "Expansion")),
        h("td", null, where ? ((D.raw.maps[where] || {}).n || where) : h("span", { class: "muted" }, "—")),
        h("td", null, icons),
        h("td", { class: "num" }, lv ? (lv.min === lv.max ? lv.max : lv.min + "–" + lv.max) : "—"),
        h("td", null, sum.error ? h("span", { class: "sev error" }, sum.error + " err") : sum.warn ? h("span", { class: "sev warn" }, sum.warn + " warn") : h("span", { class: "sev ok" }, "OK")),
        h("td", null, action)));
    });
    body.appendChild(h("div", { class: "table-wrap" },
      h("table", { class: "data" },
        h("thead", null, h("tr", null, ["", "Trainer", "Class", "Source", "Battled on", "Party", "Levels", "Checks", ""].map(function (x) { return h("th", null, x); }))),
        tbody),
      h("div", { class: "pager" },
        h("span", { class: "tabular" }, (st.page * PAGE + 1) + "–" + (st.page * PAGE + slice.length) + " of " + list.length),
        h("button", { class: "btn small", disabled: st.page === 0, onclick: function () { st.page--; fill(body); } }, "Previous"),
        h("button", { class: "btn small", disabled: st.page >= pages - 1, onclick: function () { st.page++; fill(body); } }, "Next"))));
  }

  App.views.roster = { render: render };
})(globalThis.TB = globalThis.TB || {});
