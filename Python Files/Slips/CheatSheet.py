# DICTIONARY In Python

my_dict = {} # Empty Dictonary
my_dict = dict({"Apple":"Red","Banana":"Yellow","Orange":"Blue"}) # Key-Value Pairs
my_dict['Orange'] = "Orange" # Update a pre-existing value

print(my_dict.items()) # Display All items 
print(my_dict.keys()) # Display All keys
print(my_dict.values()) # Display All values

# Display Specific Value :
print(my_dict.get("Banana")) 
        #OR
print(my_dict['Banana'])

# Pop(Delete) any item
print(my_dict.pop("Banana"))


# Sorting A Dictionary & Diplay
afterSort = sorted(my_dict.items())
for key,value in afterSort:
    print(f"Key : {key}, Value : {value}")


# SET IN PYTHON

a = {1,2,3,4,5}
b = {4,5,6,7,8}

print(a.difference(b)) # Diplays Set 'a' Exclusive elements only

# Diplays Both set Elements No Duplication
print(a.union(b))
    #OR
print(a|b) 

# Diplays same Elements from both set once.
print(a.intersection(b))
    #OR
print(a&b) 

# Same as union() but excludes intersected Elements.
print(a.symmetric_difference(b)) 


# PYTHON METHODS TO MANIPULATE STRINGS

len(var_name) # Get Length of String

