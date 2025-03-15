# Q.1) Write Python program to print set difference & symmetric difference of two sets.

a = {1,2,3,4,5}
b = {4,5,6,7,8,9}

print(a.difference(b))

print(a.symmetric_difference(b))

# 2) Write a Python program to display occurrence of the elements in the tuple, which appears
# more than 2 times

my_tuple = (10,10,20,20,10,8,8,9,7,20,15)
for i in set(my_tuple):
    if my_tuple.count(i) > 2:
        print(i,":",my_tuple.count(i))
