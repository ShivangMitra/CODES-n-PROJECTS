from tkinter import *
from textblob import TextBlob

root = Tk()
root.geometry("555x333")
root.title("Spell Check")
root.configure(background="#343434")

label = Label()

def checkSpelling():
    global label
    label.destroy()
    correction = TextBlob(entry.get())
    correction = correction.correct()
    if correction == entry.get():
        label = Label(root, text="No errors found", bg="#343434", fg="orange", font="lucida 12 bold")
        label.pack(pady=15)
    else:
        label = Label(root,text=correction, bg="#343434", fg="orange", font="lucida 12 bold")
        label.pack(pady=15)

Label(root,text="Enter string below", bg="#343434", fg="orange", font="lucida 15 bold").pack()

entry = Entry(root, bg="orange", fg="black", font="lucida 12", relief=SUNKEN)
entry.pack(pady=50)

btn = Button(root, text="Check for errors", command=checkSpelling, bg="#343434", fg="orange", borderwidth=5, font="lucida 10 bold")
btn.pack()


root.mainloop()