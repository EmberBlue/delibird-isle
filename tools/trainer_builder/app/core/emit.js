/* Trainer Builder — project outputs.
 *
 *  formatText()    emulates poryscript's format() line wrapping with the
 *                  project's tools/poryscript/font_config.json, so the
 *                  dialogue preview breaks lines where the compiler will.
 *                  (Checked against the real poryscript binary in tests.)
 *  poryscript()    the battle script + text blocks for a trainer
 *  opponents()     #define lines for new IDs and the new TRAINERS_COUNT
 *  bundle()        the JSON hand-off that apply.py writes into the repo
 */
(function (TB) {
  "use strict";

  /* ---- poryscript format() ---------------------------------------------- */
  // Split into words and explicit breaks. A word is a run of non-space
  // characters; \n \l \p are their own tokens.
  function tokenize(text) {
    var out = [], i = 0, cur = "";
    function flush() { if (cur) { out.push({ w: cur }); cur = ""; } }
    while (i < text.length) {
      var c = text[i];
      if (c === "\\" && /[nlp]/.test(text[i + 1] || "")) {
        flush();
        out.push({ br: "\\" + text[i + 1] });
        i += 2;
        continue;
      }
      if (c === "\n") { flush(); out.push({ br: "\\n" }); i++; continue; }
      if (c === " ") { flush(); i++; continue; }
      if (c === "{") {
        var end = text.indexOf("}", i);
        if (end > 0) { cur += text.slice(i, end + 1); i = end + 1; continue; }
      }
      cur += c;
      i++;
    }
    flush();
    return out;
  }

  function wordWidth(widths, word) {
    var w = 0, i = 0;
    while (i < word.length) {
      if (word[i] === "{") {
        var end = word.indexOf("}", i);
        if (end > 0) {
          var code = word.slice(i, end + 1);
          w += widths[code] != null ? widths[code] : 0;
          i = end + 1;
          continue;
        }
      }
      var ch = word[i];
      w += widths[ch] != null ? widths[ch] : 0;
      i++;
    }
    return w;
  }

  /**
   * Returns { text, lines: [{text, width, brk}], pages, maxWidth, overflow }.
   * text uses \n / \l / \p exactly as poryscript would emit them.
   */
  function formatText(font, text) {
    var widths = font.widths, maxW = font.maxLineLength, numLines = font.numLines || 2;
    var space = widths[" "] != null ? widths[" "] : 3;
    var toks = tokenize(String(text || ""));
    var lines = [], cur = [], curW = 0, lineInPara = 0;
    function breakFor() { return lineInPara < numLines - 1 ? "\\n" : "\\l"; }
    function push(brk) {
      lines.push({ text: cur.join(" "), width: curW, brk: brk });
      cur = []; curW = 0;
    }
    toks.forEach(function (t) {
      if (t.br) {
        push(t.br);
        if (t.br === "\\p") lineInPara = 0; else lineInPara++;
        return;
      }
      var ww = wordWidth(widths, t.w);
      var next = curW + ww + (cur.length ? space : 0);
      if (next > maxW && cur.length) {
        push(breakFor());
        lineInPara++;
        cur = [t.w]; curW = ww;
      } else {
        cur.push(t.w); curW = next;
      }
    });
    if (cur.length || !lines.length) push("");
    // Pages: a page holds numLines lines; \p always starts a new page.
    var pages = [[]];
    lines.forEach(function (l, i) {
      var page = pages[pages.length - 1];
      page.push(l);
      if (l.brk === "\\p" && i < lines.length - 1) pages.push([]);
    });
    var outText = lines.map(function (l) { return l.text + l.brk; }).join("");
    return {
      text: outText, lines: lines, pages: pages, maxWidth: maxW, numLines: numLines,
      overflow: lines.filter(function (l) { return l.width > maxW; }).length,
    };
  }

  /* ---- names ------------------------------------------------------------ */
  function pascal(id) {
    return String(id || "TRAINER_UNNAMED").replace(/^TRAINER_/, "").toLowerCase().split("_")
      .map(function (w) { return w.charAt(0).toUpperCase() + w.slice(1); }).join("");
  }

  function quote(s) { return '"' + String(s || "").replace(/\\(?![nlp])/g, "\\\\").replace(/"/g, '\\"') + '"'; }

  /* ---- poryscript battle script ------------------------------------------ */
  function poryscript(D, t) {
    var d = t.dialogue || {};
    var base = pascal(t.id) + (t.difficulty && t.difficulty !== "Normal" ? t.difficulty : "");
    var doubles = t.battleType === "Doubles";
    var lines = [];
    lines.push("script " + base + "_TrainerBattle {");
    if (doubles)
      lines.push("    trainerbattle_double(" + t.id + ", " + base + "_Intro, " + base + "_Defeat, " + base + "_NotEnough)");
    else
      lines.push("    trainerbattle_single(" + t.id + ", " + base + "_Intro, " + base + "_Defeat)");
    lines.push("    msgbox(" + base + "_After, MSGBOX_AUTOCLOSE)");
    lines.push("    end");
    lines.push("}");
    function block(name, txt, fallback) {
      lines.push("");
      lines.push("text " + base + "_" + name + " {");
      lines.push("    format(" + quote(txt || fallback) + ")");
      lines.push("}");
    }
    var nm = t.name || "Trainer";
    block("Intro", d.intro, nm + " wants to battle!");
    block("Defeat", d.defeat, "You won!");
    block("After", d.after, "That was a good battle.");
    if (doubles) block("NotEnough", d.notEnough, "You need two Pokémon for a double battle.");
    return lines.join("\n") + "\n";
  }

  /* ---- opponents.h ------------------------------------------------------- */
  // New IDs (not in opponents.h) get consecutive numbers from TRAINERS_COUNT.
  function newIds(D, trainers) {
    var seen = {}, out = [];
    trainers.forEach(function (t) {
      if (!t.id || seen[t.id] || t.id in D.opponents.ids) return;
      seen[t.id] = 1;
      out.push(t.id);
    });
    return out;
  }

  function opponents(D, trainers) {
    var ids = newIds(D, trainers);
    var start = D.opponents.count;
    var width = Math.max(36, 8 + Math.max.apply(null, ids.map(function (x) { return x.length; }).concat([0])));
    var defs = ids.map(function (id, i) {
      var line = "#define " + id;
      while (line.length < width) line += " ";
      return line + (start + i);
    });
    var count = start + ids.length;
    return {
      ids: ids, defs: defs, count: count, max: D.opponents.max, overCap: count > D.opponents.max,
      text: defs.length
        ? defs.join("\n") + "\n\n// then change:\n#define TRAINERS_COUNT                      " + count + "\n"
        : "// Every ID in this project already exists in include/constants/opponents.h.\n",
    };
  }

  /* ---- apply.py bundle --------------------------------------------------- */
  function bundle(D, trainers) {
    return {
      kind: "trainer-builder-bundle", version: 1,
      generatedFrom: { commit: D.meta.commit, expansion: D.meta.expansion },
      created: new Date().toISOString(),
      trainers: trainers.map(function (t) {
        return {
          id: t.id, difficulty: t.difficulty || "Normal",
          party: TB.party.serializeTrainer(t),
          poryscript: poryscript(D, t),
          map: (t.meta && t.meta.map) || null,
        };
      }),
    };
  }

  TB.emit = { formatText: formatText, poryscript: poryscript, opponents: opponents, newIds: newIds, bundle: bundle, pascal: pascal, wordWidth: wordWidth };
})(typeof globalThis !== "undefined" ? (globalThis.TB = globalThis.TB || {}) : (this.TB = this.TB || {}));
