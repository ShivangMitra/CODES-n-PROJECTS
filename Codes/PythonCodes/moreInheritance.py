class Employee:
    no_of_leaves = 8
    var = 8
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


class Player:
    no_of_games = 4
    var = 9
    def __init__(self, name, game):
        self.name = name
        self.game = game

    def printdetails(self):
        return f"Name is {self.name} Game is {self.game}"

#order of the parent inheriting class is important
class CoolProgrammer(Employee, Player):
    language = "C++"
    # var = 10

    def printlanguage(self):
        print(self.language)

harry = Employee("Harry", 455, "Instructor")
rohan = Employee("Rohan", 45500, "CEO")

shubham = Player("Shubham", ["cricket"])
karan = CoolProgrammer("Karan", 9999, "Cool Programmer")
karan.printlanguage()
print(karan.printdetails())
print(karan.var)