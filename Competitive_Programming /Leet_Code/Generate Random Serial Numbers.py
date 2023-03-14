import string
import random
def Get_Serial_Number(count):
    str1=string.ascii_letters+string.digits
    index=0
    serial=""
    while index<count:
        serial+=str1[random.randint(0,len(str1)-1)]
        count-=1
    return serial
print(Get_Serial_Number(100))