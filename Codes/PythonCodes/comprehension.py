# ls = []
# for i in range(100):
#     if i%3==0:
#         ls.append(i)

#this is list comprehension
ls = [i for i in range(100) if i%3==0]

print(ls)


#this is dictionary comprehension
# dict1 = {i:f"item {i}" for i in range(24, 100) if i%4==0}
dict1 = {i:f"item {i}" for i in range(5)}
print(dict1)
dict1 = {value:key for key,value in dict1.items()}
print(dict1)


#this is set comprehension
dresses = {dress for dress in ["dress1", "dress2", "dress1", "dress2", "dress1", "dress2", "dress1", "dress2"]}
print(dresses)


#this is generator comprehension
evens = (i for i in range(100) if i%2==0)
print(type(evens))