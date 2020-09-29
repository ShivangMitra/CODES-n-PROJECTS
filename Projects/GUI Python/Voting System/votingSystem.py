from tkinter import *

root = Tk()
root.title("ZephVoting")
root.geometry("555x333")
root.configure(background="#263D42")

firstRun = True
voterList = [1,2,3,47,9]
votedList = []
candidate_dict = {
    "Modi": 0,
    "Rahul": 0
}

def destroy(label):
    label.destroy()
    if voterList == votedList:
        frame = Frame(root, height=333, width=555, bg="#263D42")
        frame.place(relheight=1, relwidth=1)
        Label(frame, text="Voting has finished", font="lucida 25 bold", fg="white", bg="#263D42").pack(pady=20)
        Label(frame, text=f"{max(candidate_dict, key= candidate_dict.get)} WON!", font="lucida 25 bold", fg="white", bg="#263D42").pack(pady=20)


def recorded(voting_frame):
    voting_frame.destroy()
    label = Label(root, text="Your Vote Has Been Recorded", font="lucida 25 bold", fg="white", bg="#263D42")
    label.place(relheight=1, relwidth=1)
    label.after(3000, lambda: destroy(label))

def voting():
    voting_frame = Frame(root, height=333, width=555, bg="#263D42")
    voting_frame.place(relheight=1, relwidth=1)
    Label(voting_frame, text= "Please Provide Your Valuable Vote", font="lucida 25 bold", fg="white", bg="#263D42").pack()

    var = StringVar()
    var.set("NATO")

    radio = Radiobutton(voting_frame, text="Modi", variable=var, value="Modi").pack(pady=20)
    radio = Radiobutton(voting_frame, text="Rahul", variable=var, value="Rahul").pack(pady=20)
    radio = Radiobutton(voting_frame, text="NATO", variable=var, value="NATO").pack(pady=20)

    for key in candidate_dict:
        if key == var:
            candidate_dict[key]+=1

    Button(voting_frame, text="VOTE", command=lambda: recorded(voting_frame)).pack()

def checkId(identry, label):
    if int(identry.get()) not in voterList:
        label.config(text="You are not a Voter")
    else:
        if int(identry.get()) in votedList:
            label.config(text="You have already Voted")
        else:
            label.config(text="")
            votedList.append(int(identry.get()))
            voting()

def initial_frame_delete():
    initial_frame.destroy()
    voter_id_frame = Frame(root, height=333, width=555, bg="#263D42")
    voter_id_frame.pack()
    idlabel = Label(voter_id_frame, text="Enter Your Voter Id Below", fg="white", bg="#263D42", font="lucida 15 bold")
    idlabel.pack(pady=20)
    identry = Entry(voter_id_frame, font="lucida 15")
    identry.pack(pady=20)
    Button(voter_id_frame, text="Enter", font="lucida 15 bold", command=lambda: checkId(identry, label)).pack(pady=20)
    label = Label(voter_id_frame, text="", fg="white", bg="#263D42", font="lucida 15 bold")
    label.pack()


initial_frame = Frame(root, height=333, width=555, bg="#263D42")
initial_frame.pack()
label = Label(initial_frame, text="Welcome to ZephVoting", fg="white", bg="#263D42", font="lucida 25 bold")
label.pack(pady=140)
initial_frame.after(3000, initial_frame_delete)


root.mainloop()