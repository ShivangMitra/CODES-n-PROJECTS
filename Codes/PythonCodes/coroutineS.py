def searcher():
    import time
    # some 4 sec time consuming task
    book = "This is a book on harry and code with harry"
    time.sleep(4)

    while(True):
        text = (yield)
        if text in book:
            print("ur text is in the book")
        else:
            print("text is not in the book")

search = searcher()#we created an instance of this coroutine
print("search started")
next(search)
print("Next method ran")
search.send("harry")
input("press any key\n")
search.send("harry and")

search.close()#releasing all the resouces when work is done