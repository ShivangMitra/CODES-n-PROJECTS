class Employee:
    no_of_leaves = 8
    var =8 #this is a public variable
    _protec = 9 #only used in this class and classes derived from it
    __priv = 90 #only used inside the class
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

emp = Employee("Harry", 556, "Chantus")
print(emp._protec)
print(emp._Employee__priv) #this is name mangling so that you mistakenly do not use it outside class