import copy
class person:
    def __init__(self,name,age,hobies):
        self.name=name
        self.age=age
        self.hobies=hobies
        d=dict
        d={
            "name":name,
            "age":age,
            "hobies" : hobies
        }
        self.d=d
    def __repr__(self):
        return f"name={self.name} | age={self.age} | hobies={self.hobies} | dictionnaries={self.d}"
p=person("bs",20,["music","sport"])     
p1=copy.deepcopy(p)
(p1.hobies).append("bs")
print(p1.d["hobies"][2][0] + "__4XX__83")
