import re



def ips_between(start, end):
    a = re.findall("\d+",start) # for 10.0.0.0 gives [10,0,0,0]
    b=re.findall("\d+",end)
    a=[int(i) for i in a]
    b=[int(i) for i in b]
    #a.b.c.d , pos = a * 256^3  + b *  256^2 + c * 256 + d

    def conv(l):
        y=0
        for i,j in enumerate(l) :
            y+= j * pow(256 , 3 - i)
        return y
        
    return conv(b) - conv(a) 


        









print(ips_between("20.0.0.10" , "20.0.1.0"))