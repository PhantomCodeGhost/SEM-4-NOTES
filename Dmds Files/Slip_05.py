
# Q1 Concatinate two given factors.

# Create two sample factors
factor1 <- factor(c("A", "B", "C", "A", "B"))
factor2 <- factor(c("X", "Y", "Z", "X", "Y"))

combined_factor = factor(c(as.character(factor1),as.character(factor2)))
print(combined_factor)





x----x




'''Q2  Write a Python program build Decision Tree Classifier using Scikit- learn package for
diabetes data set (diabetes.csv) '''

# Same Q2 of slip 16 


import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.tree import DecisionTreeClassifier
from sklearn import metrics

# Load dataset
url = 'https://raw.githubusercontent.com/PhantomCodeGhost/SEM-4-NOTES/refs/heads/main/Python%20Files/diabetes.csv'
df = pd.read_csv(url)
print(df.head(10))

# Split into features and target
X = df.iloc[:, :-1]   # all columns except last
y = df.iloc[:, -1]    # last column

print("\n*Features (X):*\n", X.head())
print("\n*Target (y):*\n", y.head())

# Split data into training and testing sets
X_train, X_test, y_train, y_test = train_test_split(
    X, y, test_size=0.2, random_state=42
)

# Train Decision Tree model
model = DecisionTreeClassifier()
model.fit(X_train, y_train)

# Predict on test data
y_pred = model.predict(X_test)

# Display results
print("\nPredicted Outcomes:\n", y_pred)
print("\nAccuracy = ", metrics.accuracy_score(y_test, y_pred) * 100, "%")
