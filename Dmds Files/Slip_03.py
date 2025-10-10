Q1

reverse = function(n){
  original = n
  sum = 0
  rev = 0
  
  while(n > 0){
    digit = n %% 10
    sum = sum + digit
    rev = rev * 10 + digit
    n = n %/% 10
  }
  cat("Original:", original, "\nSum:", sum, "\nReverse:", rev)
}
num = as.integer(readline("Enter a number: "))
reverse(num)





*****************************************


Q2 Consider the following observations/data. And apply simple linear regression and find
#out estimated coefficients b0 and b1.( use numpypackage)


import numpy as np
x = np.array([0,1,2,3,4,5,6,7,8,9,11,13]).reshape(-1,1)
y = np.array([1,3,2,5,7,8,8,9,10,12,16,18]).reshape(-1,1)
print("\nArray x:", x)
print("\nArray y:", y)


from sklearn.model_selection import train_test_split

x_train, x_test, y_train, y_test = train_test_split(x , y, test_size = 0.2)

print("\nTrain Set (X)\n", x_train)
print("Train Set (Y)\n", y_train)
print("Train Set (X)\n", x_test)
print("Train Set (Y)\n", y_test)

from sklearn.linear_model import LinearRegression
m = LinearRegression()
m = m.fit(x_train,y_train)
y_pred = m.predict(x_test)
print("\nPredicted : \n",y_pred)
print("\nB0 : ",m.intercept_)
print("\nB1 : ",m.coef_)


import matplotlib.pyplot as plt
plt.scatter(x_test,y_test, color="Red", label="Actual Values")
plt.scatter(x_test,y_pred, color="Green", label="Predicted Values")
plt.plot(x_train,m.predict(x_train), color="Blue", label="Trained Data")
plt.xlabel("--- xvalues ---")
plt.ylabel("--- yvalues ---")
plt.legend()
plt.show()

