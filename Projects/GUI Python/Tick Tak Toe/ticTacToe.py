from tkinter import *

root = Tk()
root.title("Tic Tac Toe")
root.geometry("555x555")
root.configure(background="#343434")

turn = 1
game_list = [0, 1, 2, 3, 4, 5, 6, 7, 8]

def clickedOn(num):
    global turn
    if turn%2 == 1:
        globals()["b"+str(num)].config(text="X", fg="#263D42")
        game_list[num-1] = "X"
        turn+=1
    else:
        globals()["b" + str(num)].config(text="O", fg="#263D42")
        game_list[num-1] = "O"
        turn += 1


    if game_list[0] == game_list[1] == game_list[2] == "X" or game_list[3] == game_list[4] == game_list[5] == "X" or game_list[6] == game_list[7] == game_list[8] == "X" or game_list[0] == game_list[3] == game_list[6] == "X" or game_list[1] == game_list[4] == game_list[7] == "X" or game_list[2] == game_list[5] == game_list[8] == "X" or game_list[0] == game_list[4] == game_list[8] == "X" or game_list[2] == game_list[4] == game_list[6] == "X":
        label.config(text="PLAYER 1 WON!")
    elif game_list[0] == game_list[1] == game_list[2] == "O" or game_list[3] == game_list[4] == game_list[5] == "O" or game_list[6] == game_list[7] == game_list[8] == "O" or game_list[0] == game_list[3] == game_list[6] == "O" or game_list[1] == game_list[4] == game_list[7] == "O" or game_list[2] == game_list[5] == game_list[8] == "O" or game_list[0] == game_list[4] == game_list[8] == "O" or game_list[2] == game_list[4] == game_list[6] == "O":
        label.config(text="PLAYER 2 WON!")

Label(root, text="PLAYER 1: X     PLAYER 2: O", bg="#343434", fg="white", font="lucida 25 bold", pady=10).pack()

frame = Frame(root, bg="#263D42", padx=70, pady=5)
frame.place(relheight=0.8, relwidth=1, rely=0.1)


b1 = Button(frame, text="K", padx=10, pady=0, font="lucida 50 bold", fg="white", bg="white", activeforeground="white", activebackground="white", command=lambda: clickedOn(1))
b1.grid(row=1,column=0, padx=10, pady=5)
b2 = Button(frame, text="K", padx=10, pady=0, font="lucida 50 bold", fg="white", bg="white", activeforeground="white", activebackground="white", command=lambda: clickedOn(2))
b2.grid(row=1,column=1, padx=10, pady=5)
b3 = Button(frame, text="K", padx=10, pady=0, font="lucida 50 bold", fg="white", bg="white", activeforeground="white", activebackground="white", command=lambda: clickedOn(3))
b3.grid(row=1,column=2, padx=10, pady=5)
b4 = Button(frame, text="K", padx=10, pady=0, font="lucida 50 bold", fg="white", bg="white", activeforeground="white", activebackground="white", command=lambda: clickedOn(4))
b4.grid(row=2,column=0, padx=10, pady=5)
b5 = Button(frame, text="K", padx=10, pady=0, font="lucida 50 bold", fg="white", bg="white", activeforeground="white", activebackground="white", command=lambda: clickedOn(5))
b5.grid(row=2,column=1, padx=10, pady=5)
b6 = Button(frame, text="K", padx=10, pady=0, font="lucida 50 bold", fg="white", bg="white", activeforeground="white", activebackground="white", command=lambda: clickedOn(6))
b6.grid(row=2,column=2, padx=10, pady=5)
b7 = Button(frame, text="K", padx=10, pady=0, font="lucida 50 bold", fg="white", bg="white", activeforeground="white", activebackground="white", command=lambda: clickedOn(7))
b7.grid(row=3,column=0, padx=10, pady=5)
b8 = Button(frame, text="K", padx=10, pady=0, font="lucida 50 bold", fg="white", bg="white", activeforeground="white", activebackground="white", command=lambda: clickedOn(8))
b8.grid(row=3,column=1, padx=10, pady=5)
b9 = Button(frame, text="K", padx=10, pady=0, font="lucida 50 bold", fg="white", bg="white", activeforeground="white", activebackground="white", command=lambda: clickedOn(9))
b9.grid(row=3,column=2, padx=10, pady=5)

label = Label(root, text="PLAYER 1's Turn", bg="#343434", fg="white", font="lucida 25 bold", pady=10)
label.pack(side=BOTTOM)


root.mainloop()