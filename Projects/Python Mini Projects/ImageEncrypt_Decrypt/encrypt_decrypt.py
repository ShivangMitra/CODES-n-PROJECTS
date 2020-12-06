from tkinter import *
from tkinter import filedialog

root = Tk()
root.geometry("700x400")

def encrypt_decrypt_img():
    file1 = filedialog.askopenfile(mode="r", filetype=[("jpg file", "*.jpg")])
    if file1 is not None:
        file_name = file1.name
        key = entry1.get(1.0, END)
        f = open(file_name, "rb")
        image = f.read()
        f.close()
        image = bytearray(image)
        for index, values in enumerate(image):
            image[index] = values^int(key)
        f = open(file_name, "wb")
        f.write(image)
        f.close()

b1 = Button(root, text="encrypt / decrypt", command=encrypt_decrypt_img)
b1.place(x=300, y=140)

entry1 = Text(root, height=1, width=10)
entry1.place(x=310, y=190)

root.mainloop()