class doctor:
    def studies_years(self):
        print("i studied for 7 years")

    def work_where(self):
        print("i work in a hosiptal")

    def paid_by_who(self):
        print("i get paid by goverment")


class family_doctor(doctor):  #utilité   ???????????????????
    def paid_by_who(self):
        print("i get paid by people")  # ovewrite to paid_by_who function


class student:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def marhbe(self):
        print("ahla bik ya student")


class people(student): #utilité   ???????????????????
    def marhbe(self):
        print("ahla bik ya people")