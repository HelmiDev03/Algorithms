file=open(r"out.txt","w")
file.write("Hello From Python File With Love\n")
file.write("third line\n")
l=["first line\n","second line\n","third line\n",]
file.writelines(l) #write a list of lines : take  a list as argument and looping inside it and write one by one
file.writelines("helmi\n")
# write() argument must be str, not list or int or  any othe data type
file.write(l)