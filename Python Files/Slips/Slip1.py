# Q.1) Write a Python function to check whether a number is in a given range. 

number = [10,20,30,40]
def fetch(num):
    for i in number:
        if (i == num):
            print("Exists")
        
print(fetch(40))


--------------------

# Q.2) Write a Python program to find set difference, union, intersection and symmetric difference.

a = {1,2,3,4,5}
b = {4,5,6,7,8,9}

print(a.difference(b)) # Diplays Set 'a' Exclusive elements only

# Diplays Both set Elements No Duplication
print(a.union(b))
    #OR
print(a|b) 

# Diplays same Elements from both set once.
print(a.intersection(b))
    #OR
print(a&b) 

# Same as union() but excludes intersected Elements.
print(a.symmetric_difference(b)) 




# ------------------OR---------------------------------



# Q2) Write a Python program to print a dictionary where the keys are numbers between 1 and 
# 15 (both included) and the values are square of keys. 
# Sample Dictionary: {10: 100, 20: 400, 30: 900, 40: 1600, 50: 2500} 

n = 15
numbers = {x: x* x for x in range(1,n+1)}
print(numbers.items())
