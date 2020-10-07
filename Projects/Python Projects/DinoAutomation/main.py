import pyautogui
from PIL import Image, ImageGrab
import time
# from numpy import asarray


def hit(key):
    pyautogui.keyDown(key)
    return

def isCollide(data):
    for i in range(710, 860):
        for j in range(235, 240):
            if data[i, j] > 100:
                hit("down")
                time.sleep(0.3)
                pyautogui.keyUp("down")
                return

    for i in range(700, 850):
        for j in range(275, 280):
            if data[i, j] > 100:
                hit("up")
                return
    return


if __name__ == '__main__':
    print("Ready to break the game in 3 seconds...")
    time.sleep(3)
    hit("up")

    while True:
        image = ImageGrab.grab().convert("L")
        data = image.load()
        isCollide(data)
        # print(asarray(image))

        # #for cactus
        # for i in range(700, 850):
        #     for j in range(275, 280):
        #         data[i, j] = 100
        #
        # # for birds
        # for i in range(710, 860):
        #     for j in range(235, 240):
        #         data[i, j] = 0
        #
        # image.show()
        # break