# Q.1) Write a Python program to accept the strings which contains all vowels.

# my_string = input("Enter a string : ")

# def vowelString(text):
#     text = text.lower()
#     vowels = {'a','e','i','o','u'}
#     for vowel in vowels:
#         if vowel not in text:
#             return False
#     return True

# if vowelString(my_string):
#     print(f"The string {my_string} contains all the vowels!!")
# else:
#     print("The string {my_string} doesn't contain all the vowels!!")

#  Q2) Write a Python program to reverse a given number

n = 12345

reversed_n = int(str(n)[::-1])
print(reversed_n)
