#7014c24e27b94012adec45db3d465171 my news api key

def speak(str):
    from win32com.client import Dispatch
    speak = Dispatch("SAPI.SpVoice")
    speak.Speak(str)


if __name__ == '__main__':
    speak("How are you sir")