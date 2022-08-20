import sqlite3
import logging
import PyQt5
user_name = input("Enter your Name ").capitalize()
uid = 2
db = sqlite3.connect("app.db")
cr = db.cursor()
msg = """"
What Do You Want To Do
s===>Show Skill
a===>Add New Skill
d===>Delete A Skill
u===>Update Skill Progress
q===>Quit The App
Choose Option
"""



def commit_and_close_db():
    db.commit()
    db.close()
    print("Connection To Data Base is Closed ")


def show_skills():
    print("Show Skill")
    cr.execute("select * from SKILLS where user_id={udi} ")
    result = cr.fetchall()
    for row in result:
        print(f"Skill: {row[0]}", end="/")
        print(f"Progress={row[1]}%")

    commit_and_close_db()


def add_new_skill():
    user=user_name
    sk = input("Add New Skill ").capitalize().strip()
    cr.execute(f"select name from SKILLS where user_id='{uid}' and name='{sk}'  and username='{user}'")
    result = cr.fetchone()
    while result != None:  # there is A skill in Db already stored with name sk
        print(f"{sk} is already saved as a skill for the person with user_id={uid} :)")
        logging.basicConfig(filename="Skill_App_Problem", filemode="a",
                            format=" %(asctime)s %(name)s %(levelname)s %(name)s  %(message)s    ")
        user = logging.criticall(" IsT rying To Add An Exisiting Skill ")
        sk = input("Add New Skil ").capitalize().strip()
        cr.execute(f"select name from SKILLS where user_id='{uid}' and name='{sk}'  and username='{user}' ")
        result = cr.fetchone()

    pr = int(input("Enter your Progress : "))
    cr.execute(f"insert into SKILLS (name,progress,user_id) values ('{sk}','{pr}','{uid}')")
    commit_and_close_db()


def delete_skill():
    sk = input("Enter The Skill That You Want To Deleated ").capitalize()
    cr.execute(f"delete from SKILLS  where name='{sk}' and progress=20")
    commit_and_close_db()


def update_skill_progress():
    print("Update Skill ")
    sk = input("Enter your  Skill , It must be already Saved ").capitalize()
    pr = int(input("Enter your skill progress "))
    cr.execute(f"update SKILLS set progress='{pr}' where user_id='{uid}' and name='{sk}'")
    print("Updated Sucssefully")
    commit_and_close_db()


user_input = input(msg).strip().lower()
Command_List = ["s", "a", "d", "u", "q"]
if user_input in Command_List:
    print(f"Command {user_input} is found ")
    if user_input == "s":
        show_skills()
    elif user_input == "a":
        add_new_skill()
    elif user_input == "d":
        delete_skill()
    elif user_input == 'u':
        update_skill_progress()
else:
    print(f"Command {user_input} is not  found ==>", end="Quitting The app ...")
    commit_and_close_db()
