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

#this is a dunder method
    def __add__(self, other):
        return self.salary + other.salary
    #this will overload the + operator

    def __truediv__(self, other):
        return self.salary / other.salary
    #this overloads the / operator

    def __repr__(self):
        return f"Employee('{self.name}', {self.salary}, '{self.role}')"

    def __str__(self):
        return f"Name is {self.name} - Salary is {self.salary} and role is {self.role}"


#search "mapping operators to functions" for more functions like this
emp1 = Employee("Harry", 45, "Programmer")
emp2 = Employee("Rohan", 9, "Cleaner")
print(emp1 + emp2) #this runs a dunder method
print(emp1 / emp2)
print(emp1)#this prefers str method more than repr method
print(repr(emp1))