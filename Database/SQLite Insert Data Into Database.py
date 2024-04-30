import sqlite3

# create Database and Connect
db = sqlite3.connect("app.db")  # he will create app.db if it does not exixst
# create the tabled and fields
db.execute("create table if not exists SKILLS (name text, progress integer, user_id integer)")
cr = db.cursor()
cr.execute("CREATE table if not exists USERS (user_id integer, name text)")
# insert data and save it
cr.execute("insert into users(user_id,name) values(1,'helmi')")
cr.execute("insert into users(user_id,name) values(2,'asma')")
cr.execute("insert into users(user_id,name) values(3,'ghada')")
'''
nb = int(input("donner le nbr de personne a ajouter "))
while (nb <= 0):
    nb = int(input("donner un nbr strictement postive"))
start = 4
i = 1
my_list=list()
while (i <= nb):
    name = str(input(f"donner le nom du personne numéro {start} "))
    i += 1
    start += 1
    my_list.insert(0,name)
for key,user in enumerate (my_list):
    cr.execute(f"insert into users(user_id,name) values({key},'{user}')")
'''
db.commit()
# close cata base
db.close()
