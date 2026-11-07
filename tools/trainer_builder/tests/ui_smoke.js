// Browser smoke test: loads dist/trainer_builder.html in Chromium, walks every
// view, edits a trainer, and fails on any console error or page exception.
//   node tools/trainer_builder/tests/ui_smoke.js [--shots DIR]
"use strict";
const path = require("path");
const fs = require("fs");
const { chromium } = require("playwright");

const ROOT = path.resolve(__dirname, "../../..");
const PAGE = "file://" + path.join(ROOT, "tools/trainer_builder/dist/trainer_builder.html");
const shotsDir = process.argv.includes("--shots") ? process.argv[process.argv.indexOf("--shots") + 1] : null;

(async () => {
  const browser = await chromium.launch();
  const problems = [];
  async function session(viewport, scheme, label) {
    const ctx = await browser.newContext({ viewport, colorScheme: scheme, deviceScaleFactor: 1 });
    const page = await ctx.newPage();
    page.on("console", (m) => { if (m.type() === "error" && !/fonts\.(googleapis|gstatic)/.test(m.text())) problems.push(label + " console: " + m.text()); });
    page.on("pageerror", (e) => problems.push(label + " exception: " + e.message));
    page.on("requestfailed", () => {});
    await page.goto(PAGE);
    await page.waitForSelector(".workbench, .empty", { timeout: 20000 });
    const shot = async (name) => { if (shotsDir) await page.screenshot({ path: path.join(shotsDir, `${label}-${name}.png`), fullPage: false }); };
    await shot("workbench");

    // Edit: new trainer, set species, level, a move, and dialogue.
    await page.locator(".rail-foot .btn.primary:visible, .switcher .btn.primary:visible").first().click();
    await page.fill("#f-name", "MARINA");
    await page.click("#m0-species");
    await page.keyboard.type("Delibird");
    await page.keyboard.press("Enter");
    await page.fill("#m0-level", "18");
    await page.click("#m0-move0");
    await page.keyboard.type("Present");
    await page.keyboard.press("Enter");
    await page.fill("#f-dlg-intro", "I deliver presents to every trainer on Parcel Isle, {PLAYER}! Ready for yours?");
    await page.waitForTimeout(400);
    const party = await page.evaluate(() => TB.project.partyText(TB.app.trainer()));
    if (!/SPECIES_DELIBIRD/.test(party) || !/- MOVE_PRESENT/.test(party) || !/Level: 18/.test(party)) problems.push(label + " edit did not reach the party block:\n" + party);
    const canvases = await page.locator(".gba canvas").count();
    if (!canvases) problems.push(label + " no dialogue preview rendered");
    await shot("edited");
    for (const tab of ["party", "opponents", "script", "howto", "checks"]) await page.click("#tab-" + tab);

    for (const view of ["roster", "balance", "project"]) {
      await page.goto(PAGE + "#" + view);
      await page.waitForTimeout(500);
      await shot(view);
    }
    // Horizontal overflow check (page body must not scroll sideways).
    const overflow = await page.evaluate(() => document.documentElement.scrollWidth - document.documentElement.clientWidth);
    if (overflow > 1) problems.push(label + " page scrolls horizontally by " + overflow + "px");
    await ctx.close();
  }
  if (shotsDir) fs.mkdirSync(shotsDir, { recursive: true });
  await session({ width: 1440, height: 1000 }, "light", "desktop-light");
  await session({ width: 1440, height: 1000 }, "dark", "desktop-dark");
  await session({ width: 390, height: 844 }, "light", "phone-light");
  await browser.close();
  if (problems.length) { console.error(problems.join("\n")); process.exit(1); }
  console.log("ui smoke: ok");
})();
