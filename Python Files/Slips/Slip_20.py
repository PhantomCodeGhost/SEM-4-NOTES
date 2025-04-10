# Q.1) Write an anonymous function to calculate area of square

area = lambda side : side * side

print(area(20))


# Q.2) Write a Python program which finds sum of digits of a number. [20 M]
# Example n=135 then output is 9 (1+3+5).
n = input("Enter a number to sum : ")
sum_of_digits = sum(int(digits) for digits in n)
print(f"{sum_of_digits=} ")