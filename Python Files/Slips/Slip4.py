
# Q.1) Write a Python program to find the repeated items of a tuple.

my_tuple = (10,20,10,15,16,9,45,9)

for i in my_tuple:
    if my_tuple.count(i) >= 2:
        print(i)



# Q.2) Write a Python program to match key values in two dictionaries. [20 M] 
# Sample dictionary: {'key1': 1, 'key2': 3, 'key3': 2}, {'key1': 1, 'key2': 2} 
# Expected output: key1: 1 is present in both x and y 

dict1 = {'key1': 1, 'key2': 3, 'key3': 2}                                                                          
dict2 = {'key1': 1, 'key2': 2}

for key, value in dict1.items():
    if key in dict2 and dict2.get(key) == value:
        print(f"{key}:{value} is present in Both Dictionaries")


# --------------- OR------------------------

# Q.2) Write a Python program to create a set with any 3 weekdays. Add single element to the set 
# and print it. Add multiple elements and print the set


WeekDays = {"Monday","Tuesday","Wednesday"}

WeekDays.add('Thursday')
print(WeekDays)

WeekDays.update(['Friday','Saturday'])
print(WeekDays)

