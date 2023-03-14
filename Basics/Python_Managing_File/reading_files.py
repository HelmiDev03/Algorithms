myfile = open("file.txt", "r+")
# print(myfile.readline())#she read first line then thabet l curseur lel line libadou
# for index in myfile:
# print(index)
# print(myfile.readlines()) #=>make the file and elemnent in 1dlist the print it
# myfile.read()===>read all text in file
lst = myfile.readlines()[0]
print(lst)
print(myfile.__sizeof__())
myfile.write("hahah") #write in the end
myfile.writelines(" lol")
myfile.close()
