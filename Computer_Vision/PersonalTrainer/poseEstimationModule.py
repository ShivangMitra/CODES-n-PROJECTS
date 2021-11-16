import cv2
import mediapipe as mp
import time
import math


class poseDetector():
    def __init__(self, mode=False, smooth=True, detectionCon=0.5, trackCon=0.5):
        self.mode = mode
        self.smooth = smooth
        self.detectionCon = detectionCon
        self.trackCon = trackCon

        self.mpPose = mp.solutions.pose
        self.pose = self.mpPose.Pose(static_image_mode=mode, smooth_landmarks=smooth, min_detection_confidence=detectionCon, min_tracking_confidence=trackCon)
        self.mpDraw = mp.solutions.drawing_utils

    def findPose(self, img, draw=True):
        imgRGB = cv2.cvtColor(img, cv2.COLOR_BGR2RGB)
        self.results = self.pose.process(imgRGB)
        if self.results.pose_landmarks:
            if draw:
                self.mpDraw.draw_landmarks(img, self.results.pose_landmarks, self.mpPose.POSE_CONNECTIONS)
        return img

    def findPosition(self, img, draw=True):

        self.lmList = []

        if self.results.pose_landmarks:
            for id, lm in enumerate(self.results.pose_landmarks.landmark):
                h, w, c = img.shape
                cx, cy = int(lm.x*w), int(lm.y*h)
                self.lmList.append([id, cx, cy])
                if draw:
                    if id == 0:
                        cv2.circle(img, (cx, cy), 10, (0, 0, 255), cv2.FILLED)
                    else:
                        cv2.circle(img, (cx, cy), 5, (0, 255, 0), cv2.FILLED)

        return self.lmList

    def findAngle(self, img, p1, p2, p3, draw=True):

        _, x1, y1 = self.lmList[p1]
        _, x2, y2 = self.lmList[p2]
        _, x3, y3 = self.lmList[p3]

        angle = math.degrees(math.atan2(y3-y2, x3-x2) - math.atan2(y1-y2, x1-x2))
        if angle < 0:
            angle += 360
        # angle = abs(angle)
        # print(angle)

        if draw:
            cv2.line(img, (x1, y1), (x2, y2), (0, 255, 0), 3)
            cv2.line(img, (x3, y3), (x2, y2), (0, 255, 0), 3)

            cv2.circle(img, (x1, y1), 10, (0, 0, 255), cv2.FILLED)
            cv2.circle(img, (x1, y1), 15, (0, 0, 255), 2)

            cv2.circle(img, (x2, y2), 10, (0, 0, 255), cv2.FILLED)
            cv2.circle(img, (x2, y2), 15, (0, 0, 255), 2)

            cv2.circle(img, (x3, y3), 10, (0, 0, 255), cv2.FILLED)
            cv2.circle(img, (x3, y3), 15, (0, 0, 255), 2)

            cv2.putText(img, str(int(angle)), (x2 - 20, y2 + 50), cv2.FONT_HERSHEY_PLAIN, 3, (255, 0, 0), 3)

        return angle


def main():
    cap = cv2.VideoCapture(0)
    ptime = 0
    detector = poseDetector()
    while True:
        success, img = cap.read()
        img = detector.findPose(img)
        lmList = detector.findPosition(img)
        if len(lmList) != 0:
            print(lmList[0])


        ctime = time.time()
        fps = 1/(ctime - ptime)
        ptime = ctime

        cv2.putText(img, str(int(fps)), (10, 50), cv2.FONT_HERSHEY_PLAIN, 3, (255, 0, 0), 3)
        cv2.imshow("Image", img)
        cv2.waitKey(1)


if __name__ == '__main__':
    main()