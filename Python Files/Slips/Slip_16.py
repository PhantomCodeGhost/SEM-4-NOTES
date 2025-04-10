# Q.1) Write a Python program to create tuple of n numbers, print the first half values of tuple in
# one line and the last half values of tuple on next line. 


n = int(input("How many numbers? "))
values = tuple(int(input(f"Enter number {i + 1}: ")) for i in range(n))

# Find the midpoint of the tuple
mid = len(values) // 2

# Print the first half in one line
print(" ".join(map(str, values[:mid])))

# Print the second half in the next line
print(" ".join(map(str, values[mid:])))



# Q.2) Write a program which prints Fibonacci series of a number.

n = int(input("How many numbers? "))
a, b = 0, 1

for _ in range(n):
    print(a, end=' ')
    a, b = b, a + b
