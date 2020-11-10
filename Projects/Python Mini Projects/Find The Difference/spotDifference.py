from PIL import Image, ImageChops

img1 = Image.open("img1.jpg")
img2 = Image.open("img2.jpg")

difference = ImageChops.difference(img1, img2)

if difference.getbbox():
    difference.show()