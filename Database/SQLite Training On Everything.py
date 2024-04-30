import sqlite3


def Get_All_Data():
    db = sqlite3.connect("app.db")
    print("Connected To Data Base Succesfully ")
    cr = db.cursor()
    cr.execute("select * from users")
    result = cr.fetchall()
    print("Getting All Data........")
    print("Loading ...")
    for row in result:
        print(f"User_Id: {row[0]} , ",end=" ")
        print(f"Name : {row[1]} ")
Get_All_Data()