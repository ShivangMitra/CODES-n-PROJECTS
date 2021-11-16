import cv2
import mediapipe as mp
import numpy as np
import time
import poseEstimationModule as pm

wCam, hCam = 1280, 720
cap = cv2.VideoCapture(0)
cap.set(3, wCam)
cap.set(4, hCam)
ptime = 0

detector = pm.poseDetector()

count = 0
dir = 0

while True:
    success, img = cap.read()
    img = detector.findPose(img, draw=False)
    lmList = detector.findPosition(img, draw=False)

    if len(lmList) != 0:
        # detector.findAngle(img, 11, 13, 15)
        angle = detector.findAngle(img, 12, 14, 16)
        per = np.interp(angle, (200, 310), (0, 100))
        bar = np.interp(angle, (200, 310), (650, 100))

        if per == 100:
            if dir == 0:
                count += 0.5
                dir = 1
        if per == 0:
            if dir == 1:
                count += 0.5
                dir = 0

        cv2.rectangle(img, (1100, 100), (1175, 650), (0, 255, 0), 2)
        cv2.rectangle(img, (1100, int(bar)), (1175, 650), (0, 255, 0), cv2.FILLED)
        cv2.putText(img, f'{int(per)}%', (1100, 75), cv2.FONT_HERSHEY_PLAIN, 4, (255, 0, 0), 4)

        cv2.rectangle(img, (0, 100), (225, 325), (0, 255, 0), cv2.FILLED)
        cv2.putText(img, str(int(count)), (65, 270), cv2.FONT_HERSHEY_PLAIN, 10, (255, 0, 0), 25)


    ctime = time.time()
    fps = 1/(ctime - ptime)
    ptime = ctime

    cv2.putText(img, str(int(fps)), (10, 50), cv2.FONT_HERSHEY_PLAIN, 3, (255, 0, 0), 3)
    cv2.imshow("Image", img)
    cv2.waitKey(1)
