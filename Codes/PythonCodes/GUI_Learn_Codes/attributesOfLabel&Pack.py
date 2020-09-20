from tkinter import *

root = Tk()

root.geometry("744x433")

root.title("Zephyrus'GUI")

# root.minsize(200, 100)
# root.maxsize(1200, 988)

#important label options
# text = adds the text
# bd = background
# fg = foreground
# font = sets the font
# font=("comicsansms", 19, "bold")
# padx = padding in x
# pady = padding in y
# relief = border styling - SUNKEN, RAISED, GROOVE, RIDGE

title_label = Label(text='''
Chintu is an Indian 
\nfilm actor, producer, occasional playback singer and television personality. In a film career spanning 
\nalmost thirty years, Khan has received numerous awards, including two National Film Awards as a film 
\nproducer, and two Filmfare Awards for acting. He has a significant following in Asia and the Indian 
\ndiaspora worldwide, and is cited in the media as one of the most commercially successful actors of Indian 
\ncinema. According to the Forbes 2018 list of Top-Paid 100 Celebrity Entertainers in world, Khan was 
\nthe highest ranked Indian with 82nd rank with earnings of $37.7 million.''', bg="red", fg="white", padx=13, pady=94, font="comicsansms 9 bold", borderwidth=3, relief=SUNKEN)

#important pack options
# anchor = nw
# side = top, bottom, left, right
# fill
# padx
# pady

title_label.pack(side=BOTTOM, anchor="nw", fill=X)
title_label.pack(side=LEFT, fill=Y, padx=34, pady=34)

root.mainloop()