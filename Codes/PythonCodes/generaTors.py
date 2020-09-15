def gen(n):
    for i in range(n):
        yield i

g = gen(3)
# print(g.__next__())
# print(g.__next__())
# print(g.__next__())
# print(g.__next__())

#for automatically handles the stopping condition for generator
for i in g:
    print(i)

h = "Harry"
ier = iter(h)
print(ier.__next__())
print(ier.__next__())
print(ier.__next__())
# for i in h:
#     print(i)