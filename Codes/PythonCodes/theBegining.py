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

str="ye hai meri String"
print(str[0:6])
print(str[0:11:2])
print(str[-6:-2])
print(str[::-2])

print(str.isalnum())
#string is not alphanumeric it has spaces
print(str.endswith("ing"))
print(str.count("i"))
print(str.capitalize())
print(str.find("meri"))
print(str.upper())
print(str.replace("meri", "teri"))

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