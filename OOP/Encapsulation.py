'''
#PUBLIC CLASS

class Member:
    def __init__(self,name):
        self.name=name
m1=Member("helmi")
print(m1.name)
'''
#Private Class
class Member:
    def __init__(self,name):
        self.__name=name
#m1=Member("helmi")
#m1.name="ahmed"
#print(m1._Member.__name)
#in reality (in python) there is not notion of privacy pr protection
#there is no restriction