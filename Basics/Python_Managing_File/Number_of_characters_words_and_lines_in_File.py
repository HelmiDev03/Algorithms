file=open("a.txt","r")
l=file.readlines()
nbchar,nbword=0,0
for i in l:
    nbchar+=len(i.strip())
    nbword+=len(i.split())
print(f"number of line = {len(l)}")    
print(f"number_of_word = {nbword}")    
print( f"number_of_caracters = {nbchar} (we have removed the return line caracter of each line)")  
