# Q.1) Write a Python program to unpack a tuple in several variables.

tup = (102,"Hey",{5:"Hello"},'P')
a, b, c, d = tup
print(type(a))
print(type(b))
print(type(c))
print(type(d))


# Q.2) Write a Python script to generate and print a dictionary that contains a number (between 1
# to n) in the form (x, x*x).
# Sample Dictionary (n = 5): Expected Output: {1: 1, 2: 4, 3: 9, 4: 16, 5: 25}

n = int(input("Enter a number : "))
numbers = {x : x * x for x in range(1,n+1)}
print(numbers)



