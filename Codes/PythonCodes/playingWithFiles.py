f = open("testText.txt", "rt") #rt is default
# content = f.read()
# print(content)

# for line in f:
#     print(line, end="")

# print(f.readline())
# print(f.readline())
# print(f.readline())

print(f.readlines())

# content = f.read(3)
# print(content)

f.close()