import cv2
import time
# import os
import handTrackingModule as htm

wCam, hCam = 1280, 720

ptime = 0
cap = cv2.VideoCapture(0)
cap.set(3, wCam)
cap.set(4, hCam)

detector = htm.handDetector()

tipIds = [4, 8, 12, 16, 20]

while True:
    success, img = cap.read()
    img = detector.findHands(img)
    lmList = detector.findPosition(img, draw=False)

    if len(lmList) != 0:
        fingers = []

        if lmList[4][1] > lmList[3][1]:
            fingers.append(1)
        else:
            fingers.append(0)

        for id in range(1,5):
            if lmList[tipIds[id]][2] < lmList[tipIds[id]-2][2]:
                fingers.append(1)
            else:
                fingers.append(0)

        # print(fingers)
        totalFingers = fingers.count(1)
        # print(totalFingers)

        cv2.rectangle(img, (0, 100), (225, 325), (0, 255, 0), cv2.FILLED)
        cv2.putText(img, str(totalFingers), (65, 270), cv2.FONT_HERSHEY_PLAIN, 10, (255, 0, 0), 25)

    ctime = time.time()
    fps = 1/(ctime - ptime)
    ptime = ctime

    cv2.putText(img, str(int(fps)), (10, 70), cv2.FONT_HERSHEY_PLAIN, 3, (255, 0, 255), 3)

    cv2.imshow("Image", img)
    cv2.waitKey(1)