def xoronebit(m1,m2):
    return '0' if (m1,m2) in (('0','0'),('1','1')) else '1'
def xor(n1,n2):
    return "".join([xoronebit(a,b) for a,b in zip(n1,n2)])  if len(n1)==len(n2) else "no"
def fct(r,key):
    return [xor(xor(r[0],key[2]),r[3]),xor(key[1],r[2]),xor(xor(r[1],key[0]),r[3]),xor(r[3],key[3])]
def fetsel(msg,key):
    return xor(msg[0:4],fct(msg[4:],key[0:4]))+xor(msg[4:],fct(xor(msg[0:4],fct(msg[4:],key[0:4])),key[4:]))
print(fetsel("10100110","10110010"))
