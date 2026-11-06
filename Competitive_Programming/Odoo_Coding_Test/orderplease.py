import re

def order(sentence):
    if sentence=="":
        return ""
    l = sentence.split(' ')
    n = []
    d={}
    for i in l :
        n.append("".join(re.findall("\d" ,i)))
    
    n=sorted(n)
    for i in l:
        d["".join(re.findall("\d" ,i))] = i
    ans=[d[i] for i in n]    
     

    return " ".join(ans)

print(order("4of Fo1r pe6ople g3ood th5e the2"))