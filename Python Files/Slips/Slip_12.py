# Q.1) Write a Python program to find the length of a string without using built-in function.

name = "Parth";
length = 0;

for char in name:
    length += 1
print(length)

# Q.2) Write a Python program to accept string and remove the characters which have odd index
# values of a given string using user defined function. 

def evenIndex(text):
        return text[::2]

my_string = "0123456789" # Lmao XD
print(evenIndex(my_string))



# Q). Write a Python program to accept n numbers in list and remove duplicates from a list.

my_list = [1,1,2,2,3,4,5,6,7,7]

no_duplicates = list(set(my_list))
print(no_duplicates)
