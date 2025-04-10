# Q.1) Write a Python program to sort the tuple T=(4,2,6.8,1.8,10) 

tuple = (4,2,6.8,1.8,10)
result = sorted(tuple)
print(result)

# .sort() - modifies orginal list (set,lists)
# sorted() - creates new sorted list(for tuple)


# Q.2) Write a function to calculate the sum of numbers from 0 to n

def sum(n):
    return n * (n + 1) // 2
print(sum(5))



# Q.2) Write a Python program to create a dictionary from two lists without losing duplicate values.

myList1 = ['Class-V', 'Class-VI', 'Class-VII', 'Class-VIII']
myList2 = [1, 2, 2, 3]
myDict = dict(zip(myList1,myList2))
print(myDict)