
# Q1 Write a R program to create a simple bar plot of given data .

Year = c(2001,2002,2003)
Export = c(26,32,35)
Import = c(35,40,50) 
df = data.frame(Year,Export,Import)

cat("\nData Distribution \n")
print(df)
data = rbind(df$Export,df$Import)
barplot(data, main="Export & Import",xlab="Year", ylab="Export & Import",names.arg=df$Year,col = c("red","blue"), legend = c("Export" , "Import"), beside = TRUE)

******************
# Q2 Same as Slip5
******************