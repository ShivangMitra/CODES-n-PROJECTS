#7014c24e27b94012adec45db3d465171 my news api key
import requests
import json

def speak(str):
    from win32com.client import Dispatch
    speak = Dispatch("SAPI.SpVoice")
    speak.Speak(str)


if __name__ == '__main__':
    speak("Always at your service sir")
    r = requests.get("https://newsapi.org/v2/top-headlines?sources=the-times-of-india&apiKey=7014c24e27b94012adec45db3d465171")
    jscomp = json.loads(r.text)
    speak("Sir, I have loaded the top ten headlines of The Times of India. I will now be reading it out to you")
    news_number = 1
    for key in jscomp:
        if key == "articles":
            articles = jscomp[key]
            for items in articles:
                dictInArticle = items
                for key in dictInArticle:
                    if key == "title":
                        speak(f"News number {news_number}")
                        speak(dictInArticle[key])
                        news_number+=1
                    if key == "description":
                        speak("Sir, i am now reading the article in detail")
                        speak(dictInArticle[key])
                    if key == "url":
                        speak("Sir, i have provided the link to this article in your console, check it out if you want to")
                        print(dictInArticle[key])

    speak("Sir, i have read out all the top headlines for today. Now i am feeling a bit sleepy. I am going to sleep now. Have a good day sir")