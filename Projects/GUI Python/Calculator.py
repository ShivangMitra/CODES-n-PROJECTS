from tkinter import *

def click(event):
    text = event.widget.cget("text")
    # print(text)

    if text=="=":
        if scvalue.get().isdigit():
            value = int(scvalue.get())

        else:
            try:
                value = eval(screen.get())
            except Exception as e:
                print(e)
                value = "Error"


        scvalue.set(value)

    elif text=="C":
        scvalue.set("")

    else:
        scvalue.set(f"{scvalue.get()}{text}")


root = Tk()
root.geometry("500x670")
root.title("Z ka personal calculator")
root.wm_iconbitmap("Calc.ico")
root.configure(background="gray")

scvalue = StringVar()
scvalue.set("")
screen = Entry(root, textvar=scvalue, font="lucida 40 bold", relief=SUNKEN, borderwidth=10)
screen.pack(pady=10, padx=10)

lst = ["9", "8", "7", "+", "6", "5", "4", "-", "3", "2", "1", "/", "C", "0", "=", "*", ".", "%"]

frame = Frame(root, bg="gray")
for item in lst:
    if lst.index(item)%4==0 and lst.index(item) is not 0:
        frame = Frame(root, bg="gray")
        btn = Button(frame, text=item, padx=20, font="lucida 35 bold", background="orange", relief=RAISED, borderwidth=5)
        btn.pack(side=LEFT, padx=10, pady=5)
        btn.bind("<Button-1>", click)
        frame.pack()
    else:
        btn = Button(frame, text=item, padx=20, font="lucida 35 bold", background="orange", relief=RAISED, borderwidth=5)
        btn.pack(side=LEFT, padx=10, pady=5)
        btn.bind("<Button-1>", click)
        frame.pack()

# btn = Button(frame, text="8", padx=20, font="lucida 35 bold")
# btn.pack(side=LEFT, padx=10)
# btn.bind("<Button-1>", click)
#
# btn = Button(frame, text="7", padx=20, font="lucida 35 bold")
# btn.pack(side=LEFT, padx=10)
# btn.bind("<Button-1>", click)
# frame.pack()

root.mainloop()