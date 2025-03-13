#!./venv/bin/python3
from PIL import Image

i = Image.open("/home/ethan/Downloads/godilla_v2.png")
cols, rows = i.size

imgInTxt = []


for x in range(cols):
    for y in range(rows):
        pixel = i.getpixel((x, y))
        assert pixel is not None
        imgInTxt.append(f"{pixel[0]} {pixel[1]} {pixel[2]}")




file = open("godzilla.txt", "w")
with file as f:
    f.write("\n".join(map(lambda x: "1" if x == (255, 255, 255) else "0", imgInTxt)))
