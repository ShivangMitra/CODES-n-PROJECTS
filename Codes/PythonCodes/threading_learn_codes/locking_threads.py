import threading
import time

class myThread(threading.Thread):
    def __init__(self, threadID, name, count):
        threading.Thread.__init__(self)
        self.threadID = threadID
        self.name = name
        self.count = count

    def run(self):
        print("Starting " + self.name + "\n")
        threadLock.acquire()
        print_time(self.name, self.count, 5)
        threadLock.release()
        print("Exsisting" + self.name + "\n")

class myThread2(threading.Thread):
    def __init__(self, threadID, name, count):
        threading.Thread.__init__(self)
        self.threadID = threadID
        self.name = name
        self.count = count

    def run(self):
        print("Starting " + self.name + "\n")
        threadLock.acquire()
        threadLock.release()
        print_time(self.name, self.count, 5)
        print("Exsisting" + self.name + "\n")

def print_time(threadName, delay, count):
    while count:
        time.sleep(delay)
        print("%s: %s %s" % (threadName, time.ctime(time.time()), count) + "\n")
        count -= 1

threadLock = threading.Lock()

# thread1 = myThread(1, "Thread-1", 1)
# thread2 = myThread(2, "Thread-2", 1.5)
thread1 = myThread2(1, "Payment", 5)
thread2 = myThread2(2, "Sending Email", 10)
thread3 = myThread2(3, "Loading Page", 3)

thread1.start()
thread2.start()
thread3.start()
thread1.join()
thread2.join()
thread3.join()
print("Exiting Main Thread")