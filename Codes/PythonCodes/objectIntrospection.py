class Employee:
    def __init__(self, fname, lname):
        self.fname = fname
        self.lname = lname
        # self.email = f"{fname}.{lname}@gmail.com"

    def explain(self):
        return f"This employee is {self.fname} {self.lname}"

#with property decorator you dont need to run the function wilh (), just the name will do
    @property
    def printEmail(self):
        if self.fname == None or self.lname == None:
            return "Email is not set. Please sey it using setter"
        return f"{self.fname}.{self.lname}@gmail.com"

    @printEmail.setter
    def printEmail(self, string):
        print("Setting Now. . .")
        names = string.split("@")[0]
        self.fname = names.split(".")[0]
        self.lname = names.split(".")[1]

    @printEmail.deleter
    def printEmail(self):
        self.fname = None
        self.lname = None


skillf = Employee("Skill", "F")
print(skillf.printEmail)
print(id("aweaweaweoaweoawea osas"))
#every object has a id

print(dir("this is a string"))

import inspect
print(inspect.getmembers(skillf))