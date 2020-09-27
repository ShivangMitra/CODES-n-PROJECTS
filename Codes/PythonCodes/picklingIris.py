import pickle

#Pickling a python object
# data = []
#
# with open("iris_data.txt", "r") as f:
#     for line in f:
#         data.append([line])
#
# file = "iris_pickled.pkl"
# fileObj = open(file, "wb")
# pickle.dump(data, fileObj)
# fileObj.close()

#Reading a pickled object
file = "iris_pickled.pkl"
fileObj = open(file, "rb")
data = pickle.load(fileObj)
print(data)
print(type(data))