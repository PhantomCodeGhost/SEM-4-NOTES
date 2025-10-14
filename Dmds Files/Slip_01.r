# Q1 R program to add, multiply and divide two vectors of integertype. (Vector length should be minimum 4)
vector1 = seq(10,40,length.out=4)
vector2 = c(20,10,40,40)

cat("\n Addition : ",v1 + v2)
cat("\n Multiplication : ",v1 * v2)
cat("\n Division : ",v1 / v2)

***************************************

# Q2) Write a programme in python to apply simple linear regression and find out mean absolute error, mean squared error and root mean squared error. 

import pandas as pd
df = pd.read_csv('student_scores.csv')
print(df)

x = df[['Hours']]  
y = df['Scores']

from sklearn.linear_model import LinearRegression

m = LinearRegression()
m = m.fit(x,y)
y_pred = m.predict(x)
print("Displaying Predicted : ", y_pred)

from sklearn.metrics import mean_absolute_error, mean_squared_error
MAE = mean_absolute_error(y,y_pred)
MSE = mean_squared_error(y,y_pred)
import math
RMSE = math.sqrt(MSE)

print("\n MAE ", MAE)
print("\n MSE ", MSE)
print("\n RMSE ", RMSE)



