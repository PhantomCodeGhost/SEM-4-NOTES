
# Q.1) Write a Python program to get the 4th element from front and 4th element from last of a tuple. 

my_tuple = (10,20,30,40,50,60,70,80,90)
    
front = my_tuple[3]
last = my_tuple[-4]

print(f"{front=}, {last=}")


# Q.2) Write a Python program to perform given operations on set. 
    # a. check whether 2 sets are equal or not 
    # b. Symmetric difference 
    # c. Intersection of sets 
    # d. Find maximum and the minimum value in a set.

x = {10,1,20,3,60,49}
y = {49,1,20,10,60,3,7}

def a_display(A,B):
    if A == B:
        print("A) The Sets are equal.")
    else :
        print("A) The Sets are not equal")
    
def b_display(A,B):
    print("B) Symmetric Difference :",A ^ B)  

def c_display(A,B):
    print("C) Intersection : ",A & B) 

def d_display(A,B):
    print("D) Max & Min : ",max(A),min(A), max(B), min(B))
   
a_display(x,y)
b_display(x,y) 
c_display(x,y)
d_display(x,y)  


# -------------- OR --------------------


# Q.2) Write a Python program to combine two dictionary adding values for common keys. 
# d1 = {'a': 100, 'b': 200, 'c':300} d2 = {'a': 300, 'b': 200,'d':400} 
# Sample output: ({'a': 400, 'b': 400,'d': 400, 'c': 300}) 

d1 = {'a': 100, 'b': 200, 'c':300}
d2 = {'a': 300, 'b': 200,'d':400} 

combined_dict = {}

for key, value in d1.items():
    combined_dict[key] = value

for key, value in d2.items():
    if key in combined_dict:
        combined_dict[key] += value
    else :
        combined_dict[key] = value
print(combined_dict) 
