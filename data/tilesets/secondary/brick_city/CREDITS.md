# Brick City

The town kit behind Saltwick: brick houses under slate roofs, flagstone paving, a stone quay,
street lamps, hedges in planters.

Derived from Ekat99's "Brick City" tileset on DeviantArt, a public use tileset for
non-commercial projects. Imported to pokeemerald by Kumatora for Team Aqua's Asset Repo
(github.com/TeamAquasHideout/Team-Aquas-Asset-Repo, Tilesets/The Great Tileset Exchange/
Full Tilesets/Brick City Secondary).

Credit, as the author asks:

1. Ekat (Ekat99)
2. Vurtax (FRLG rips)
3. Heartlessdragoon (RSE rips)
4. Alistar (tree bases and short grass patches)
5. Slimshady (mailboxes)

Imported to pokeemerald by Kumatora.

Changes made here (tools/skald/brick_city.py, tools/skald/mtile.py): the art is the kit's.
Three of its tiles (the stone lip of the quay) are moved to empty slots of the sheet, because
the engine writes door animation frames over the last eight slots, where they sat. Palette 12
is the Skaldmere fir palette (the kit leaves it free). The kit's metatiles that draw stock
Emerald's plain grass under a paving edge, a lamp foot or a bin draw this game's grass tiles
instead. Metatiles are added after the kit's own 375: a quay wall facing west, two quay
corners, a street lamp on plain flagstones, a one-row plank walk, and the path pieces and
walk-behind pieces the canvas tool puts together from the kit's quarter tiles.
