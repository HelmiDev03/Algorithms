#1)
'''
file=open("a.txt","w")
l=["joli\n", "grand\n", "amour\n" , "joie\n"]
file.writelines(l)
'''
#2)'''
file = open("a.txt","r")
l=file.readlines()
add=["moche\n", "petit\n","haine\n","tristesse\n"]
new=[""]*len(l)
new=[i.strip() + " et son opposé est " + add[j] for j,i in enumerate (l)]    
file=open("a.txt","w")
file.writelines(new)
