# SET A : 1 ----------

my_dict = dict({"Apple":"Red","Banana":"Yellow","Orange":"Blue"}) # Key-Value Pairs

print(my_dict.get("Banana"))
# OR
print(my_dict["Banana"])


# SET A : 2 ----------

dic1 = {1: 10, 2: 20}
dic2 = {3: 30, 4: 40}
dic3 = {5: 50, 6: 60}

new_dict1 = dic1.copy()  # Create a copy of dic1 to avoid modifying the original
new_dict1.update(dic2)
new_dict1.update(dic3)
print("Concatenated Dictionary using update():", new_dict1)

# SET A : 3 ----------

my_dict = {"Alice":26,"Bruce":20,"Kevin":28,"Rock":24}


# for key in my_dict:
#     print("Key : ",key)

for key,value in my_dict.items():
    print(f"Key : {key}, Value : {value}")


# SET A : 4 ----------

my_dict = {'data1': 100, 'data2': -54, 'data3': 247}

total = sum(my_dict.values())
print(total)

# SET A : 5 ----------

my_dict = dict({"Apple":"Red","Banana":"Yellow","Orange":"Blue"})
my_dict.pop("Banana")
print(my_dict.items())

