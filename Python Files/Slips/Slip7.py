# Q.1) Write a Python program to find maximum and the minimum value in a set. 

my_set = {10,20,30,1001,5,1,101,200}

print("Maximum : ",max(my_set))
print("Minimum : ",min(my_set))




# Q.2) Write a Python script to generate and print a dictionary that contains a number 
# (between 1 to n) in the form (x, x*x).
# Sample Dictionary (n = 5): Expected Output: {1: 1, 2: 4, 3: 9, 4: 16, 5: 25} 

n = int(input("Enter a number : "))
numbers = {x : x * x for x in range(1,n+1)}
print(numbers)

# --------------- OR -----------------------


# Q.2) Write a Python program to unpack a tuple in several variables. Display type of each
# variable.

tup = (102,"Hey",{5:"Hello"},'P')
a, b, c, d = tup
print(type(a))
print(type(b))
print(type(c))
print(type(d))