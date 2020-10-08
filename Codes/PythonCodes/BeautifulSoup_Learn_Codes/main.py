import requests
from bs4 import BeautifulSoup
import html5lib

url = "https://codewithharry.com"

r = requests.get(url)
htmlContent = r.content
# print(htmlContent)

soup = BeautifulSoup(htmlContent, "html.parser")
# print(soup.prettify())
# print(type(soup))

title = soup.title
# print(title)
# print(type(title))
# print(type(title.string))
# print(title.string)

# Get all the paragraphs from the page
paras = soup.find_all("p")
# print(paras)

anchors = soup.find_all("a")

# get all the links on the page
# all_links = set()
# for link in anchors:
#     if(link.get("href") != "#"):
#         all_links.add("https://codewithharry.com" + link.get("href"))
# print(all_links)

# print(anchors)


#get first element in the HTML page
# print(soup.find("p"))
# print(soup.find("p")["class"])

#find all elements with class lead
# print(soup.find_all("p", class_="lead"))

# get the text from the tags/soup
# print(soup.find("p").get_text())

# markup = "<p><!-- this is a comment --></p>"
# soup2 = BeautifulSoup(markup, "html.parser")
# print(soup2.p)
# print(type(soup2.p.string))

navbarSupportContent = soup.find(id="navbarSupportedContent")
# print(navbarSupportContent.contents)
# for element in navbarSupportContent.contents:
#     print(element)
    # a tag's children are available as a list, stored in memory

# for element in navbarSupportContent.children:
#     print(element)
    # a tag's children are available as a generator, not stored in memmory

# for item in navbarSupportContent.stripped_strings:
#     print(item)

# print(navbarSupportContent.parent)

# print(navbarSupportContent.parents)
# for item in navbarSupportContent.parents:
#     print(item.name)

# print(navbarSupportContent.next_sibling.next_sibling)
# print(navbarSupportContent.previous_sibling.previous_sibling)

# elem = soup.select("#loginModal")
# print(elem)
elem = soup.select(".modal-footer")
print(elem)