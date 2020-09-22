from tkinter import *

root = Tk()
root.geometry("555x333")
root.title("Zeph's list box")

def add():
    global i
    lbx.insert(ACTIVE, f"{i}")
    i+=1
i = 0

lbx = Listbox(root)
lbx.pack()
lbx.insert(END, "First Itemof our List Box")

Button(root, text="Add Item", command=add).pack()


root.mainloop()