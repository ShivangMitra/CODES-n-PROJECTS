from tkinter import *

root = Tk()
root.geometry("555x333")
root.title("Kuch Naya")

root.wm_iconbitmap("Icon.ico")

root.configure(background="gray")

#this is will the size of the screen on which you are currently working on
width = root.winfo_screenwidth()
height = root.winfo_screenheight()
print(f"{width}x{height}")

Button(text="Close", command=root.destroy).pack()


root.mainloop()