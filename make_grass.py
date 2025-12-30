from PIL import Image

def create_grass_tiles():
    # Colors (Emerald Standard)
    c_transparent = (0, 0, 0, 0)
    c_white_snow  = (248, 248, 248, 255) # Standard Snow White
    c_dark_green  = (40, 80, 48, 255)
    c_mid_green   = (80, 144, 88, 255)
    c_light_green = (120, 192, 120, 255)
    
    # Define the Grass Pattern (x, y, color_type)
    # 0=Dark, 1=Mid, 2=Light
    grass_pixels = [
        # Left Blade
        (2, 12, 0), (2, 11, 1), (2, 10, 1),
        (3, 13, 0), (3, 12, 1), (3, 11, 2), (3, 10, 1),
        # Center Blade
        (6, 14, 0), (6, 13, 1), (7, 13, 1), (7, 12, 2), (7, 11, 2),
        (8, 12, 2), (8, 11, 1), (8, 10, 0),
        # Right Blade
        (11, 13, 0), (11, 12, 1), (12, 12, 1), (12, 11, 2),
        (13, 11, 1), (13, 10, 1)
    ]
    
    palette = [c_dark_green, c_mid_green, c_light_green]

    # --- IMAGE 1: Transparent (For Layering) ---
    img_trans = Image.new("RGBA", (16, 16), c_transparent)
    pix_trans = img_trans.load()
    for x, y, col_idx in grass_pixels:
        pix_trans[x, y] = palette[col_idx]
    img_trans.save("grass_transparent.png")
    print("Created: grass_transparent.png")

    # --- IMAGE 2: Snow Background (Pre-made) ---
    img_snow = Image.new("RGBA", (16, 16), c_white_snow)
    pix_snow = img_snow.load()
    for x, y, col_idx in grass_pixels:
        pix_snow[x, y] = palette[col_idx]
    img_snow.save("grass_snowy.png")
    print("Created: grass_snowy.png")

if __name__ == "__main__":
    create_grass_tiles()