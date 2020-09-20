from tkinter import *
from PIL import Image, ImageTk

root = Tk()

root.geometry("644x434")

root.title("Zephyrus'GUI")

root.minsize(200, 100)

root.maxsize(1200, 988)

zeph = Label(text="This is Z's GUI")
zeph.pack()

photo = PhotoImage(file="R09Z2.png")
z_label = Label(image=photo)
z_label.pack()

#for jpg images

image = Image.open("minions.jpg")
photo2 = ImageTk.PhotoImage(image)
z_label2 = Label(image=photo2)
z_label2.pack()

root.mainloop()