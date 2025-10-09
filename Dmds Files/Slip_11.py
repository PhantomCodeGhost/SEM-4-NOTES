Q1 Write a R program to find all elements of a given list that are not in another given list.

num = as.integer(readline("Enter any number : "))
sum = 0
rev = 0
while(num > 0){
	r = num %% 10
	sum = sum+r
	rev = rev * 10 + r
	num=num%/%10
	}
cat("\n Reverse = ",rev)
cat("\n Sum of Digit = ",sum)




**************************************

Q2 Wholesale.csv  Heirarchical Clustering Algorithmn

import pandas as pd
df = pd.read_csv("Wholesale customers data.csv")

print(df.head())

x = df.iloc[:,[3,4]].values
print(x)

import matplotlib.pyplot as plt
import scipy.cluster.hierarchy as s

dendro = s.dendrogram(s.linkage(x,method='ward'))
plt.title("dendrogram")
plt.xlabel("Eculdean Distance")
plt.show()

from sklearn.cluster import AgglomerativeClustering 
m = AgglomerativeClustering(n_clusters=3, metric='euclidean', linkage='ward')
y_pred = m.fit_predict(x)

plt.scatter(x[y_pred==0,0],x[y_pred==0,1], s=100, c='blue', label='Cluster 0')
plt.scatter(x[y_pred==1,0],x[y_pred==1,1], s=100, c='red', label='Cluster 1')
plt.scatter(x[y_pred==2,0],x[y_pred==2,1], s=100, c='green', label='Cluster 2')

plt.xlabel("Milk")
plt.ylabel("Grocery")
plt.legend()
plt.title("Clustering")
plt.show()

