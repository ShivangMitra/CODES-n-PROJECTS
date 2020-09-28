from tkinter import *
from tkinter import filedialog
import os

root = Tk()
root.title("M.A.R.")

apps = []

if os.path.isfile("save.txt"):
    with open("save.txt", "r") as f:
        tempApps = f.read()
        apps = tempApps.split("\n")[0:-1]
        print(apps)

def addApp():
    for widget in frame.winfo_children():
        widget.destroy()


    filename = filedialog.askopenfilename(initialdir="/", title="Select file", filetypes=(("executables","*.exe"), ("all files","*.*")))


    apps.append(filename)
    for app in apps:
        label = Label(frame, text=app, bg="gray")
        label.pack()


def runApp():
    for app in apps:
        os.startfile(app)


canvas = Canvas(root, height=700, width=700, bg="#263D42")
canvas.pack()

frame = Frame(root, bg="white")
frame.place(relheight=0.8, relwidth=0.8, relx=0.1, rely=0.1)

openFile = Button(root, text="Open File", padx=10, pady=5, fg="white", bg="#263D42", command=addApp)
openFile.pack()
runApps = Button(root, text="Run Apps", padx=10, pady=5, fg="white", bg="#263D42", command=runApp)
runApps.pack()

for app in apps:
    label = Label(frame, text=app, bg="gray")
    label.pack()

root.mainloop()

with open("save.txt", "w") as f:
    for app in apps:
        f.write(app + "\n")