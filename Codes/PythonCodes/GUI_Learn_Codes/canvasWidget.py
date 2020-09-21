from tkinter import *

root = Tk()

canvas_width = 800
canvas_height = 400

root.geometry(f"{canvas_width}x{canvas_height}")
root.title("Z ka GUI")

can_widget = Canvas(root, width=canvas_width, height=canvas_height)
can_widget.pack()

can_widget.create_line(0, 0, 800, 400, fill="red")
can_widget.create_line(0, 400, 800, 0, fill="red")

can_widget.create_rectangle(40, 40, 100, 100, fill="blue")

can_widget.create_text(200 ,200, text="Zephyrus")

can_widget.create_oval(145, 180, 255, 220)

root.mainloop()