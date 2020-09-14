from abc import ABCMeta, abstractmethod
# from abc import ABC,abstractmethod
#class Shape(ABC):
#will work the same
class Shape(metaclass=ABCMeta):
    #this will tell the classes inheriting from this class to implement some functions (compulsory)
    @abstractmethod
    def printarea(self):
        return 0

class Rectangle(Shape):
    type = "rectangle"
    sides = 4

    def __init__(self):
        self.length = 6
        self.breath = 7

    def printarea(self):
        return self.length * self.breath

rect1 = Rectangle()
print(rect1.printarea())