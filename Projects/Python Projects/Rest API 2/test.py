import requests

BASE = "http://127.0.0.1:5000/"

# response = requests.get(BASE + "hello")
# response = requests.post(BASE + "hello")
# response = requests.get(BASE + "hello/zeph/19")
# response = requests.get(BASE + "hello/zeph")
# response = requests.put(BASE + "video/1", {"likes" : 10})

# data = [
#     {"name" : "anything1", "views" : 2121, "likes" : 10},
#     {"name" : "anything3", "views" : 3434, "likes" : 30},
#     {"name" : "anything6", "views" : 6969, "likes" : 60}
# ]
#
# for i in range(len(data)):
#     response = requests.put(BASE + "video/" + str(i), data[i])
#     print(response.json())

# input()
# response = requests.delete(BASE + "video/0")
# print(response)
# input()
# response = requests.get(BASE + "video/6")
# print(response.json())

response = requests.patch(BASE + "video/2", {"views" : 420})
print(response.json())
input()
response = requests.get(BASE + "video/2")
print(response.json())