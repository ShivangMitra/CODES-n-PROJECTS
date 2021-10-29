import cv2
import mediapipe as mp
import time

class FaceMeshDetector():
    def __init__(self, mode=False, maxFaces=1, detectionCon=0.5, trackCon=0.5):
        self.mode = mode
        self.maxFaces = maxFaces
        self.detectionCon = detectionCon
        self.trackCon = trackCon

        self.mpDraw = mp.solutions.drawing_utils
        self.mpFaceMesh = mp.solutions.face_mesh
        self.faceMesh = self.mpFaceMesh.FaceMesh(static_image_mode=self.mode, max_num_faces=self.maxFaces, min_detection_confidence=self.detectionCon, min_tracking_confidence=self.trackCon)
        self.drawSpec = self.mpDraw.DrawingSpec(thickness=1, circle_radius=1, color=(0, 255, 0))

    def findFaceMesh(self, img, draw=True):
        imgRGB = cv2.cvtColor(img, cv2.COLOR_BGR2RGB)
        self.results = self.faceMesh.process(imgRGB)

        faces = []

        if self.results.multi_face_landmarks:
            # for face_num, faceLms in enumerate(self.results.multi_face_landmarks):
            for faceLms in self.results.multi_face_landmarks:
                if draw:
                    self.mpDraw.draw_landmarks(img, faceLms, self.mpFaceMesh.FACEMESH_TESSELATION, landmark_drawing_spec=self.drawSpec, connection_drawing_spec=self.drawSpec)

                face = []

                for id, lm in enumerate(faceLms.landmark):
                    ih, iw, ic = img.shape
                    x, y = int(lm.x * iw), int(lm.y * ih)

                    # cv2.putText(img, f'{str(id)}', (x, y), cv2.FONT_HERSHEY_PLAIN, 1, (0, 255, 0), 1)

                    face.append([id, x, y])

                faces.append(face)

        return img, faces




def main():
    cap = cv2.VideoCapture(0)
    ptime = 0
    detector = FaceMeshDetector()
    while True:
        success, img = cap.read()

        img, faces = detector.findFaceMesh(img)
        # if len(faces) != 0:
        #     print(faces[0])

        ctime = time.time()
        fps = 1/(ctime - ptime)
        ptime = ctime

        cv2.putText(img, f'FPS: {str(int(fps))}', (10, 50), cv2.FONT_HERSHEY_PLAIN, 3, (0, 255, 0), 3)

        cv2.imshow("Image", img)
        cv2.waitKey(1)


if __name__ == '__main__':
    main()