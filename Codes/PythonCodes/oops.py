class Employee:
    no_of_leaves = 8
#constructor
    def __init__(self, name, salary, role):
        self.name = name
        self.salary = salary
        self.role = role

    def printdetails(self):
        return f"Name is {self.name} - Salary is {self.salary} and role is {self.role}"

#class methods

    @classmethod
    def change_leaves(cls, newleaves):
        cls.no_of_leaves = newleaves

#using class method as constructor
    @classmethod
    def from_dash(cls, string):
        # params = string.split("-")
        # return cls(params[0], params[1], params[2])
        return cls(*string.split("-"))

#static methods
    @staticmethod
    def printgood(string):
        print("this is good " + string)

harry = Employee("Harry", 455, "Instructor")
rohan = Employee("Rohan", 45500, "CEO")
karan = Employee.from_dash("Karan-480-Student")

# harry.name = "Harry"
# harry.salary = 455
# harry.role = "Instrcutor"
#
# rohan.name = "Rohan"
# rohan.salary = 45500
# rohan.role = "CEO"

# print(rohan.printdetails())
# print(harry.printdetails())

# rohan.change_leaves(56)
# print(harry.no_of_leaves)

# print(karan.salary)

karan.printgood("Karan")