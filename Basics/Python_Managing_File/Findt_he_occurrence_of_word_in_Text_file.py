def occurance(file,word):
    return file.read().split().count(word)
file=open("a.txt","r")
print(occurance(file,"lahbiba"))
