class Employee:
    no_of_leaves = 8
#constructor
    def __init__(self, name, salary, role):
        self.name = name
        self.salary = salary
        self.role = role

    def printdetails(self):
        return f"Name is {self.name} - Salary is {self.salary} and role is {self.role}"

harry = Employee("Harry", 455, "Instructor")
rohan = Employee("Rohan", 45500, "CEO")

# harry.name = "Harry"
# harry.salary = 455
# harry.role = "Instrcutor"
#
# rohan.name = "Rohan"
# rohan.salary = 45500
# rohan.role = "CEO"

print(rohan.printdetails())
print(harry.printdetails())