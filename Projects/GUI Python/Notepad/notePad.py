from tkinter import *
from tkinter.messagebox import showinfo
from tkinter.filedialog import askopenfilename, asksaveasfilename
import os

def newFile():
    global file
    root.title("Untitled - Notepad")
    file = None
    textArea.delete(1.0, END) #1.0 means from first line's zeroth character then till END delete everything

def openFile():
    global file
    file = askopenfilename(defaultextension=".txt", filetypes=[("All Files", "*.*"), ("Text Documents", "*.txt")])
    if file == "":
        file=None
    else:
        root.title(os.path.basename(file) + " - Notepad_Personal")
        textArea.delete(1.0, END)
        f = open(file, "r")
        textArea.insert(1.0, f.read())
        f.close()

def saveFile():
    global file
    if file == None:
        file = asksaveasfilename(initialfile="Untitled.txt", defaultextension=".txt", filetypes=[("All Files", "*.*"), ("Text Documents", "*.txt")])

        if file =="":
            file = None

        else:
            #Save as a new file
            f = open(file, "w")
            f.write(textArea.get(1.0, END))
            f.close()

            root.title(os.path.basename(file) + " - Notepad_Personal")

    else:
        # Save the file
        f = open(file, "w")
        f.write(textArea.get(1.0, END))
        f.close()


def quitApp():
    root.destroy()

def cut():
    textArea.event_generate(("<<Cut>>"))

def copy():
    textArea.event_generate(("<<Copy>>"))

def paste():
    textArea.event_generate(("<<Paste>>"))

def about():
    showinfo("Notepad_Personal", "Notepad by Shivang Mitra")

if __name__ == '__main__':
    #Basic tkinter setup
    root = Tk()
    root.title("Untitled - Notepad_Personal")
    root.wm_iconbitmap("noteicon.ico")
    root.geometry("755x533")

    #Add TextArea
    textArea = Text(root, font="lucida 13", background="#434343", foreground="white", cursor="arrow")
    file = None
    textArea.pack(expand=True, fill=BOTH)

    #Creating a menu bar
    # menuBar = Menu(root, background="#434343", foreground="orange", activebackground="orange", activeforeground="#434343") not working
    menuBar = Menu(root)

    #FILE MENU STARTS
    fileMenu = Menu(menuBar, tearoff=0, background="#434343", foreground="orange", activebackground="orange", activeforeground="#434343", font="lucida 10 bold")

    #To open new file
    fileMenu.add_command(label="New", command=newFile)

    #To open a already existing file
    fileMenu.add_command(label="Open", command=openFile)

    #To save the current file
    fileMenu.add_command(label="Save", command=saveFile)

    fileMenu.add_separator()

    fileMenu.add_command(label="Exit", command=quitApp)
    menuBar.add_cascade(label="File", menu=fileMenu)
    #FILE MENU ENDS


    #EDIT MENU STARTS
    editMenu = Menu(menuBar, tearoff=0, background="#434343", foreground="orange", activebackground="orange", activeforeground="#434343", font="lucida 10 bold")

    #To give a feature of cut
    editMenu.add_command(label="Cut", command=cut)

    #To give a feature of copy
    editMenu.add_command(label="Copy", command=copy)

    #To give a feature of paste
    editMenu.add_command(label="Paste", command=paste)
    menuBar.add_cascade(label="Edit", menu=editMenu)
    #EDIT MENU ENDS


    #HELP MENU STARTS
    helpMenu = Menu(menuBar, tearoff=0, background="#434343", foreground="orange", activebackground="orange", activeforeground="#434343", font="lucida 10 bold")
    helpMenu.add_command(label="About Notepad", command=about)
    menuBar.add_cascade(label="Help", menu=helpMenu)

    # root.config(bg="#2A2C2B", menu=menuBar) not working
    root.config(menu=menuBar)

    #Adding scrollbar
    scrollBar = Scrollbar(textArea)
    scrollBar.pack(side=RIGHT, fill=Y)
    scrollBar.config(command=textArea.yview)
    textArea.config(yscrollcommand=scrollBar.set)

    root.mainloop()