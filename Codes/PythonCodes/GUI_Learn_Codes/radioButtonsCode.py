from tkinter import *
import tkinter.messagebox as tmsg

root = Tk()
root.geometry("455x233")
root.title("RJ Zeph")

def order():
    tmsg.showinfo("Order Received", f"We have received your order for {var.get()} thanks for ordering")

# var = IntVar()
# var.set(1)

var = StringVar()
var.set("Radio")

Label(root, text="What would you like to have Sir?", font="lucida 15 bold", justify=LEFT, padx=14).pack()

radio = Radiobutton(root, text="Dosa", padx=14, variable=var, value="Dosa").pack(anchor="w")
radio = Radiobutton(root, text="Idli", padx=14, variable=var, value="Idli").pack(anchor="w")
radio = Radiobutton(root, text="Paratha", padx=14, variable=var, value="Paratha").pack(anchor="w")
radio = Radiobutton(root, text="Samosa", padx=14, variable=var, value="Samosa").pack(anchor="w")

Button(text="Order Now", command=order).pack()


root.mainloop()