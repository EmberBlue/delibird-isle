/* Trainer Builder — .party serializer.
 *
 * Pure, DOM-free, and shared between the browser app and the Node self-test.
 * Turns a plain trainer object into a Pokemon-Showdown-syntax block that
 * tools/trainerproc accepts. Everything is emitted in CONSTANT form
 * (SPECIES_POOCHYENA, MOVE_TACKLE, TRAINER_CLASS_HIKER, ...) so trainerproc's
 * is_constant() passes it through verbatim and the C compiler validates it.
 *
 * Trainer object shape (all fields optional unless noted):
 *   {
 *     id:            "TRAINER_SKALD_FOO"      // required
 *     name:          "NELLA"                  // required, shown in battle
 *     trainerClass:  "TRAINER_CLASS_FISHERMAN"
 *     pic:           "TRAINER_PIC_FISHERMAN"
 *     gender:        "Male" | "Female" | ""
 *     music:         "TRAINER_ENCOUNTER_MUSIC_MALE"
 *     doubleBattle:  false
 *     ai:            ["AI_FLAG_BASIC_TRAINER", ...]
 *     items:         ["ITEM_POTION", ...]     // in-battle bag, up to 4
 *     backstory:     "free text…"
 *     party: [ {
 *        species:  "SPECIES_POOCHYENA"   // required
 *        gender:   "M" | "F" | ""
 *        item:     "ITEM_ORAN_BERRY" | ""
 *        ball:     "ITEM_GREAT_BALL" | ""    // Poke Ball the mon is sent out in
 *        level:    9
 *        ability:  "ABILITY_RUN_AWAY" | ""
 *        ivs:      {hp,atk,def,spa,spd,spe} | null   // 0-31 each
 *        moves:    ["MOVE_TACKLE", ...]    // up to 4
 *     } ]
 *   }
 */
(function (root) {
  "use strict";

  function commentBlock(text) {
    if (!text || !text.trim()) return "";
    // /* */ comments are the only kind trainers.party supports; neutralise any
    // accidental close-comment in the user's prose.
    var safe = text.replace(/\*\//g, "* /").replace(/\r\n/g, "\n").trimEnd();
    var lines = safe.split("\n").map(function (l) { return " * " + l; });
    return "/*\n" + lines.join("\n") + "\n */\n";
  }

  function ivLine(ivs) {
    if (!ivs) return null;
    var order = [["hp", "HP"], ["atk", "Atk"], ["def", "Def"],
                 ["spa", "SpA"], ["spd", "SpD"], ["spe", "Spe"]];
    var parts = order.map(function (o) {
      var v = ivs[o[0]];
      return (v === undefined || v === null || v === "" ? 31 : v) + " " + o[1];
    });
    return "IVs: " + parts.join(" / ");
  }

  function monBlock(mon) {
    var lines = [];
    var head = mon.species || "SPECIES_NONE";
    if (mon.gender === "M" || mon.gender === "F") head += " (" + mon.gender + ")";
    if (mon.item) head += " @ " + mon.item;
    lines.push(head);
    lines.push("Level: " + (mon.level != null && mon.level !== "" ? mon.level : 5));
    if (mon.ability) lines.push("Ability: " + mon.ability);
    if (mon.ball) lines.push("Ball: " + mon.ball);
    var iv = ivLine(mon.ivs);
    if (iv) lines.push(iv);
    var moves = (mon.moves || []).filter(function (m) { return m; });
    moves.forEach(function (m) { lines.push("- " + m); });
    return lines.join("\n");
  }

  function trainerToParty(t) {
    var out = "";
    out += commentBlock(t.backstory);
    out += "=== " + (t.id || "TRAINER_UNNAMED") + " ===\n";
    out += "Name: " + (t.name || "") + "\n";
    if (t.trainerClass) out += "Class: " + t.trainerClass + "\n";
    if (t.pic) out += "Pic: " + t.pic + "\n";
    if (t.gender) out += "Gender: " + t.gender + "\n";
    if (t.music) out += "Music: " + t.music + "\n";
    out += "Double Battle: " + (t.doubleBattle ? "Yes" : "No") + "\n";
    var ai = (t.ai || []).filter(function (a) { return a; });
    if (ai.length) out += "AI: " + ai.join(" / ") + "\n";
    var items = (t.items || []).filter(function (i) { return i; });
    if (items.length) out += "Items: " + items.join(" / ") + "\n";

    var party = (t.party || []).filter(function (m) { return m && m.species; });
    party.forEach(function (mon) {
      out += "\n" + monBlock(mon) + "\n";
    });
    return out;
  }

  var api = { trainerToParty: trainerToParty };
  if (typeof module !== "undefined" && module.exports) module.exports = api;
  root.TBSerializer = api;
})(typeof globalThis !== "undefined" ? globalThis : this);
