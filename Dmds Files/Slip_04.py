# Q1 Write a R program to calculate the sum of two matrices of given size .
matrix1 = matrix(1:6,nrow=2)
matrix2 = matrix(7:12,nrow=2)
sum_m = matrix1 + matrix2
print(sum_m)


********************************************


#Q2 Consider following dataset

data = {'weather':['Sunny','Sunny','Overcast','Rainy','Rainy','Rainy','Overcast','Sunny','Sunny','Rainy','Sunny','Overcast','Overcast','Rainy'],
        'temp':['Hot','Hot','Hot','Mild','Cool','Cool','Cool','Mild','Cool','Mild','Mild','Mild','Hot','Mild'],
        'play':['No','No','Yes','Yes','Yes','No','Yes','No','Yes','Yes','Yes','Yes','Yes','No']}


import pandas as pd
df = pd.DataFrame(data)
print(df)

d = {'Sunny':1,'Overcast':0,'Rainy':2}
df['weather'] = df['weather'].map(d)
d = {'Hot':1,'Mild':2,'Cool':3}
df['temp'] = df['temp'].map(d)
d = {'No':0,'Yes':1}
df['play'] = df['play'].map(d)

X = df.iloc[:,:-1]
y = df.iloc[:,-1]

print("\nFeature \n",X)
print("\nTarget \n",y)

from sklearn.model_selection import train_test_split

X_train,X_test, y_train, y_test = train_test_split(X,y,test_size=0.2)

print("\nTrain Split (X) : \n",X_train)
print("\nTrain Split (Y) : \n",y_train)
print("\nTest Split (X) : \n",X_test)
print("\nTest Split (Y) : \n",y_test)

from sklearn.naive_bayes import GaussianNB
m = GaussianNB()
m = m.fit(X_train, y_train)
y_pred = m.predict(X_test)

print("\nPredicted ",y_pred)

from sklearn import metrics
print("\nAccuracy",metrics.accuracy_score(y_test,y_pred) * 100, "%")
print("\n Predicted for given inputs : ", m.predict([[0,2]]))

