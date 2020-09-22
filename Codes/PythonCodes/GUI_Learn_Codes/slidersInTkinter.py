from tkinter import *
import tkinter.messagebox as tmsg

root = Tk()
root.geometry("455x233")
root.title("Best Chicks in Town")

def getchicks():
    tmsg.showinfo("Chicks Supplied", f"We have supplied the best {myslider2.get()} chicks to your house")

# myslider1 = Scale(root, from_=0, to=100)
# myslider1.pack()

Label(root, text="How many chicks do you want?").pack()

myslider2 = Scale(root, from_=0, to=10, orient=HORIZONTAL, tickinterval=2)
myslider2.set(3)
myslider2.pack()

Button(root, text="Get Chicks!", command=getchicks).pack()


root.mainloop()