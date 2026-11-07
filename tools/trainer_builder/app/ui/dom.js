/* Trainer Builder — DOM helpers and shared widgets. */
(function (TB) {
  "use strict";

  function h(tag, attrs) {
    var el = document.createElement(tag);
    if (attrs) {
      Object.keys(attrs).forEach(function (k) {
        var v = attrs[k];
        if (v == null || v === false) return;
        if (k === "class") el.className = v;
        else if (k === "text") el.textContent = v;
        else if (k === "html") el.innerHTML = v;
        else if (k.slice(0, 2) === "on" && typeof v === "function") el.addEventListener(k.slice(2), v);
        else if (k === "style" && typeof v === "object") Object.assign(el.style, v);
        else if (k === "value") el.value = v;
        else if (k === "checked") el.checked = !!v;
        else el.setAttribute(k, v === true ? "" : v);
      });
    }
    for (var i = 2; i < arguments.length; i++) append(el, arguments[i]);
    return el;
  }
  function append(el, c) {
    if (c == null || c === false) return;
    if (Array.isArray(c)) { c.forEach(function (x) { append(el, x); }); return; }
    el.appendChild(c.nodeType ? c : document.createTextNode(String(c)));
  }
  function clear(el) { while (el.firstChild) el.removeChild(el.firstChild); return el; }
  function $(sel, root) { return (root || document).querySelector(sel); }
  function $$(sel, root) { return Array.prototype.slice.call((root || document).querySelectorAll(sel)); }

  var toastTimer;
  function toast(msg) {
    var t = $("#toast");
    t.textContent = msg;
    t.classList.add("show");
    clearTimeout(toastTimer);
    toastTimer = setTimeout(function () { t.classList.remove("show"); }, 1800);
  }

  function copy(text, okMsg) {
    function fallback() {
      var ta = h("textarea", { style: { position: "fixed", left: "-9999px" } });
      ta.value = text;
      document.body.appendChild(ta);
      ta.select();
      var ok = false;
      try { ok = document.execCommand("copy"); } catch (e) { ok = false; }
      document.body.removeChild(ta);
      toast(ok ? okMsg || "Copied" : "Copy blocked here: select the text and copy it yourself");
    }
    try {
      if (navigator.clipboard && navigator.clipboard.writeText) {
        navigator.clipboard.writeText(text).then(function () { toast(okMsg || "Copied"); }, fallback);
        return;
      }
    } catch (e) { /* fall through */ }
    fallback();
  }

  function download(text, name, type) {
    try {
      var blob = new Blob([text], { type: type || "text/plain" });
      var url = URL.createObjectURL(blob);
      var a = h("a", { href: url, download: name });
      document.body.appendChild(a);
      a.click();
      document.body.removeChild(a);
      setTimeout(function () { URL.revokeObjectURL(url); }, 1500);
      toast("Downloading " + name);
    } catch (e) {
      toast("Downloads are blocked here: use Copy instead");
    }
  }

  function debounce(fn, ms) {
    var t;
    return function () {
      var args = arguments, self = this;
      clearTimeout(t);
      t = setTimeout(function () { fn.apply(self, args); }, ms);
    };
  }

  function store(key, value) {
    try {
      if (value === undefined) return localStorage.getItem(key);
      localStorage.setItem(key, value);
      return true;
    } catch (e) { return value === undefined ? null : false; }
  }

  /* ---- type chips & sprites ---------------------------------------------- */
  var TYPE_COLORS = {
    TYPE_NORMAL: "#A8A77A", TYPE_FIRE: "#EE8130", TYPE_WATER: "#6390F0", TYPE_ELECTRIC: "#F7D02C", TYPE_GRASS: "#7AC74C",
    TYPE_ICE: "#96D9D6", TYPE_FIGHTING: "#C22E28", TYPE_POISON: "#A33EA1", TYPE_GROUND: "#E2BF65", TYPE_FLYING: "#A98FF3",
    TYPE_PSYCHIC: "#F95587", TYPE_BUG: "#A6B91A", TYPE_ROCK: "#B6A136", TYPE_GHOST: "#735797", TYPE_DRAGON: "#6F35FC",
    TYPE_DARK: "#705746", TYPE_STEEL: "#B7B7CE", TYPE_FAIRY: "#D685AD", TYPE_STELLAR: "#40B5A5",
  };
  var LIGHT_TYPES = { TYPE_ELECTRIC: 1, TYPE_ICE: 1, TYPE_GROUND: 1, TYPE_STEEL: 1, TYPE_NORMAL: 1, TYPE_BUG: 1, TYPE_GRASS: 1, TYPE_ROCK: 1 };

  function typeChip(D, typeIdxOrConst) {
    var t = typeof typeIdxOrConst === "number" ? D.tyIdx[typeIdxOrConst] : D.ty[typeIdxOrConst];
    if (!t) return null;
    return h("span", { class: "type" + (LIGHT_TYPES[t.c] ? " light" : ""), style: { background: TYPE_COLORS[t.c] || "#8A8F98" } }, t.n);
  }
  function typeColor(c) { return TYPE_COLORS[c] || "#8A8F98"; }

  var PLACEHOLDER = "data:image/svg+xml;utf8," + encodeURIComponent(
    '<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 32 32"><circle cx="16" cy="17" r="9" fill="none" stroke="#9AA8B5" stroke-width="2"/><path d="M7 17h18" stroke="#9AA8B5" stroke-width="2"/><circle cx="16" cy="17" r="3" fill="#9AA8B5"/></svg>');

  function monIcon(D, spc, cls) {
    var s = D.sp[D.canon(spc)];
    var src = s && D.image(s.icon);
    return h("img", { class: "pixel " + (cls || ""), src: src || PLACEHOLDER, alt: s ? s.n : "", width: 32, height: 32, loading: "lazy" });
  }
  function picImg(D, picC, cls) {
    var p = D.pic[D.canon(picC)];
    var src = p && D.image(p.img);
    return h("img", { class: "pixel " + (cls || ""), src: src || PLACEHOLDER, alt: p ? p.n + " sprite" : "No sprite", width: 64, height: 64, loading: "lazy" });
  }

  /* ---- combobox -------------------------------------------------------- */
  var openCombo = null;
  document.addEventListener("mousedown", function (e) {
    if (openCombo && !openCombo.wrap.contains(e.target)) openCombo.close(true);
  });
  var comboSeq = 0;

  /**
   * combo({ value, label(c), options(query) -> [{c, n, badge, bclass, group, icon}],
   *         placeholder, onChange(c), id, groups:{key:title} })
   */
  function combo(o) {
    var id = o.id || "cb" + (++comboSeq);
    var input = h("input", { type: "text", id: id, class: o.mono ? "mono" : null, placeholder: o.placeholder || "Search…", autocomplete: "off",
      spellcheck: "false", role: "combobox", "aria-expanded": "false", "aria-controls": id + "-pop", "aria-autocomplete": "list" });
    var pop = h("div", { class: "pop", id: id + "-pop", role: "listbox", hidden: true });
    var wrap = h("div", { class: "combo" }, input, pop);
    var value = o.value || "", rendered = [], active = -1, LIMIT = 250;

    function setLabel() { input.value = value ? o.label(value) : ""; }
    setLabel();

    function render(q) {
      q = (q || "").trim().toLowerCase();
      var all = o.options(q), out = [];
      for (var i = 0; i < all.length; i++) {
        var x = all[i];
        if (!q || x.n.toLowerCase().indexOf(q) >= 0 || x.c.toLowerCase().indexOf(q) >= 0) out.push(x);
      }
      if (q) out.sort(function (a, b) {
        var ga = (a.groupRank || 0) - (b.groupRank || 0);
        if (ga) return ga;
        var sa = a.n.toLowerCase().indexOf(q) === 0 ? 0 : 1, sb = b.n.toLowerCase().indexOf(q) === 0 ? 0 : 1;
        return sa - sb;
      });
      rendered = out.slice(0, LIMIT);
      active = rendered.length ? 0 : -1;
      clear(pop);
      var lastG = null;
      if (o.allowClear && value) {
        pop.appendChild(h("div", { class: "opt", role: "option", "data-i": "-1" }, h("span", { class: "nm muted" }, "None")));
      }
      rendered.forEach(function (x, i) {
        if (x.group && x.group !== lastG) { pop.appendChild(h("div", { class: "grp" }, (o.groups && o.groups[x.group]) || x.group)); lastG = x.group; }
        pop.appendChild(h("div", { class: "opt" + (i === active ? " active" : ""), role: "option", id: id + "-o" + i, "data-i": String(i) },
          x.icon ? h("img", { class: "pixel", src: x.icon, alt: "" }) : null,
          h("span", { class: "nm" }, x.n),
          x.badge ? h("span", { class: "badge " + (x.bclass || "") }, x.badge) : null,
          x.chip || null,
          o.showConst === false ? null : h("span", { class: "cst" }, x.c)));
      });
      if (!rendered.length) pop.appendChild(h("div", { class: "more" }, "No match"));
      else if (out.length > LIMIT) pop.appendChild(h("div", { class: "more" }, (out.length - LIMIT) + " more. Keep typing to narrow the list."));
    }
    function open() {
      if (openCombo && openCombo !== api) openCombo.close(true);
      render(input.value === (value ? o.label(value) : "") ? "" : input.value);
      pop.hidden = false;
      input.setAttribute("aria-expanded", "true");
      openCombo = api;
    }
    function close(restore) {
      pop.hidden = true;
      input.setAttribute("aria-expanded", "false");
      if (restore) setLabel();
      if (openCombo === api) openCombo = null;
    }
    function pick(x) {
      value = x ? x.c : "";
      setLabel();
      close(false);
      if (o.onChange) o.onChange(value);
    }
    function highlight() {
      $$(".opt", pop).forEach(function (el) { el.classList.toggle("active", +el.dataset.i === active); });
      var el = document.getElementById(id + "-o" + active);
      if (el) { el.scrollIntoView({ block: "nearest" }); input.setAttribute("aria-activedescendant", el.id); }
    }
    input.addEventListener("focus", function () { input.select(); open(); });
    input.addEventListener("input", function () { render(input.value); pop.hidden = false; input.setAttribute("aria-expanded", "true"); openCombo = api; });
    input.addEventListener("keydown", function (e) {
      if (e.key === "ArrowDown" || e.key === "ArrowUp") {
        e.preventDefault();
        if (pop.hidden) { open(); return; }
        if (!rendered.length) return;
        active = (active + (e.key === "ArrowDown" ? 1 : -1) + rendered.length) % rendered.length;
        highlight();
      } else if (e.key === "Enter") {
        if (!pop.hidden && rendered[active]) { e.preventDefault(); pick(rendered[active]); }
      } else if (e.key === "Escape") { close(true); }
      else if (e.key === "Tab") { if (!pop.hidden) close(true); }
    });
    input.addEventListener("blur", function () {
      setTimeout(function () {
        if (document.activeElement === input) return;
        if (!input.value.trim() && value && o.allowClear !== false) { pick(null); return; }
        close(true);
      }, 150);
    });
    pop.addEventListener("mousedown", function (e) {
      e.preventDefault();
      var el = e.target.closest(".opt");
      if (!el) return;
      var i = +el.dataset.i;
      if (i === -1) pick(null);
      else if (rendered[i]) pick(rendered[i]);
    });
    var api = {
      el: wrap, input: input, wrap: wrap, close: close,
      get value() { return value; },
      set: function (c) { value = c || ""; setLabel(); },
    };
    return api;
  }

  function field(label, control, opts) {
    opts = opts || {};
    var f = h("div", { class: "field" + (opts.cls ? " " + opts.cls : ""), "data-field": opts.field || null, "data-slot": opts.slot != null ? String(opts.slot) : null },
      label ? h("label", { for: opts.for || (control && control.id) || null }, label) : null,
      control && control.el ? control.el : control,
      opts.help ? h("div", { class: "help" }, opts.help) : null);
    return f;
  }

  function select(id, options, value, onChange) {
    var s = h("select", { id: id });
    options.forEach(function (o) {
      s.appendChild(h("option", { value: o.c }, o.n));
    });
    s.value = value == null ? "" : value;
    s.addEventListener("change", function () { onChange(s.value); });
    return s;
  }

  TB.ui = {
    h: h, clear: clear, $: $, $$: $$, toast: toast, copy: copy, download: download, debounce: debounce, store: store,
    typeChip: typeChip, typeColor: typeColor, monIcon: monIcon, picImg: picImg, combo: combo, field: field, select: select,
    PLACEHOLDER: PLACEHOLDER,
  };
})(globalThis.TB = globalThis.TB || {});
