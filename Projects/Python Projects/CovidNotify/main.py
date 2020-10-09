from plyer import notification
import requests
from bs4 import BeautifulSoup
from selenium import webdriver
import time

PATH = "C:\Program Files (x86)\\chromedriver.exe"

def notifyMe(title, message):
    notification.notify(
        title = title,
        message = message,
        app_icon = "icon.ico",
        timeout = 15
    )


def getData(url):
    r = requests.get(url)
    return r.text


if __name__ == '__main__':
    # notifyMe("Zephyrus", "Our first Notification")
    # myHtmlData = getData("https://www.mohfw.gov.in/")

    # soup = BeautifulSoup(myHtmlData, "html.parser")
    # print(soup.prettify())
    # print(soup.find_all("table")[0].find_all("tr"))
    # for tr in soup.find_all("tbody").find_all("tr"):
    #     print(tr.get_text())

    # driver = webdriver.Chrome(PATH, chrome_options=webdriver.ChromeOptions().add_argument("--headless"))
    # webdriver.ChromeOptions().headless = True
    driver = webdriver.Chrome(PATH)
    driver.set_window_position(-10000, 0)
    driver.get("https://www.mohfw.gov.in/")
    soup = BeautifulSoup(driver.page_source, "html.parser")
    driver.quit()

    myDataStr = ""
    for tr in soup.find_all("tbody")[0].find_all("tr"):
        myDataStr += (tr.get_text() + "\n")
    itemList = myDataStr.split("\n")

    # print(itemList)
    # print("\n\n\n")

    i=0
    newItemList = []
    for item in itemList[0:35]:
        if i<10:
            item = item[1:-2]
        else:
            item = item[2:-2]
        newItem = ""
        flag = True
        for ch in item:
            if ch.isdigit() and flag:
                newItem = newItem+" "+ch
                flag = False
            else:
                newItem = newItem+ch
        item = newItem
        newItemList.append(item)
        i+=1
    itemList = newItemList
    # print(itemList)
    states = ["Jharkhand", "Odisha", "Uttar Pradesh"]
    for item in itemList:
        if states[0] in item or states[1] in item or states[2] in item:
            state = ""
            for ch in item:
                if ch.isdigit():
                    break
                else:
                    state += ch
            info = item.split(" ")
            # print(state)
            newinfo = []
            for item in info:
                if item.isnumeric():
                    newinfo.append(item)
            # print(newinfo)
            info = newinfo
            notiTitle = "Cases of Covid-19"
            notiText = f"--/|\--{state}--/|\--\nTotal : {info[0]}\nCured : {info[2]}\nDeaths : {info[4]}"
            notifyMe(notiTitle, notiText)
            time.sleep(15)