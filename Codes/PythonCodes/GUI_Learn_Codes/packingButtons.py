from tkinter import *
root = Tk()

root.geometry("655x333")

def hello():
    print("Hello tkinter Buttons")

def name():
    print("My name is Shivang")

frame = Frame(root, borderwidth=6, bg="gray", relief=SUNKEN)
frame.pack(side=LEFT, anchor="nw")

b1 = Button(frame, fg="red", text="Greeting", command=hello)
b1.pack(side=LEFT, padx=23)

b2 = Button(frame, fg="red", text="What is ur name", command=name)
b2.pack(side=LEFT, padx=23)

b3 = Button(frame, fg="red", text="Print Now")
b3.pack(side=LEFT, padx=23)

b4 = Button(frame, fg="red", text="Print Now")
b4.pack(side=LEFT, padx=23)

root.mainloop()