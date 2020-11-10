import numpy as np
import imageio
from scipy.ndimage import filters
import cv2

img = "img.jpg"

def grayscale(rgb):
    return np.dot(rgb[...,:3],[0.299, 0.587, 0.114])

def dodge(front, back):
    result = front*255/(255 - back)
    result[result>255] = 255
    result[back == 255] = 255
    return result.astype("uint8")

read_img = imageio.imread(img)
grayscale_image = grayscale(read_img)
i = 255 - grayscale_image

blured_img = filters.gaussian_filter(i, sigma=10) #sigma is intensity of blurness
r = dodge(blured_img, grayscale_image)

cv2.imwrite("sketch.png", r)