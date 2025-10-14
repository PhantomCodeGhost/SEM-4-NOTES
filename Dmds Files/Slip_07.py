#(Use sklearn package)
# Slip (7 & 18)


# Q1) S- 18
# Create a vector
numbers = c(23, 45, 12, 67, 89, 34, 56, 2, 78, 41)

# Find max and min
max_value = max(numbers)
min_value = min(numbers)

cat("\nMaximum:", max_value)
cat("\nMinimum:", min_value)


****************************************************
# Q1.1)Write a R program to create a sequence of numbers from 20 to 50 and findthe mean of numbers from 20 to 60 and sum of numbers from 51 to 91.

print(20:50)
print(paste("Mean (20-60):", mean(20:60)))
print(paste("Sum (51-91):", sum(51:91)))


*****************************************************
*****************************************************

#Q2 
import numpy as np
x = np.array([1,2,3,4,5,6,7,8]).reshape(-1,1)
y = np.array([7,14,15,18,19,21,26,23]).reshape(-1,1)

print("\nArray x:", x)  
print("\nArray y:", y) 

from sklearn.model_selection import train_test_split
x_train, x_test, y_train, y_test = train_test_split(x, y, test_size=0.2)

print("\nTrain Set (X)\n", x_train)  
print("Train Set (Y)\n", y_train)    
print("Test Set (X)\n", x_test)      
print("Test Set (Y)\n", y_test)      

from sklearn.linear_model import LinearRegression
m = LinearRegression()
m.fit(x_train, y_train)
y_pred = m.predict(x_test)

print("\nPredicted : \n", y_pred)  
print("\nB0 : ", m.intercept_)
print("\nB1 : ", m.coef_)
print("\nDisplay Performance : ", m.score(x,y))

import matplotlib.pyplot as plt
plt.scatter(x_test, y_test, color="Red", label="Actual Values")
plt.scatter(x_test, y_pred, color="Green", label="Predicted Values")
plt.plot(x_train, m.predict(x_train), color="Blue", label="Trained Data")
plt.xlabel("--- xvalues ---")
plt.ylabel("--- yvalues ---")
plt.legend()
plt.show()

