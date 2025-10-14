show_table = function(n){
  for(i in 1:10) cat(n,"*",i,"=",n*i,"\n")
}

num = as.integer(readline("Enter a number: ")) 
cat("Multiplication Table:\n")
show_table(num)
