l=["Bhindi", "aloo", "chopsticks", "chowmein"]

i=0
for item in l:
    if i%2 is 0:
        print(f"Jarvis pls buy {item}")
    i = i+1

for index, item in enumerate(l):
    if index%2 is 0:
        print(f"Jarvis pls buy {item}")