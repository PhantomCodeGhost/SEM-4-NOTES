# Q.1) Write a Python program to create a tuple of n numbers and print maximum, minimum, and sum of elements in a tuple. 

# Create a tuple of n numbers
n = int(input("Enter how many numbers you want in the tuple: "))
numbers = tuple(int(input(f"Enter number {i+1}: ")) for i in range(n))

print("Maximum value:", max(numbers))
print("Minimum value:", min(numbers))
print("Sum of elements:", sum(numbers))


# Q.2) Write a Python program which accept an integer value ‘n’ and display all prime numbers
# till ‘n’

n = int(input("Enter a number: "))
print("Prime numbers:", [x for x in range(2, n+1) if all(x % y != 0 for y in range(2, x))])
    

# Checks each number x from 2 to n:

# all(x % y != 0 for y in range(2, x)) checks if x is divisible by any number from 2 to x-1

# If not divisible by any, it's prime

# Prints all prime numbers found