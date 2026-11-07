"""End-to-end tests for apply.py and the C-data parser.

The bundle is produced by the app's own JavaScript (via node), applied to a
temporary copy of trainers.party and opponents.h, and verified with the real
trainerproc. Run: python3 -m unittest discover -s tools/trainer_builder/tests
"""
import json
import os
import shutil
import subprocess
import sys
import tempfile
import unittest

HERE = os.path.dirname(os.path.abspath(__file__))
TB = os.path.dirname(HERE)
ROOT = os.path.abspath(os.path.join(TB, "..", ".."))
sys.path.insert(0, TB)

import apply as A  # noqa: E402
from cparse import Evaluator, parse_initializer, tokenize  # noqa: E402

MAKE_BUNDLE = r"""
const path = require("path"), fs = require("fs");
const [tbDir, dataPath] = process.argv.slice(-2);  // node -e has no script entry in argv
const app = path.join(tbDir, "app/core");
["party.js","data.js","calc.js","checks.js","emit.js","project.js"].forEach(f => require(path.join(app, f)));
const D = new TB.Data(JSON.parse(fs.readFileSync(dataPath, "utf8")));
const ref = TB.project.reference(D);
const buzz = TB.project.clone(ref.find(t => t.id === "TRAINER_BUZZ_TEST"));
buzz.party[0].level = 30;
buzz.meta = { stage: "3", role: "Gym trainer" };
buzz.backstory = "Swapped to a bug team after losing.";
buzz.dialogue = { intro: "Bugs only now!" };
const fresh = TB.project.newTrainer(D, []);
fresh.id = "TRAINER_TB_APPLY_TEST"; fresh.name = "TESTER"; fresh.pic = "TRAINER_PIC_HIKER"; fresh.trainerClass = "TRAINER_CLASS_HIKER";
fresh.party[0].species = "SPECIES_DELIBIRD"; fresh.party[0].level = 12; fresh.party[0].moves = ["MOVE_PRESENT"];
const b = TB.emit.bundle(D, [buzz, fresh].map(TB.project.withDialogueMeta));
process.stdout.write(JSON.stringify(b));
"""


def data_json():
    p = os.path.join(TB, "build", "data.json")
    if not os.path.exists(p):
        subprocess.run([sys.executable, os.path.join(TB, "extract.py"), "--no-images", "-o", p], check=True)
    return p


class ApplyTest(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        out = subprocess.run(["node", "-e", MAKE_BUNDLE, TB, data_json()], check=True, capture_output=True, text=True).stdout
        cls.bundle = json.loads(out)

    def setUp(self):
        self.root = tempfile.mkdtemp(prefix="tb-apply-")
        for rel in (A.PARTY, A.OPPONENTS):
            os.makedirs(os.path.join(self.root, os.path.dirname(rel)), exist_ok=True)
            shutil.copy(os.path.join(ROOT, rel), os.path.join(self.root, rel))
        os.makedirs(os.path.join(self.root, "tools"))
        os.symlink(os.path.join(ROOT, "tools", "trainerproc"), os.path.join(self.root, "tools", "trainerproc"))

    def tearDown(self):
        shutil.rmtree(self.root)

    def test_replace_and_add(self):
        p = A.plan(self.root, self.bundle)
        self.assertEqual(p["replaced"], [("TRAINER_BUZZ_TEST", "Normal")])
        self.assertEqual(p["added"], [("TRAINER_TB_APPLY_TEST", "Normal")])
        new_party = p["party"][1]
        self.assertEqual(new_party.count("=== TRAINER_BUZZ_TEST ==="), 1)
        self.assertIn("Level: 30", new_party.split("=== TRAINER_BUZZ_TEST ===")[1].split("===")[0])
        self.assertIn("@stage 3", new_party)
        self.assertIn("@intro Bugs only now!", new_party)
        # every other trainer is untouched
        old_blocks = {b[1]: b[2] for b in A.split_blocks(p["party"][0]) if b[0] == "trainer"}
        new_blocks = {b[1]: b[2] for b in A.split_blocks(new_party) if b[0] == "trainer"}
        changed = [k for k in old_blocks if old_blocks[k].rstrip() != new_blocks[k].rstrip()]
        self.assertEqual(changed, [("TRAINER_BUZZ_TEST", "Normal")])
        # opponents.h numbering
        self.assertEqual(p["numbered"], [("TRAINER_TB_APPLY_TEST", 857)])
        self.assertIn("#define TRAINERS_COUNT                      858", p["opponents"][1])

    def test_idempotent(self):
        p = A.plan(self.root, self.bundle)
        for rel, key in ((A.PARTY, "party"), (A.OPPONENTS, "opponents")):
            with open(os.path.join(self.root, rel), "w") as f:
                f.write(p[key][1])
        again = A.plan(self.root, self.bundle)
        self.assertEqual(again["party"][0], again["party"][1])
        self.assertEqual(again["opponents"][0], again["opponents"][1])
        self.assertEqual(again["numbered"], [])

    def test_refuses_past_max(self):
        many = dict(self.bundle)
        many["trainers"] = []
        tmpl = self.bundle["trainers"][1]
        for k in range(10):
            tid = "TRAINER_TB_CAP_%d" % k
            many["trainers"].append(dict(tmpl, id=tid, party=tmpl["party"].replace("TRAINER_TB_APPLY_TEST", tid)))
        with self.assertRaises(A.ApplyError) as cm:
            A.plan(self.root, many)
        self.assertIn("MAX_TRAINERS_COUNT", str(cm.exception))

    def test_refuses_broken_party(self):
        bad = dict(self.bundle)
        t = dict(self.bundle["trainers"][1])
        t["party"] = t["party"].replace("Name: TESTER\n", "")  # trainerproc requires Name
        bad["trainers"] = [t]
        with self.assertRaises(A.ApplyError):
            A.plan(self.root, bad)


class CParseTest(unittest.TestCase):
    def ev(self, s, env=None):
        return Evaluator(env or {}).eval(tokenize(s))

    def test_c_semantics(self):
        self.assertEqual(self.ev("-7 / 2"), -3)          # truncates toward zero
        self.assertEqual(self.ev("-7 % 2"), -1)
        self.assertEqual(self.ev("1 << 4 | 1"), 17)
        self.assertEqual(self.ev("8 >= 6 ? 50 : 70"), 50)
        self.assertEqual(self.ev("((uq4_12_t)((0.5) * 4096 + 0.5))"), 2048)
        self.assertEqual(self.ev("((254) < (((12.5 * 255) / 100)) ? (254) : (((12.5 * 255) / 100)))"), 31.875)
        self.assertEqual(self.ev("X + 1", {"X": 41}), 42)

    def test_initializer(self):
        node = parse_initializer('{ [1] = { .a = 2, .b = { 3, 4 }, .s = _("Hi" " there"), .argument.fixedDamage = 40 }, }')
        (desig, val), = node.items
        self.assertEqual(desig[0], "index")
        ev = Evaluator({})
        self.assertEqual(ev.eval(val.field("a")), 2)
        self.assertEqual([ev.eval(x) for x in val.field("b").positional()], [3, 4])
        self.assertEqual(ev.eval(val.field("s")), "Hi there")
        self.assertEqual(ev.eval(val.field("argument.fixedDamage")), 40)


if __name__ == "__main__":
    unittest.main()
