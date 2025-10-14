
Q1. Write a R program to reverse a number and also calculate the sum ofdigits of that number. 


num = as.integer(readline("Enter any number : "))
sum = 0
rev = 0
while(num > 0){
r = num %% 10
sum = sum+r
rev =  rev * 10 + r
num=num%/%10
}
cat("\n Reverse = ",rev)
cat("\n Sum of Digit = ",sum)



****************

#Consider the following observations/data. And apply simple linear regression and find
#out estimated coefficients b0 and b1.( use numpypackage)


import numpy as np
import matplotlib.pyplot as plt

x = np.array([0,1,2,3,4,5,6,7,8,9,11,13])
y = np.array([1,3,2,5,7,8,8,9,10,12,16,18])

print("Array x:", x)
print("Array y:", y)

# Simple one-liner regression using np.polyfit
b1, b0 = np.polyfit(x, y, 1)  # 1 means linear regression

print("\nB0 :", b0)
print("B1 :", b1)

# Calculate predicted values
y_pred = b0 + b1 * x

# Visualization
plt.scatter(x, y, color="Red", label="Actual Values")
plt.scatter(x, y_pred, color="Green", label="Predicted Values")
plt.plot(x, y_pred, color="Blue", label="Regression Line")
plt.xlabel("--- xvalues ---")
plt.ylabel("--- yvalues ---")
plt.legend()
plt.show()
