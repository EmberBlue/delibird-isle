/* Trainer Builder — application shell: state, persistence, routing, header. */
(function (TB) {
  "use strict";
  var U = TB.ui, h = U.h;
  var KEY = "tb2.project";

  var App = TB.app = {
    D: null, project: null, sel: null, view: "workbench", saveState: "", undoStack: [], redoStack: [],
    views: {}, inspectorTab: "checks", rosterState: { source: "project", q: "", page: 0, stage: "" },
  };

  /* ---- trainers & checks ---- */
  App.trainer = function () {
    var p = App.project;
    return p.trainers.filter(function (t) { return t.uid === App.sel; })[0] || p.trainers[0] || null;
  };
  App.ctxFor = function (t) {
    var dup = {};
    App.project.trainers.forEach(function (x) { var k = TB.project.key(x); dup[k] = (dup[k] || 0) + 1; });
    var ids = TB.emit.newIds(App.D, App.project.trainers);
    var at = ids.indexOf(t.id);
    return { duplicateKeys: dup, newIdSlot: at >= 0 ? App.D.opponents.count + at : null };
  };
  App.checks = function (t) {
    try { return TB.checks.run(App.D, t, App.ctxFor(t)); }
    catch (e) { console.error(e); return [{ sev: "error", code: "E_INTERNAL", msg: "Checks failed: " + e.message, slot: null, key: "x" }]; }
  };

  /* ---- persistence & undo ---- */
  var lastSnap = null;
  var saveNow = function () {
    var json = TB.project.toJSON(App.project);
    var ok = U.store(KEY, json);
    App.saveState = ok ? "Saved in this browser" : "Not saved: browser storage is unavailable. Export the project to keep it.";
    var el = U.$("#save-state");
    if (el) { el.textContent = App.saveState; el.classList.toggle("bad", !ok); }
    if (lastSnap !== null && json !== lastSnap) {
      App.undoStack.push(lastSnap);
      if (App.undoStack.length > 80) App.undoStack.shift();
      App.redoStack = [];
    }
    lastSnap = json;
    updateUndoButtons();
  };
  var saveSoon = U.debounce(saveNow, 450);

  function restore(json) {
    lastSnap = json;
    App.project = TB.project.fromJSON(App.D, json);
    U.store(KEY, json);
    if (!App.trainer() || !App.project.trainers.some(function (t) { return t.uid === App.sel; }))
      App.sel = App.project.trainers[0] ? App.project.trainers[0].uid : null;
    App.render();
  }
  App.undo = function () {
    saveNow();
    if (!App.undoStack.length) return;
    App.redoStack.push(lastSnap);
    restore(App.undoStack.pop());
    U.toast("Undone");
  };
  App.redo = function () {
    if (!App.redoStack.length) return;
    App.undoStack.push(lastSnap);
    restore(App.redoStack.pop());
    U.toast("Redone");
  };
  function updateUndoButtons() {
    U.$$("[data-undo]").forEach(function (b) { b.disabled = !App.undoStack.length && lastSnap === TB.project.toJSON(App.project); });
    U.$$("[data-redo]").forEach(function (b) { b.disabled = !App.redoStack.length; });
  }

  /**
   * Call after any edit. opts.sheet re-renders the editor, opts.card = i
   * re-renders one party card; otherwise only derived panels refresh.
   */
  App.change = function (opts) {
    opts = opts || {};
    saveSoon();
    var v = App.views[App.view];
    if (v && v.refresh) v.refresh(opts);
    renderNavCounts();
  };

  App.select = function (uid) {
    App.sel = uid;
    U.store("tb2.sel", uid);
    if (App.view !== "workbench") { location.hash = "#workbench"; return; }
    App.render();
  };

  App.addTrainer = function (t) {
    App.project.trainers.push(t);
    App.sel = t.uid;
    saveNow();
    if (App.view !== "workbench") location.hash = "#workbench"; else App.render();
  };

  App.replaceProject = function (p, msg) {
    App.project = p;
    App.sel = p.trainers[0] ? p.trainers[0].uid : null;
    saveNow();
    App.render();
    if (msg) U.toast(msg);
  };

  /* ---- header ---- */
  function brandMark() {
    // A wrapped parcel: the island's delivery bird, Delibird, carries one.
    var svg = '<svg width="30" height="30" viewBox="0 0 30 30" aria-hidden="true">' +
      '<rect x="4" y="9" width="22" height="17" rx="2.5" fill="var(--surface)" stroke="var(--ink)" stroke-width="2"/>' +
      '<rect x="3" y="7" width="24" height="5" rx="1.5" fill="var(--surface)" stroke="var(--ink)" stroke-width="2"/>' +
      '<path d="M15 7v19" stroke="var(--brand)" stroke-width="3"/>' +
      '<path d="M15 7c-2-4-7-5-7-1.5S13 7 15 7zM15 7c2-4 7-5 7-1.5S17 7 15 7z" fill="var(--brand)"/></svg>';
    return h("span", { html: svg });
  }

  function renderNavCounts() {
    var c = U.$("#nav-count-workbench");
    if (c) c.textContent = App.project.trainers.length;
  }

  function header() {
    var D = App.D, m = D.meta;
    var head = h("header", { class: "app-header" },
      h("div", { class: "row1" },
        h("div", { class: "brand" }, brandMark(), h("h1", null, "Trainer Builder"), h("span", { class: "proj" }, App.project.name)),
        h("span", { class: "prov", title: "Data extracted from this commit. Re-run extract.py after changing species, moves or trainers." },
          "commit ", h("b", null, (m.commit || "unknown").slice(0, 8)), m.dirty ? " (uncommitted changes)" : "", " · expansion ", h("b", null, m.expansion || "?"), " · ", m.generated),
        h("div", { class: "header-actions" },
          h("span", { id: "save-state", class: "save-state" }, App.saveState),
          h("button", { class: "btn quiet small", "data-undo": "", title: "Undo (Ctrl+Z)", onclick: App.undo }, "Undo"),
          h("button", { class: "btn quiet small", "data-redo": "", title: "Redo (Ctrl+Shift+Z)", onclick: App.redo }, "Redo"))),
      h("nav", { class: "views", "aria-label": "Views" },
        navLink("workbench", "Workbench", h("span", { class: "count", id: "nav-count-workbench" }, App.project.trainers.length)),
        navLink("roster", "Roster", h("span", { class: "count" }, TB.project.reference(D).length)),
        navLink("balance", "Balance"),
        navLink("project", "Project & data")));
    return head;
  }
  function navLink(id, label, extra) {
    return h("a", { href: "#" + id, "aria-current": App.view === id ? "page" : null }, label, extra || null);
  }

  /* ---- routing ---- */
  App.render = function () {
    var root = U.$("#app");
    U.clear(root);
    root.appendChild(header());
    var main = h("main", { id: "view" });
    root.appendChild(main);
    var v = App.views[App.view] || App.views.workbench;
    v.render(main);
    updateUndoButtons();
  };
  function route() {
    var v = (location.hash || "#workbench").slice(1);
    App.view = App.views[v] ? v : "workbench";
    App.render();
    window.scrollTo(0, 0);
  }

  App.boot = function () {
    App.D = new TB.Data(globalThis.TBDATA);
    var saved = U.store(KEY);
    var p = null;
    if (saved) {
      try { p = TB.project.fromJSON(App.D, saved); } catch (e) { p = null; }
    }
    if (!p) {
      // v1 kept a saved list under tb_saved_v1; bring it across once.
      var v1 = U.store("tb_saved_v1");
      p = TB.project.seed(App.D);
      if (v1) {
        try {
          var old = TB.project.fromJSON(App.D, JSON.stringify({ trainers: JSON.parse(v1) }));
          p.trainers = p.trainers.concat(old.trainers);
        } catch (e) { /* ignore */ }
      }
    }
    App.project = p;
    var sel = U.store("tb2.sel");
    App.sel = sel && p.trainers.some(function (t) { return t.uid === sel; }) ? sel : (p.trainers[0] ? p.trainers[0].uid : null);
    lastSnap = TB.project.toJSON(App.project);
    App.saveState = U.store(KEY, lastSnap) ? "Saved in this browser" : "Not saved: browser storage is unavailable. Export the project to keep it.";
    window.addEventListener("hashchange", route);
    document.addEventListener("keydown", function (e) {
      var mod = e.ctrlKey || e.metaKey;
      if (!mod || e.key.toLowerCase() !== "z") return;
      var tag = (document.activeElement || {}).tagName;
      if (tag === "TEXTAREA" || (tag === "INPUT" && document.activeElement.type === "text")) return;
      e.preventDefault();
      if (e.shiftKey) App.redo(); else App.undo();
    });
    route();
  };
})(globalThis.TB = globalThis.TB || {});
