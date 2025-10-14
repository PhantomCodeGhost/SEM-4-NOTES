Q1  Pie Chart of the given data

digits= c(1,2,3,4,5,6)
freq = c(7,2,6,3,4,8)
per= round(100*freq/sum(freq))
df=data.frame(digits,freq,per)
cat("Data Distribution")

print(df)
pie(df$freq,label=paste(df$freq,sep='-',df$per,'%'), col=c("blue","green","orange","pink","red","yellow"), main="Frequencies of Digits on Dice")



Q2
import pandas as pd

# Read the CSV file
df = pd.read_csv('StudentsPerformance.csv')

# Display the shape of dataset
print("Shape of dataset:", df.shape) # Shape display no. of rows & columns 

# Display the top rows of the dataset with their columns
print("\nTop 5 rows:")
print(df)
