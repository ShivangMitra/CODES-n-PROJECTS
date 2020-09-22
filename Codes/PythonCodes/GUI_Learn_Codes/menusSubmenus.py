from tkinter import *
import tkinter.messagebox as tmsg

root = Tk()
root.geometry("733x566")
root.title("Zephyrus")

def myfunc():
    print("mai duniya ka sabse bada playboy")

def help():
    tmsg.showinfo("Help", "Zephyrus will help you with this GUI")
    #return value is ok

def rate():
    value = tmsg.askquestion("Your Experience", "You used this GUI...how was your experience?")
    #return value is yes or no
    if value == "yes":
        msg = "Great. Rate us on appstore please"
    else:
        msg = "Tell us what went wrong and we will call you soon"
    tmsg.showinfo("Experience", msg)

def chintu():
    ans = tmsg.askretrycancel("Chintu bohot bakar aadmi hai", "Ji haan bilkul sahi baat")
    if ans:
        print("Retry karne se baat nai badal jaegi chantus")
    else:
        print("Bohot badiya cancel kar diya...bach gye tum")

#non drop down menu
# my_menu = Menu(root)
# my_menu.add_command(label="File", command=myfunc)
# my_menu.add_command(label="Exit", command=quit)
# root.config(menu=my_menu)

main_menu = Menu(root)
m1 = Menu(main_menu, tearoff=0)
m1.add_command(label="New Project", command=myfunc)
m1.add_command(label="Save", command=myfunc)
m1.add_separator()
m1.add_command(label="Save As", command=myfunc)
m1.add_command(label="Print", command=myfunc)
main_menu.add_cascade(label="File", menu=m1)
root.config(menu=main_menu)


m2 = Menu(main_menu, tearoff=0)
m2.add_command(label="Cut", command=myfunc)
m2.add_command(label="Copy", command=myfunc)
m2.add_separator()
m2.add_command(label="Paste", command=myfunc)
m2.add_command(label="Undo", command=myfunc)
main_menu.add_cascade(label="Edit", menu=m2)
root.config(menu=main_menu)


m3 = Menu(main_menu, tearoff=0)
m3.add_command(label="Help", command=help)
m3.add_command(label="Rate Us", command=rate)
m3.add_command(label="Chintu", command=chintu)
main_menu.add_cascade(label="Help", menu=m3)
root.config(menu=main_menu)


root.mainloop()