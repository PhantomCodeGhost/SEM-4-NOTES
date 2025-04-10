# Q.1) Write a Python program to print average of all elements of sets.

my_set = {10,20,30,40,50}

average =  sum(my_set)/len(my_set)
print(average)

# Q.2) Write a Python program to match key values in two dictionaries.
# Sample dictionary: {'key1': 1, 'key2': 3, 'key3': 2}, {'key1': 1, 'key2': 2}

dict1 = {'key1': 1, 'key2': 3,'key3': 2}
dict2 = {'key1': 1, 'key2': 2}

for key, value in dict1.items():
    if key in dict2 and dict2.get(key) == value:
        print(f"{key}:{value} is present in both dict1 & dict2")


# --------------- OR --------------------
        
# Q.2) Write a Python function to multiply all the numbers in a list. [20 M]
# Sample-List: (8, 2, 3, -1, 7)   Expected Output: -336

my_list = [8, 2, 3, -1, 7]
mul = 1
for i in my_list:
    mul *= i
print(mul)