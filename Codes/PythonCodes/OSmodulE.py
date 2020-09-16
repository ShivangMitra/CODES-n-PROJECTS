import os

# print(dir(os))
# print(os.getcwd())
print(os.listdir())
# print(os.listdir("C://"))
# os.mkdir("this") this will create a folder
# os.makedirs("This/stat") automatically makes subdirectories
# os.rename("some.txt", "newName.txt") this will rename the file
# print(os.environ.get('Path'))
# os.path.join("C://", "/someOther.txt") removes unwanted '/', can be used when dont know the exact position of '/'

print(os.path.exists("C://"))
print(os.path.isdir("C://Program Files"))
print(os.path.isfile("C://Program Files"))