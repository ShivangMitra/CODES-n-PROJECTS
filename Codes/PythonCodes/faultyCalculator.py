operator = input("Enter the operator you want to use below\n")
a = int(input("Now enter your two numbers\nEnter first number: "))
b = int(input("Enter second number: "))
if operator == "*":
    if a == 45 and b == 3:
        print(555)
    else:
        print(a*b)
elif operator == "+":
    if a == 56 and b == 9:
        print(77)
    else:
        print(a+b)
elif operator == "/":
    if a == 56 and b == 6:
        print(4)
    else:
        print(a/b)
elif operator == "-":
    print(abs(a-b))