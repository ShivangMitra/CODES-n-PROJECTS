import pyttsx3
import datetime
import speech_recognition as sr
import wikipedia
import webbrowser
import os
import smtplib

engine = pyttsx3.init("sapi5")
voices = engine.getProperty("voices")
# print(voices[0].id)
engine.setProperty("voice", voices[0].id)


def speak(audio):
    engine.say(audio)
    engine.runAndWait()

def wishMe():
    hour = int(datetime.datetime.now().hour)
    if hour>=0 and hour<12:
        speak("Hope you are having a wonderful morning sir")

    elif hour>=12 and hour<18:
        speak("Good afternoon sir")

    elif hour>=18 and hour<21:
        speak("Hope you are enjoying your evening sir")

    else:
        speak("Hope you are having a relaxing night sir")

    speak("How may i help you")

def takeCommand():
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("Listening...")
        r.pause_threshold = 1
        audio = r.listen(source)

    try:
        print("Recognising...")
        query = r.recognize_google(audio, language="en-in")
        print(f"User said {query}\n")

    except Exception as e:
        # print(e)

        print("Say that again please...")
        return "None"
    return query

def sendEmail(to, content):
    server = smtplib.SMTP("smtp.gmail.com", 587)
    server.ehlo()
    server.starttls()
    server.login("youremail", "password")
    server.sendmail("yourmail", to, content)
    server.close()



if __name__ == '__main__':
    initial = takeCommand().lower()
    if "you there" in initial:
        speak("for you sir, always")
        wishMe()
    while True:
        query = takeCommand().lower()

        if "wikipedia" in query:
            speak("Searching Wikipedia")
            query.replace("wikipedia", "")
            results = wikipedia.summary(query, sentences=2)
            speak("According to wikipedia")
            # print(results)
            speak(results)

        elif "open youtube" in query:
            webbrowser.open("youtube.com")

        elif "open google" in query:
            webbrowser.open("google.com")

        elif "open github" in query:
            webbrowser.open("github.com")

        elif "open stack overflow" in query:
            webbrowser.open("stackoverflow.com")

        elif "play music" in query:
            music_dir = "C:\\Users\KIIT\Desktop\mujic"
            songs = os.listdir(music_dir)
            print(songs)
            os.startfile(os.path.join(music_dir, songs[0]))

        elif "the time" in query:
            strTime = datetime.datetime.now().strftime("%H:%M:%S")
            speak(f"the time is {strTime}")

        elif "open code" in query:
            codePath = "C:\\Users\KIIT\AppData\Local\Programs\Microsoft VS Code\Code.exe"
            os.startfile(codePath)

        elif "open github desktop" in query:
            gitPath = "C:\\Users\KIIT\AppData\Local\GitHubDesktop\\GitHubDesktop.exe"
            os.startfile(gitPath)

        elif "open wps" in query:
            wpsPath = "C:\\Users\KIIT\AppData\Local\Kingsoft\WPS Office\ksolaunch.exe"
            os.startfile(wpsPath)

        elif "open pycharm" in query:
            pyPath = "C:\Program Files\JetBrains\PyCharm Community Edition 2019.2\\bin\\pycharm64.exe"
            os.startfile(pyPath)

        elif "send email" in query:
            try:
                speak("what should i say")
                content = takeCommand()
                to = "email add"
                sendEmail(to, content)
                speak("Email has been sent")
            except Exception as e:
                print(e)
                speak("Sorry sir i was unable to send the email")