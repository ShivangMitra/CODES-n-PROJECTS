from tkinter import *

root = Tk()
root.title("Zephora")
root.geometry("555x333")
root.configure(background="#263D42")

def login():
    frame.destroy()
    login_frame = Frame(root, height=333, width=555, bg="#263D42")
    login_frame.pack()
    email_label = Label(login_frame, text="Enter Email", font="lucida 15", fg="white", bg="#263D42")
    email_label.grid(row=1, column=0, sticky=W, pady=20, padx=10)
    email_entry = Entry(login_frame, font="Time 15")
    email_entry.grid(row=1, column=1)
    passwrd_label = Label(login_frame, text="Enter Password", font="lucida 15", fg="white", bg="#263D42")
    passwrd_label.grid(row=2, column=0, sticky=W, pady=20, padx=10)
    passwrd_entry = Entry(login_frame, font="Time 15")
    passwrd_entry.grid(row=2, column=1)
    Button(login_frame, text="Login", font="lucida 15", padx=20).grid(row=3, column=1)

def signUp():
    frame.destroy()
    login_frame = Frame(root, height=333, width=555, bg="#263D42")
    login_frame.pack()
    user_label = Label(login_frame, text="Enter Username", font="lucida 15", fg="white", bg="#263D42")
    user_label.grid(row=0, column=0, sticky=W, pady=20, padx=10)
    user_entry = Entry(login_frame, font="Time 15")
    user_entry.grid(row=0, column=1)
    email_label = Label(login_frame, text="Enter Email", font="lucida 15", fg="white", bg="#263D42")
    email_label.grid(row=1, column=0, sticky=W, pady=20, padx=10)
    email_entry = Entry(login_frame, font="Time 15")
    email_entry.grid(row=1, column=1)
    passwrd_label = Label(login_frame, text="Enter Password", font="lucida 15", fg="white", bg="#263D42")
    passwrd_label.grid(row=2, column=0, sticky=W, pady=20, padx=10)
    passwrd_entry = Entry(login_frame, font="Time 15")
    passwrd_entry.grid(row=2, column=1)
    Button(login_frame, text="Sign Up", font="lucida 15", padx=20).grid(row=3, column=1)

frame = Frame(root, height=333, width=555, bg="#263D42")
frame.pack()

Label(frame, text="What would you like to do", font="lucida 25", fg="white", bg="#263D42").pack(pady=50)
Button(frame, text="Login", command=login, font="lucida 15", padx=20).pack(side=LEFT)
Button(frame, text="Sign Up", command=signUp, font="lucida 15", padx=15).pack(side=RIGHT)


root.mainloop()