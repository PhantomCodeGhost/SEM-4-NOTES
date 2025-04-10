# Q.1) Write a python program to check if a string is a Palindrome or not.

def Palindrome(string):
    if string == string[::-1]:
        return f"The {string} is a Palindrome !!"
    else:
        return f"The {string} is not a Palindrome !!"

my_string = input("Enter a string : ")
print(Palindrome(my_string)) 



# Q.2) Write a Python program which finds sum of digits of a number. [20 M]
# Example n=135 then output is 9 (1+3+5).
n = input("Enter a number to sum : ")
sum_of_digits = sum(int(digits) for digits in n)
print(f"{sum_of_digits=} ")