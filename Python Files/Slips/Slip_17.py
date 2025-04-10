# Q.1) Write a Python program to accept and convert string in uppercase or vice versa.
string1 = "Hello"
string2 = "Bro"
upper = string1.upper()
lower = string2.lower()
print(upper,lower)


# Q.2) Write a Python program which accepts an integer value ‘n’ and display all prime numbers till ‘n’. 

n = int(input("Enter a number: "))
print("Prime numbers:", [x for x in range(2, n+1) if all(x % y != 0 for y in range(2, x))])