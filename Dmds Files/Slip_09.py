# Q1Write an R program to create a Data frames which contain details of 5 employees and display summary of the data

employees <- data.frame(
  EmployeeID = c(101, 102, 103, 104, 105),
  Name = c("John Smith", "Sarah Johnson", "Mike Brown", "Emily Davis", "David Wilson"),
  Age = c(28, 35, 42, 31, 45),
  Department = c("IT", "HR", "Finance", "Marketing", "IT"),
  Salary = c(50000, 45000, 60000, 52000, 65000),
  Experience = c(3, 8, 15, 6, 12),
)

# Display the data frame
print("Employee Details:")
print(employees)

# Display summary of the data
print("Summary of Employee Data:")
print(summary(employees))

**********************************************

Q2
import pandas as pd
df = pd.read_csv('cancer.csv')


x = df.drop(['diagnosis(1=m, 0=b)'], axis=1)  # axis=1 for columns
y = df['diagnosis(1=m, 0=b)']  # CORRECTION: Directly select the target column

print("\nFeatures shape:", x.shape)
print("\nTarget shape:", y.shape)

from sklearn.model_selection import train_test_split

x_train, x_test, y_train, y_test = train_test_split(x, y, test_size=0.2, random_state=42)

from sklearn import svm

m = svm.SVC(kernel='linear')

m = m.fit(x_train, y_train)
y_pred = m.predict(x_test)

from sklearn import metrics

print("\nAccuracy:", metrics.accuracy_score(y_test, y_pred) * 100, "%")
print("\nPrecision:", metrics.precision_score(y_test, y_pred) * 100, "%")
print("\nRecall:", metrics.recall_score(y_test, y_pred) * 100, "%")


# m = Malignant → Cancerous tumor (1)
# b = Benign → Non-cancerous tumor (0)

#High precision = Fewer false alarms, but might miss some real cases
#High recall = Catch most real cases, but might have more false alarms
#Accuracy = How often your model is CORRECT overall
