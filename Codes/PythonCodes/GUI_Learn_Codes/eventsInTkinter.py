from tkinter import *

def harry(event):
    print(f"You clicked on the Button at {event.x},{event.y}")

root = Tk()
root.geometry("644x344")

widget = Button(root, text="Click me please")
widget.pack()

widget.bind('<Button-1>', harry)
widget.bind('<Double-1>', quit)

root.mainloop()