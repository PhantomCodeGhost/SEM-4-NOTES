# Q1 1. Write a R program to create a Dataframes which contain details of 5 employees display details
# Employee contain (empno,empname,gender,age,designation)

# Create a DataFrame with employee details
employees <- data.frame(
  empno = c(101, 102, 103, 104, 105),
  empname = c("John Smith", "Jane Doe", "Robert Johnson", "Emily Davis", "Michael Brown"),
  gender = c("Male", "Female", "Male", "Female", "Male"),
  age = c(28, 32, 45, 29, 38),
  designation = c("Software Engineer", "Project Manager", "Senior Developer", "Data Analyst", "Team Lead")
)

print("Employee Details:")
print(employees)

****************************************************
SAME SLIP 19 replace ( Employee -> Student)
****************************************************

# Q2 Write a python program to implement multiple Linear Regression modelfor a car dataset.

import pandas as pd

df = pd.read_csv('car.csv')
print(df.head())

x = df[['Volume','Weight']]
y = df['CO2']

print("\nX : \n", x)
print("\nY : \n", y)


from sklearn.linear_model import LinearRegression

m = LinearRegression()
m.fit(x,y)
y_pred = m.predict(x)

print("\nPredicted \n", y_pred)
print("\nB0 \n", m.coef_)
print("\nB1 \n", m.intercept_)
print("USer input : ",m.predict([[1500,1300]]))

