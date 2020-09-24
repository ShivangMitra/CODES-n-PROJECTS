from tkinter import *

root = Tk()
root.geometry("555x333")
root.title("Status Bar")

def upload():
    statusvar.set("Busy. . .")
    sbar.update()
    import time
    time.sleep(3)
    statusvar.set("Ready Now")

statusvar = StringVar()
statusvar.set("Ready")

sbar = Label(root, textvariable=statusvar, relief=SUNKEN, anchor=W)
sbar.pack(side=BOTTOM, fill=X)

Button(root, text="Upload", command=upload).pack()


root.mainloop()