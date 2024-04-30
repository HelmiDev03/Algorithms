class Food:
    def __init__(self, name="", price=0):
        self.name = name
        self.price = price
        print(f"{self.name} is created from Basic Class")

    def eat(self):
        return ("eat method from Base class")


class Apple(Food):
    def __init__(self, name="", price="", amount=0):
        super().__init__(name, price)  # to do not repaet self.name=name cuz we gonne herite it from Food
        # Food.__init__(name)#create instance from base class
        self.amount=amount
        print(f"{self.name} is crated from child class named Apple")

    # super().fucntion() that u want get what she do
    def eat(self):
        string = super().eat()
        print(string.replace("Base", "Child"))


food_one = Food("pizza", 50)
food_two = Apple("Green_Apple", 60,1000)
food_two.eat()
