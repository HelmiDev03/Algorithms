class Base:
    def __init__(self):
        print("created from Base class")

    def say_hello(self):
        print("hello guys")
        raise NotImplementedError("Derrived Classe must implement this Method")


class Base1(Base):
    def __init__(self):
        print("created from Base1 class wich child of Base")

    def say_marhbee(self):
        print("marhbe ")
class Base2(Base1):
    def __init__(self):
        print("created from Base2 class wich is child of class 1 which is child of Base")



b1 = Base1()
b1.say_hello()

