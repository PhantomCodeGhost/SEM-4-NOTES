# Q1 Write a R program to add, multiply and divide two vectors of integer type.(vector length should be minimum 4)

vector1 = seq(10,40,length.out=4)
vector2 = c(20,10,40,40)

print("Original Vectors : ")
print(vector1)
print(vector2)

cat("\n Addition : ",v1 + v2)
cat("\n Multiplication : ",v1 * v2)
cat("\n Division : ",v1 / v2)


*******************************


# Q2 Write a Python program build Decision Tree Classifier forshows.csvfrom pandas and
predict class label for show starring a 40 years old American comedian, with 10
years of experience, and a comedy ranking of 7?


import pandas as pd

# Read your existing CSV file
df = pd.read_csv('shows.csv')

print("Shows DataSet : \n",df)
d = {'UK':0, 'USA' : 1, 'N':2}
df['Nationality'] = df['Nationality'].map(d) 
d = {'YES':1,'NO':0}
df['Show'] = df['Show'].map(d)
print("Converted DataSet : \n",df)

X = df.iloc[:,:-1]
y = df.iloc[:,-1]

from sklearn.model_selection import train_test_split
X_train, X_test, y_train, y_test = train_test_split(X,y, test_size = 0.2)

print("=== Train Split X === \n", X_train)
print("=== Train Split Y === \n", y_train)
print("=== Train Split X === \n", X_test)
print("=== Test Split Y === \n", y_test)

print("\nFeatures:\n", X)
print("\nTarget\n", y)

from sklearn.tree import DecisionTreeClassifier
m = DecisionTreeClassifier()
m = m.fit(X_train, y_train)
y_pred = m.predict(X_test)

print("Predicted OutCome : \n", y_pred)

from sklearn import metrics
print("\nAccuracy = ",metrics.accuracy_score(y_test,y_pred)* 100 ,"%");
print("\nClass Label For starring : ", m.predict([[40, 10, 7, 1]]))
