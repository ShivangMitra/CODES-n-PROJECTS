from tkinter import *

root = Tk()
root.geometry("644x344")

def getvals():
    print("Submitting Form")

    print(f"{namevalue.get()}, {phonevalue.get()}, {gendervalue.get()}, {emergency_contact_value.get()}, {payment_mode_value.get()}, {food_service_value.get()}")

    with open("records.txt", "a") as f:
        f.write(f"{namevalue.get()}, {phonevalue.get()}, {gendervalue.get()}, {emergency_contact_value.get()}, {payment_mode_value.get()}, {food_service_value.get()}\n")

Label(root, text="Welcome to Zeph Travels", font="comicsansms 13 bold", pady=15, padx=50).grid(row=0, column=3)
name = Label(root, text="Name")
phone = Label(root, text="Phone")
gender = Label(root, text="Gender")
emergency_contact = Label(root, text="Emergency Contact")
payment_mode = Label(root, text="Payment Mode")

name.grid(row=1, column=2, padx=70)
phone.grid(row=2, column=2)
gender.grid(row=3, column=2)
emergency_contact.grid(row=4, column=2)
payment_mode.grid(row=5, column=2)

namevalue = StringVar()
phonevalue = StringVar()
gendervalue = StringVar()
emergency_contact_value = StringVar()
payment_mode_value = StringVar()
food_service_value = IntVar()

nameentry = Entry(root, textvariable=namevalue)
phoneentry = Entry(root, textvariable=phonevalue)
genderentry = Entry(root, textvariable=gendervalue)
emergency_contact_entry = Entry(root, textvariable=emergency_contact_value)
payment_mode_entry = Entry(root, textvariable=payment_mode_value)

nameentry.grid(row=1, column=3)
phoneentry.grid(row=2, column=3)
genderentry.grid(row=3, column=3)
emergency_contact_entry.grid(row=4, column=3)
payment_mode_entry.grid(row=5, column=3)

#checkbox
food_service = Checkbutton(text="Want to prebook your meals?", variable=food_service_value)
food_service.grid(row=6, column=3)

Button(text="Submit to Zeph Travels", command=getvals).grid(row=7, column=3)

root.mainloop()