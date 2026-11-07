/* Trainer Builder — in-game textbox preview.
 *
 * Wraps text with TB.emit.formatText (poryscript's rules and widths), then
 * draws each line with the game's own font sheet (graphics/fonts/
 * latin_normal.png: 16x16 cells indexed by charmap byte). Each frame shows
 * what is on screen: a new box after \p, a one-line scroll after \l.
 */
(function (TB) {
  "use strict";
  var h = TB.ui.h;
  var sheet = null, sheetReady = false, waiting = [];

  function loadSheet(D) {
    if (sheet) return;
    var src = D.image("font:normal");
    if (!src) return;
    sheet = new Image();
    sheet.onload = function () { sheetReady = true; waiting.splice(0).forEach(function (f) { f(); }); };
    sheet.src = src;
  }

  function frames(fmt) {
    // Visible states: numLines-tall windows; \l scrolls by one, \p clears.
    var n = fmt.numLines, out = [], win = [];
    fmt.lines.forEach(function (l, i) {
      var prev = i ? fmt.lines[i - 1].brk : "\\p";
      if (prev === "\\p") { if (win.length) out.push(win); win = [l]; }
      else if (prev === "\\l") { out.push(win); win = win.slice(-(n - 1)).concat([l]); }
      else win.push(l);
    });
    if (win.length) out.push(win);
    return out;
  }

  function drawLine(ctx, D, text, y, widths, bytes) {
    var x = 0, i = 0;
    while (i < text.length) {
      var ch = text[i];
      if (ch === "{") {
        var end = text.indexOf("}", i);
        if (end > 0) {
          var code = text.slice(i, end + 1), w = widths[code] || 0;
          ctx.fillStyle = "rgba(12,106,123,.22)";
          ctx.fillRect(x, y + 2, Math.max(w, 2), 12);
          x += w; i = end + 1;
          continue;
        }
      }
      var b = bytes[ch], gw = widths[ch] != null ? widths[ch] : 0;
      if (b == null) {
        ctx.fillStyle = "rgba(179,38,30,.85)";
        ctx.fillRect(x, y + 2, 6, 12);
        x += 6;
      } else if (gw > 0 && sheetReady) {
        ctx.drawImage(sheet, (b % 16) * 16, Math.floor(b / 16) * 16, gw, 16, x, y, gw, 16);
        x += gw;
      } else x += gw;
      i++;
    }
  }

  function render(D, text, opts) {
    opts = opts || {};
    loadSheet(D);
    var font = D.raw.font, widths = font.widths, bytes = (D.raw.charmap || {}).bytes || {};
    var fmt = TB.emit.formatText(font, text);
    var fr = frames(fmt);
    var scale = opts.scale || 2;
    var W = font.maxLineLength + 8, H = font.numLines * 16;
    var box = h("div", { class: "gba" });
    var canvases = [];
    fr.forEach(function (lines, k) {
      var c = h("canvas", { width: W, height: H, role: "img", "aria-label": lines.map(function (l) { return l.text; }).join(" ") });
      c.style.width = W * scale + "px";
      c.style.maxWidth = "100%";
      canvases.push([c, lines]);
      var last = lines[lines.length - 1];
      box.appendChild(h("div", { class: "gba-box" }, c));
      box.appendChild(h("div", { class: "pg" },
        h("span", null, "Frame " + (k + 1) + " of " + fr.length),
        h("span", { class: "mono" }, last.brk === "\\l" ? "scrolls (\\l)" : last.brk === "\\p" ? "new box (\\p)" : last.brk === "\\n" ? "" : "end")));
    });
    function paint() {
      canvases.forEach(function (pair) {
        var ctx = pair[0].getContext("2d");
        ctx.imageSmoothingEnabled = false;
        ctx.clearRect(0, 0, W, H);
        pair[1].forEach(function (l, j) { drawLine(ctx, D, l.text, j * 16, widths, bytes); });
      });
    }
    if (sheetReady || !D.image("font:normal")) paint(); else waiting.push(paint);
    var issues = TB.checks.textIssues(D, text);
    if (issues.chars.length || issues.codes.length) {
      box.appendChild(h("div", { class: "small", style: { color: "var(--err)" } },
        issues.chars.length ? "The game can't print: " + issues.chars.join(" ") + ". " : "",
        issues.codes.length ? "Unknown codes: " + issues.codes.map(function (c) { return "{" + c + "}"; }).join(" ") : ""));
    }
    var codes = [];
    String(text || "").replace(/\{[^}]*\}/g, function (c) { if (codes.indexOf(c) < 0) codes.push(c); return c; });
    if (codes.length) box.appendChild(h("div", { class: "small muted" }, "Shaded boxes are filled in by the game: ",
      codes.map(function (c) { return c + " (" + (widths[c] || 0) + " px reserved)"; }).join(", "), "."));
    box.appendChild(h("div", { class: "small muted" }, "Compiles to: ", h("code", null, fmt.text || "(empty)")));
    return box;
  }

  TB.textbox = { render: render, frames: frames };
})(globalThis.TB = globalThis.TB || {});
