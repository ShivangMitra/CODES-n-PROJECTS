from selenium import webdriver

PATH = "C:\Program Files (x86)\\chromedriver.exe"
driver = webdriver.Chrome(PATH)

driver.get("https://youtube.com")

print(driver.title)

# driver.close() close only one tab
driver.quit()