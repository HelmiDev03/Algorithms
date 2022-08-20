from trymod import factorielle
from trymod import check

'''
A static method does not receive an implicit first argument.
A static method is also a method that is bound to the class
 and not the object of the class
'''


class Math:
    @staticmethod
    def add(x, y):  # don not take self
        return x + y

    @staticmethod
    def add5(num):
        return num + 5

    @staticmethod
    def PI():
        return 3.14

    @staticmethod
    def factorielle(x):
       return factorielle(x)

    @staticmethod
    def check(x):
        return check(x)
class Ball:
    def __init__(self, colour, radius):
        self.colour = colour
        self.radius = radius

    def area(self):
        return Ball.circle_area(self.radius)
    def ball_info(self):
        print(f"colour : {self.colour}")
        print(f"radius : {float(self.radius)}")
        print(f"area : {float(self.circle_area(self.radius))}")
    @staticmethod
    def circle_area(rad):
        return pow(rad, 2) * Math.PI()

    @classmethod
    def otherinit(cls, colour, rad):
        return cls(colour, rad)

ball1=Ball.otherinit("blue",4.6)
ball1.ball_info()
print(Math.add5(10))
print(Math.factorielle(5))
