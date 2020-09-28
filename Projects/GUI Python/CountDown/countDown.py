from tkinter import *
import time

root = Tk()
root.title("Count Down")
root.geometry("555x333")
root.configure(background="#263D42")

def set():
    global user_number
    user_number = int(entry.get())

def counter():
    global user_number
    global label
    if user_number is not 0:
        label.config(text=str(user_number), font="lucida 25 bold", bg="#263D42", fg="white")
        user_number-=1
        label.after(1000,counter)
    elif user_number is 0:
        label.config(text="SKADOOOSH", font="lucida 25 bold", bg="#263D42", fg="white")

user_number = ""
Label(root, text="WELCOME TO COUNTDOWN", font="lucida 15 bold", bg="#263D42", fg="white").pack()
label = Label(root, text=user_number, font="lucida 25 bold", bg="#263D42", fg="white")
label.pack(pady=15)

entry = Entry(root, font="lucida 20 bold", borderwidth=10)
entry.pack(pady=20)

Button(root, text="SET", command=set, padx=20, font="lucida 10 bold", fg="#263D42", borderwidth=5).pack(pady=10)
Button(root, text="START", command=counter, padx=12, font="lucida 10 bold", fg="#263D42", borderwidth=5).pack(pady=10)
# Button(root, text="Stop", command=counter).pack()
# Button(root, text="Reset", command=counter).pack()


root.mainloop()