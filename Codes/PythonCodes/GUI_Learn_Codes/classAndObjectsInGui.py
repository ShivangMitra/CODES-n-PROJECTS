from tkinter import *

class GUI(Tk):
    def __init__(self):
        #self is our root now
        super().__init__()
        self.geometry("555x333")
        self.title("Class n Objects")

    def status(self):
        self.var = StringVar()
        self.var.set("Ready")
        self.statusbar = Label(self, textvariable=self.var, relief=SUNKEN, anchor=W)
        self.statusbar.pack(side=BOTTOM, fill=X)

    def click(self):
        self.var.set("Busy...")
        self.statusbar.update()
        import time
        time.sleep(2)
        self.var.set("Ready Now")

    def createButton(self, inptext):
        Button(text=inptext, command=self.click).pack()

if __name__ == '__main__':
    #here the object window is now the root
    window = GUI()
    window.status()
    window.createButton("RUN")
    window.mainloop()