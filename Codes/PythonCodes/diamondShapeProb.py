class A:
    def met(self):
        print("this is a method from class A")

class B(A):
    def met(self):
        print("this is a method from class B")

class C(A):
    def met(self):
        print("this is a method from class C")

#order is imp
class D(B, C):
    def met(self):
        print("this is a method from class D")


a = A()
b = B()
c = C()
d = D()

d.met()