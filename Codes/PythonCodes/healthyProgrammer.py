from pygame import mixer
import time
import datetime

initial_time_water = datetime.datetime.now()
initial_time_eyes = datetime.datetime.now()
initial_time_exer = datetime.datetime.now()

def activity_log(msg):
    with open("mylogs.txt", "a") as f:
        f.write(f"[{str(datetime.datetime.now())}] - {msg}\n")

def musicloop(file, stopper):
    mixer.init()
    mixer.music.load(file)
    mixer.music.play()
    while True:
        a = input()
        if a == stopper:
            mixer.music.stop()
            break

while time.localtime().tm_hour >= 9 and time.localtime().tm_hour <= 17:
    present_time = datetime.datetime.now()
    if str(present_time - initial_time_water)[2:4] == "02":
        print("Bhai paani pilo")
        initial_time_water = present_time
        musicloop("water.mp3", "drank")
        activity_log("Paani pi liya")
    if str(present_time-initial_time_eyes)[2:4] == "04":
        print("Bhai eyes matkalo")
        initial_time_eyes = present_time
        musicloop("eyes.mp3", "eyesdone")
        activity_log("Eyes exercise karli")
    if str(present_time-initial_time_exer)[2:4] == "08":
        print("Bhai exercise karlo")
        initial_time_exer = present_time
        musicloop("exercise.mp3", "exerdone")
        activity_log("Physical activity karli")
    time.sleep(1)