# Q.1) Write an anonymous function to calculate area of square

area = lambda side : side * side

print(area(20))


# Q.2) Write a Python program to count frequency of each character in a given string using user
# defined function.

def create_dict_from_string(input_string):
    
    frequency_dict = {}

    for char in input_string:
        # Skip spaces
        if char == ' ':
            continue
        # If the character is already in the dictionary, increment its count
        if char in frequency_dict:
            frequency_dict[char] += 1
        # Otherwise, add the character to the dictionary with a count of 1
        else:
            frequency_dict[char] = 1
    
    return frequency_dict


input_string = 'Hello all'

print("Character Frequency Dictionary:", create_dict_from_string(input_string))


