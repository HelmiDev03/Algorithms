#mouroruj 21/07/2022
def calculator(num1, num2, operator):
    if (operator == "+"):
        print(num1,"+",(num2),"=",num1 + num2)
    elif (operator == "-"):
        print(num1, "-",num2, "=",num1 - num2)
    elif (operator == "*"):
        print(num1, "*",(num2), "=",num1 * num2)
    else:
        if (num2 == 0):
            print("you can't divison by 0")
        else:
            print(num1,"/",(num2),"=",num1 / num2)


x = int(input("donner le premier numero "))
y = int(input("donner le deuxieme numero "))
op = "xx"
while op != "+" and op != "-" and op != "*" and op != "/":
    op = input("veuillez choisir un operateur ")
    if op != "+" and op != "-" and op != "*" and op != "/":
        print("operator invalide , veuillez saisir de nouveau")

calculator(x, y, op)
print(x + y)
