# Q1. Write a R program to get the first 20 Fibonacci numbers.

# Easiest approach - direct calculation
fib <- numeric(20)
fib[1] <- 0
fib[2] <- 1

for (i in 3:20) {
  fib[i] <- fib[i-1] + fib[i-2]
}

print(fib)

***********************************************************************


# Q2 Multiple linear Regression.
import pandas as pd

Stock_Market = {
'Year':[2017,2017,2017,2017,2017,2017,2017,2017,2017,2017,2017,2017,2016,2016,2016,2016,2016,2016,2016,2016,2016,2016,2016,2016],
'Month': [12, 11,10,9,8,7,6,5,4,3,2,1,12,11,10,9,8,7,6,5,4,3,2,1],
'Interest_Rate': [2.75,2.5,2.5,2.5,2.5,2.5,2.5,2.25,2.25,2.25,2,2,2,1.75,1.75,1.75,1.75,1.75,1.75,1.75,1.75,1.75,1.75,1.75],
'Unemployment_Rate':[5.3,5.3,5.3,5.3,5.4,5.6,5.5,5.5,5.5,5.6,5.7,5.9,6,5.9,5.8,6.1,6.2,6.1,6.1,6.1,5.9,6.2,6.2,6.1],
'Stock_Index_Price': [1464,1394,1357,1293,1256,1254,1234,1195,1159,1167,1130,1075,1047,965,943,958,971,949,884,866,876,822,704,719]}


df = pd.DataFrame(Stock_Market)
print(df)

x = df.iloc[:,:-1]
y = df.iloc[:,-1]

print("\n X : ",x)
print("\n Y : ",y)

from sklearn.linear_model import LinearRegression

m = LinearRegression()
m = m.fit(x,y)

y_pred = m.predict(x)

print("\nPredicted\n", y_pred)
r_sq = m.score(x,y) #r_square score ( >0.3 is good)
print("\nScore : ",r_sq) 

import matplotlib.pyplot as plt

plt.plot(df['Stock_Index_Price'],df['Interest_Rate'], color="orange")
plt.title("Price vs Interest_Rate ")
plt.xlabel("Stock Index Price")
plt.ylabel("Interest Rate (%)")
plt.show()

