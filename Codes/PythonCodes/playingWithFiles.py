# f = open("testText.txt", "rt")  rt is default
# content = f.read()
# print(content)

# for line in f:
#     print(line, end="")

# print(f.readline())
# print(f.readline())
# print(f.readline())

# print(f.readlines())
#this will real lines in the form of a list

# content = f.read(3)
# print(content)

# f = open("testText.txt", "w") write mode
# f = open("testText.txt", "a") append mode

# f.write("Mai mast launda hu\n")
# a = f.write("Mai mast launda hu\n")
# print(a)

f = open("testText.txt", "r+")
print(f.read())
f.write("Dhanyawaad")

f.close()