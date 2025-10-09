# Q1 Write a R programto create a data frame using two given vectors and displaythe duplicate elements.

# One-liner 
df <- data.frame(V1 = c(1,2,3,2,5,3), V2 = c("A","B","C","B","E","C"))
print(df)
duplicated(df)

*******************
# Alternative Way :
*******************

# Create two vectors
V1 <- c(1, 2, 3, 2, 5, 3)
V2 <- c("A", "B", "C", "B", "E", "C")

# Create data frame
df <- data.frame(V1,V2)

# Display data frame
print("Data Frame:")
print(df)

# Find duplicate elements
print("Duplicate rows:")
print(df[duplicated(df), ])

# Show which elements are duplicates
print("Duplicate indices:")
print(which(duplicated(df)))


******************************************************
******************************************************

# Q2 Heirarchical Agglomerative clustering (Customers.csv)

import pandas as pd

df = pd.read_csv("Customers.csv")
print(df.head())

x = df.iloc[:,[3,4]].values
print(x)

import matplotlib.pyplot as plt
import scipy.cluster.hierarchy as s

dendro = s.dendrogram(s.linkage(x,method="ward"))
plt.title("Dendrogram")
plt.xlabel("Euclidean Distance")
plt.show()

from sklearn.cluster import AgglomerativeClustering

m = AgglomerativeClustering(n_clusters=4, metric='euclidean', linkage='ward')
y_pred = m.fit_predict(x)

plt.scatter(x[y_pred==0,0],x[y_pred==0,1], s=100, c='blue', label='Cluster 0')
plt.scatter(x[y_pred==1,0],x[y_pred==1,1], s=100, c='yellow', label='Cluster 1')
plt.scatter(x[y_pred==2,0], x[y_pred==2,1], s=100, c='red', label='Cluster 2')
plt.scatter(x[y_pred==3,0], x[y_pred==3,1], s=100, c='green', label='Cluster 3')

plt.xlabel("Annual Income")
plt.ylabel("Spending Score")
plt.legend()
plt.title("Clustering")
plt.show()




