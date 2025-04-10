# Q.1) Write a program which prints Fibonacci series of a number.

n = int(input("How many numbers? "))
a, b = 0, 1

for _ in range(n):
    print(a, end=' ')
    a, b = b, a + b



# Q.2) Write a Python program to generate and print a dictionary that contains a number (between
# 1 and n) in the form (x, x*x).
# Sample Dictionary (n = 5)
# Expected Output: {1: 1, 2: 4, 3: 9, 4: 16, 5: 25} 

n = 5
my_dict = dict({x : x*x for x in range(1,n+1)})
print(my_dict)