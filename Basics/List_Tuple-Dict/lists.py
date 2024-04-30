#a list is like a box that can contains a lot of different data types
my_list=[1,8,"helmi","maria",88]
#our list contains 5 elements starting with 0 as first index
#88 has 4 and -1 as index
#maria has 3 and -2
#1 has 0 and -5
print(my_list[-5])
#print(my_list[m:n])  ====>starting from m to (n-1)
#starting from 1 to 3
print(my_list[1:4])
#printf(my_list[m:])====>starting from m till the end of list
print(my_list[-5:])
print(my_list.count(8)) #counting number of occurance of en element in parameter
print(len(my_list))     #number of elemnt
my_list.append(555)       #adding an alement in the end
my_list.pop()              #removing last elemnt
my_list.insert(1,"halmouche")  #adding an elemnt in an index defiened in paramater
my_list.remove("maria")        #removing an elemnt
#my_list.clear()    #remove all elment
helmi_index=my_list.index("helmi");
print("la position de helmi dans la liste "+str(my_list)+" est "+str(helmi_index))
#my_list.sort()       #trateb selon l ordre alphabetique (idhe ken kolhom string) walla tri kenhom (kolhom numbers) sinon eroors
#new=my_list   diferent de new=my_list.copy()  (((le copy est un autre instance)
print(type(my_list))   #type is used to get the data type of a variable