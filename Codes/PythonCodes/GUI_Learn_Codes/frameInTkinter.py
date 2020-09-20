from tkinter import *
root = Tk()

root.geometry("500x500")

f1 = Frame(root, bg="gray", borderwidth=6, relief=SUNKEN)
f1.pack(side=LEFT, fill=Y)
# f1.pack(side=LEFT, fill=Y, pady=122)

f2 = Frame(root, borderwidth=8, bg="gray", relief=SUNKEN)
f2.pack(side=TOP, fill=X)

l=Label(f1, text="Project Z - Pycharm")
l.pack(pady=142)

l=Label(f2, text="WELCOME TO Zephlime Text", font="Helvetica 16 bold", fg="red", pady=5)
l.pack()

root.mainloop()