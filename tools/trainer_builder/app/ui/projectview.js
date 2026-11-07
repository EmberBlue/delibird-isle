/* Trainer Builder — Project & data view: import/export, apply bundle,
   settings, data provenance and method notes. */
(function (TB) {
  "use strict";
  var U = TB.ui, h = U.h, App = TB.app;

  function panel(title, sub, body) {
    return h("section", { class: "panel" }, h("div", { class: "ph" }, h("div", null, h("h3", null, title), sub ? h("div", { class: "small muted" }, sub) : null)),
      h("div", { class: "pb" }, body));
  }
  function readFile(input, cb) {
    var f = input.files && input.files[0];
    if (!f) return;
    var r = new FileReader();
    r.onload = function () { cb(String(r.result), f.name); input.value = ""; };
    r.readAsText(f);
  }

  function render(main) {
    var D = App.D, p = App.project;
    var cols = h("div", { class: "cols", style: { gridTemplateColumns: "repeat(auto-fit, minmax(min(100%, 460px), 1fr))" } });
    main.appendChild(cols);

    /* ---- add to the game ---- */
    var bundle = function () { return JSON.stringify(TB.emit.bundle(D, p.trainers), null, 1); };
    var opp = TB.emit.opponents(D, p.trainers);
    var errs = 0;
    p.trainers.forEach(function (t) { errs += TB.checks.summary(App.checks(t)).error; });
    cols.appendChild(panel("Add these trainers to the game", p.trainers.length + " trainers · " + opp.ids.length + " new IDs · " + errs + " errors", [
      errs ? h("div", { class: "detail", style: { color: "var(--err)" } }, "Fix the " + errs + " errors first; apply.py runs trainerproc and refuses a file that doesn't compile.") : null,
      h("ol", { class: "steps" },
        h("li", null, "Copy the bundle and save it in the repo root as ", h("code", null, "bundle.json"), "."),
        h("li", null, "Preview: ", h("code", null, "python3 tools/trainer_builder/apply.py bundle.json")),
        h("li", null, "Write: ", h("code", null, "python3 tools/trainer_builder/apply.py bundle.json --write")),
        h("li", null, "It replaces or appends each block in src/data/trainers.party, adds #defines and TRAINERS_COUNT to opponents.h, writes each battle script to tools/trainer_builder/out/, and checks the result with trainerproc.")),
      h("div", { class: "btn-row" },
        h("button", { class: "btn primary", onclick: function () { U.copy(bundle(), "Bundle copied"); } }, "Copy apply bundle"),
        h("button", { class: "btn", onclick: function () { U.download(bundle(), "bundle.json", "application/json"); } }, "Download bundle.json")),
      h("div", { class: "sep" }),
      h("div", { class: "label" }, "Or copy pieces by hand"),
      h("div", { class: "btn-row" },
        h("button", { class: "btn small", onclick: function () { U.copy(TB.project.exportParty(p), "All blocks copied"); } }, "Copy every trainers.party block"),
        h("button", { class: "btn small", onclick: function () { U.download(TB.project.exportParty(p), "project.party"); } }, "Download .party"),
        h("button", { class: "btn small", onclick: function () { U.copy(opp.text, "opponents.h lines copied"); } }, "Copy opponents.h lines")),
    ]));

    /* ---- import ---- */
    var ta = h("textarea", { id: "imp-text", rows: 6, placeholder: "Paste trainers.party blocks (=== TRAINER_X === …)" });
    var result = h("div", { class: "small" });
    var mode = U.select("imp-mode", [{ c: "replace", n: "Replace trainers with the same ID" }, { c: "skip", n: "Keep mine, skip duplicates" }], "replace", function () {});
    function doImport(text) {
      var r = TB.project.importParty(D, p, text, mode.value);
      App.change();
      U.clear(result);
      result.appendChild(h("div", { class: "detail" },
        "Found " + r.found + " trainers: " + r.added + " added, " + r.replaced + " replaced, " + r.skipped + " skipped.",
        r.errors.length ? h("ul", null, r.errors.slice(0, 8).map(function (e) { return h("li", null, "Line " + e.line + ": " + e.msg); })) : null));
      App.render();
      U.toast("Imported " + (r.added + r.replaced) + " trainers");
    }
    var file = h("input", { type: "file", accept: ".party,.txt", id: "imp-file", style: { maxWidth: "100%" } });
    file.addEventListener("change", function () { readFile(file, doImport); });
    cols.appendChild(panel("Import trainers.party", "Comments with @stage, @role, @map and dialogue lines come back as design notes.", [
      U.field("Paste", ta), U.field("When an ID already exists", mode),
      h("div", { class: "btn-row" }, h("button", { class: "btn primary", onclick: function () { if (ta.value.trim()) doImport(ta.value); } }, "Import pasted text"),
        h("label", { class: "btn" }, "Choose a file", file)),
      result,
    ]));

    /* ---- project file ---- */
    var pj = h("input", { type: "file", accept: ".json", id: "proj-file" });
    var reset = h("button", { class: "btn danger", onclick: function () {
      if (!reset.classList.contains("armed")) { reset.classList.add("armed"); reset.textContent = "Reset: click again to confirm"; setTimeout(function () { reset.classList.remove("armed"); reset.textContent = "Reset to the repo's trainers"; }, 3000); return; }
      App.replaceProject(TB.project.seed(D), "Project reset");
    } }, "Reset to the repo's trainers");
    var nameIn = h("input", { type: "text", id: "proj-name", value: p.name });
    nameIn.addEventListener("input", function () { p.name = nameIn.value; App.change(); });
    pj.addEventListener("change", function () {
      readFile(pj, function (text) {
        try { App.replaceProject(TB.project.fromJSON(D, text), "Project loaded"); }
        catch (e) { U.toast(e.message || "That file couldn't be read as a project"); }
      });
    });
    var pasteJ = h("textarea", { id: "proj-paste", rows: 3, placeholder: "Or paste a project's JSON here" });
    cols.appendChild(panel("Project file", "The project lives in this browser. Export it to keep a copy or move it to another device.", [
      U.field("Project name", nameIn),
      h("div", { class: "btn-row" },
        h("button", { class: "btn primary", onclick: function () { U.copy(TB.project.toJSON(p), "Project JSON copied"); } }, "Copy project JSON"),
        h("button", { class: "btn", onclick: function () { U.download(TB.project.toJSON(p), (p.name || "trainers").replace(/\W+/g, "_") + ".tbproj.json", "application/json"); } }, "Download"),
        h("label", { class: "btn" }, "Load a project file", pj)),
      pasteJ,
      h("div", { class: "btn-row" },
        h("button", { class: "btn small", onclick: function () {
          try { App.replaceProject(TB.project.fromJSON(D, pasteJ.value), "Project loaded"); }
          catch (e) { U.toast(e.message || "That text isn't a project"); }
        } }, "Load pasted JSON"), reset),
    ]));

    /* ---- provenance ---- */
    var m = D.meta;
    cols.appendChild(panel("Where the data comes from", "Everything below was read from this repo by tools/trainer_builder/extract.py.", [
      h("dl", { class: "facts" },
        h("dt", null, "Commit"), h("dd", null, (m.commit || "unknown") + (m.dirty ? " (with uncommitted changes)" : "") + (m.branch ? " on " + m.branch : "")),
        h("dt", null, "Expansion"), h("dd", null, m.expansion || "unknown"),
        h("dt", null, "Extracted"), h("dd", null, m.generated),
        h("dt", null, "Read through"), h("dd", null, m.cpp + " over " + m.sources.join(", ")),
        h("dt", null, "Stand-in headers"), h("dd", null, m.stubbedHeaders.length ? m.stubbedHeaders.join(", ") + " (generated at build time; none affect this data)" : "none"),
        h("dt", null, "Stock trainers"), h("dd", null, Object.keys(D.baseline).length + " from " + ((D.raw.baseline || {}).subject || "baseline") + " (" + ((D.raw.baseline || {}).ref || "?") + ")"),
        h("dt", null, "Counts"), h("dd", null, Object.keys(m.counts).map(function (k) { return k + " " + m.counts[k]; }).join(" · "))),
      h("p", { class: "small muted" }, "After you change species, moves, learnsets or trainers in the repo, rebuild: ", h("code", null, "python3 tools/trainer_builder/build.py"), "."),
    ]));

    /* ---- method ---- */
    cols.appendChild(panel("How the checks and numbers work", null, [h("div", { class: "prose small" },
      h("p", null, h("b", null, "File format. "), "The importer and exporter follow tools/trainerproc. The test suite re-exports all " + TB.project.reference(D).length +
        " trainers in trainers.party and confirms trainerproc turns the original and the re-export into identical C."),
      h("p", null, h("b", null, "Engine defaults. "), "A blank Level is 100, IVs 31, EVs 0, nature Hardy, friendship 0 and ability slot 1. The ball comes from the trainer class. Blank moves become the last four level-up moves at that level, as in GiveBoxMonInitialMoveset."),
      h("p", null, h("b", null, "Abilities. "), "If a trainer's Pokémon is given an ability its species can't have, the engine quietly uses the species' first ability. That is an error here, not a choice."),
      h("p", null, h("b", null, "Legality. "), "Evolution levels, level-up moves, TMs, tutor moves and egg moves come from this repo's learnsets. Moves learned before evolving count."),
      h("p", null, h("b", null, "Dialogue. "), "Line breaks follow poryscript's format() with tools/poryscript/font_config.json. The test suite checks 4,000 lines of the game's own dialogue against the poryscript binary. The preview draws them with the game font."),
      h("p", null, h("b", null, "Damage. "), "The engine's formula, rounding and 16 damage rolls. The tests reproduce Bulbapedia's worked stat and damage examples exactly.")) ]));
  }

  App.views.project = { render: render };
})(globalThis.TB = globalThis.TB || {});
