n = int(input("Enter your number: "))
rotate = bool(int(input("Enter '1' for upside triangle and '0' for upside down triangle: ")))
if rotate:
    for i in range(n):
        for j in range(i+1):
            print("*",end="")
        print("\n",end="")
else:
    for i in range(n):
        for j in range(n-i):
            print("*",end="")
        print("\n",end="")