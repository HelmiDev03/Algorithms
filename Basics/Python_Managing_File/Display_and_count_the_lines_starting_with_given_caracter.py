def display_and_count(file,char):
    l=file.readlines()
    count=0
    print("Those Are Lines That Starts With The Caracter U Gave")
    for i in l:
        if i[0]==char:
            print(i.strip())
            count+=1
    print(f"With {count} As Total Numbers")        
file=open("a.txt","r")
display_and_count(file,"lahiba")
