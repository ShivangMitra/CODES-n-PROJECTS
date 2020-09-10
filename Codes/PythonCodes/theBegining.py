#this is helo world just like always
"""
this
is
multi
line comment"""
print("Hello World", end=" ")
print("mujhe dusri line pe mat bhejo", "ye bhi kaam karta hai bidu")
print("agli \n line")
print("not agli \\n line")

var1="im a variable"
print(var1)
var2=4
var3=45.8
print(type(var1))
print(type(var2))
print(type(var3))

print(10*"gajab ")

str1="ye hai meri String"
print(str1[0:6])
print(str1[0:11:2])
print(str1[-6:-2])
print(str1[::-2])

print(str1.isalnum())
#string is not alphanumeric it has spaces
print(str1.endswith("ing"))
print(str1.count("i"))
print(str1.capitalize())
print(str1.find("meri"))
print(str1.upper())
print(str1.replace("meri", "teri"))

number = [9, 5, 7, 2, 10]
number.sort()
number.reverse()
print(number)

print(max(number))

number.append(99)
print(number)

number.insert(2, 100)
print(number)

number.remove(2)
print(number)

number.pop()
print(number)

a=1
b=8
a,b=b,a
print(a,b)

d1 = {}
print(type(d1))
d2 = {"Harry":"Burger",
      "Rohan":"Fish",
      "SkillF":"Roti",
      "Shubham":{"B":"maggie", "L":"roti", "D":"Chicken"}}
d2["Ankit"] = "Junk Food"
d2[420] = "Kebabs"
print(d2)
del d2[420]
print(d2["Shubham"])
d3 = d2.copy()
del d3["Harry"]
d2.update({"Leena":"Toffee"})
print(d2.keys())
print(d2.items())

s = set()
l=[1, 2, 3, 4]
s_from_list = set(l)
print(s_from_list)
print(type(s_from_list))
s.add(1)
s.add(1)
s.add(2)
s1 = s.union({2,5,6})
print(s,s1)

# newvar1 = 6
# newvar2 = 56
# newvar3 = int(input())
# if newvar3>newvar2:
#       print("Greater")
# elif newvar3==newvar2:
#       print("Equal")
# else:
#       print("Lesser")

list1 = [1, 2, 3, 4, 5]
if 3 in list1:
      print("Yup its in the list")
if 15 not in list1:
      print("Na munna nai hai isme")

list2 = [["Harry", 1], ["Larry", 2], ["Carry", 3], ["Marie", 4]]

for item, loli in list2:
      print(item, loli, end=" ")

dict1 = dict(list2)
print(dict1)

for item, loli in dict1.items():
      print(item, "and loli", loli)

for item in dict1:
      print(item)

kuchbhi = ["Harry", 5, 3, 3, 22, 21, 64, 23, 233, 23]

for item in kuchbhi:
      if str(item).isnumeric() and item>6:
            print(item)

c=9
d=8
e=sum((c, d))
print(e)

#user defined functions

def funcky():
      print("you are funcky")

funcky()

def funcky2(a, b):
      """beta ye average dega aapko samjhe"""
      print("tereko avg return kiya re")
      average = (a+b)/2
      return average

average = funcky2(10, 20)
print(average)
print(funcky2.__doc__)

print("enter num 1")
num1 = input()
print("enter num 2")
num2 = input()

try:
      print("the su of these two nums is", int(num1)+int(num2))
except Exception as p:
      print(p)

print("this line should be executed")