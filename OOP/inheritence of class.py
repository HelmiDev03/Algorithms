from datetime import date


class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def display(self):
        return f"Hello my name is {self.name} and my age is {self.age}"

    @classmethod
    def initfrombirthyear(cls, name, birthyear, voice=""):
        return cls(name, date.today().year - birthyear, voice)


class Man(Person):
    gender = 'Male'
    nb_men = 0

    def __init__(self, name, age, voice):
        super().__init__(name, age)  # herite what from person class
        self.voice = voice
        Man.nb_men += 1

    def display(self):
        string = super().display()  # get what display func return in class person
        print(f"{string} and my voice is {self.voice}")


men = Man("helmi", "20", "hard")
men.display()
men1 = Man.initfrombirthyear("helmi", 2003, "3adi")
men1.display()


class Women(Person):
    gender = 'Women'
    nb_women = 0

    def __init__(self, name, age, voice):
        super().__init__(name, age)  # herite what attributes from person class if it already has
        self.voice = voice
        Women.nb_women += 1

    def display(self):
        string = super().display()  # get what display func return in class person
        print(f"{string} and my voice is {self.voice}")


women = Women("ghada", 23, "soft")
women.display()
print(isinstance(women,Women)) #check if women is an object of Women class"
