# Q1) Write a Python program to calculate the average of numbers in a given list

my_list = [1,2,3,4,5]
average = sum(my_list)/len(my_list)
print(average)




# Q.2) Write a program to display following pattern. [20 M]
# 1 2 3 4
# 1 2 3
# 1 2
# 1

n = 4  

for i in range(n):
    for j in range(1, n - i + 1):
        print(j, end=' ')
    print()  # Move to the next line after each row