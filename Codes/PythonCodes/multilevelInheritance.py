class Dad:
    basketball = 1

class Son(Dad):
    dance = 1
    basketball = 20
    def isdance(self):
        return f"Yes i dance {self.dance} numeber of times"

class Grnadson(Son):
    dance = 6
    def isdance(self):
        return f"i am dance\nYes i dance very awesomely {self.dance} number of times"


darry = Dad()
larry = Son()
harry = Grnadson()

print(harry.isdance())
print(harry.basketball)