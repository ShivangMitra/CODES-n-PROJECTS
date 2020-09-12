import time

initial=time.time()
print(initial)
k=0
while(k<45):
    print("Yo WASSSAAAAAAAAAAAAP")
    time.sleep(2)
    k+=1
print("while loop ran for", time.time()-initial, "secs")

initial2=time.time()
print(initial2)
for i in range(45):
    print("Yo WASSSAAAAAAAAAAAAP")
print("for loop ran for", time.time()-initial2, "secs")

localtime=time.asctime(time.localtime(time.time()))
print(localtime)