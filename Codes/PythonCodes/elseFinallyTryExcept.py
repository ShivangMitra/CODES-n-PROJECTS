f1 = open("testText.txt")

try:
    f = open("does.txt")

except Exception as e:
    print(e)

else:
    print("This will run if except does not run")

finally:
    print("Run this anyway. . .")
    f1.close()
    # f.close()

print("Imp Stuff")