class Solution:
    alphabet = "abcdefghijklmnopqrstuvwxyz"

    def __init__(self, string):
        self.string = string

    @staticmethod
    def check_lenght(string: str, min: int, max: int) -> bool:  # for key
        if len(str) not in [min, max]:
            return False
        else:
            return True

    @staticmethod
    def Check_all_lower_case_exist(string: str) -> bool:  # for key
        x = 0
        for char in Solution.alphabet:
            if string.count(char, 0, len(string)) != 0:
                x += 1
            if x == 0:
                return False
                x = 0
        return True

    @staticmethod
    def check_msg(string: str) -> str:
        while not string.islower() and not ' ' in string and not Solution.check_lenght(string, 1, 2000):
            if not string.islower():
                print("Msg Must Contain only Lowercase ")
            if not ' ' in string:
                print("Msg Must contin Space")
            if not Solution.check_msg(string):
                print("lenght of msg must be betwwen 1 and 2000")
            string = input("ReType another Message Please ")
        return string

    @classmethod
    def Create_msg(cls, string: str):
        string = cls.check_msg(string)
        print("Message is validated succefully by the system")
        return cls(string)
    @staticmethod
    def remove_duplicate(string):
        p = ""
        for char in string:
            if char not in p :
                p = p + char
        p1=""
        for char in p:
            if char!=" ":
                p1+=char

        return p1

    @classmethod
    def Create_key(cls, string: str):
        while not cls.Check_all_lower_case_exist(string) and ' ' not in string and not cls.check_lenght(string, 26,
                                                                                                        2000):
            if not cls.Check_all_lower_case(string):
                print("key contains must every letter in the English alphabet ('a' to 'z') at least once")
            if ' ' not in string:
                print("Key  must contain space")
            if not cls.check_lenght(string, 26, 2000):
                print("his lenght must be in [26 ,2000]")
            string = input("Type another Key Please ")
        print("Key is validated succefully by the system")
        return cls(string)

    def decodeMessage(self, key: '__main__.Solution'):
        lst=[]
        key.string=Solution.remove_duplicate(Key.string)
        for index in self.string:
            for Caracter_In_Msg_Position, caracter in enumerate(
                    key.string):  # Caracter_In_Msg_Position compteur numérique et x alphabetique
                if index == caracter and index !=" ":
                    lst.append(Solution.alphabet[Caracter_In_Msg_Position])
        for i,char in enumerate (self.string):
            if char==" ":
                lst.insert(i," ")
        return ' '.join(lst)


print("Hello and Thankyou for choosing us to Decode ")
print("Please Follow All of This instructions  ")
print("26 <= key.length <= 2000")
print("key consists of lowercase English letters and space.")
print("key contains every letter in the English alphabet ('a' to 'z') at least once.")
print("1 <= message.length <= 2000")
print("message consists of lowercase English letters and space.")
keyword = input("Enter your Key ")
Key = Solution.Create_key(keyword)
msg = str(input("Enter your Message that you want decode "))
message = Solution.Create_msg(msg)
print(f"Decoded msg = {message.decodeMessage(Key)} ")