import time
from functools import lru_cache

@lru_cache(maxsize=32)#max size stores max number of calls you want to store
def some_work(n):
    time.sleep(n)
    return n

if __name__ == '__main__':
    print("now running some work")
    some_work(3)
    some_work(1)
    some_work(2)
    some_work(4)
    print("DONE!. . . Calling Again")
    input()
    some_work(3)
    print("Called again")