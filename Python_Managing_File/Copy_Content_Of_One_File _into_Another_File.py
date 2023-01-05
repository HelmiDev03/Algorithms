source_file=open("a.txt","r")
dest_file = open("b.txt","a")   
dest_file.writelines(source_file.readlines())
