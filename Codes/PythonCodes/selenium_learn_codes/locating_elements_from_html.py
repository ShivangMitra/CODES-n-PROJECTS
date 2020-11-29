from selenium import webdriver
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC

PATH = "C:\Program Files (x86)\\chromedriver.exe"
driver = webdriver.Chrome(PATH)

driver.get("https://techwithtim.net")

search = driver.find_element_by_name("s")
search.clear()
search.send_keys("test")
search.send_keys(Keys.RETURN)

# main = driver.find_element_by_id("main")

try:
    main = WebDriverWait(driver, 10).until(
        EC.presence_of_element_located((By.ID, "main"))
    )

    articles = main.find_elements_by_tag_name("article")
    for article in articles:
        entry_header = article.find_element_by_class_name("entry-header")
        entry_title = entry_header.find_element_by_class_name("entry-title")
        anchor_tag = entry_title.find_element_by_tag_name("a")
        print(anchor_tag.get_attribute("href"))

finally:
    driver.quit()


# print(driver.page_source)

# driver.quit()