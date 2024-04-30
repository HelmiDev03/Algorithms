import sqlite3
db=sqlite3.connect("app.db")

cr=db.cursor()
cr.execute("select name from users")
#* stand from all elemnts in colon (on user there is user_id and username
print(cr.fetchall()) #fetchall return a list of tupple of all elemnts
cr.execute("select name from users")
print(cr.fetchmany(2))#fetchmany(num) print first num elemnts
print(cr.fetchone())
cr=cr.execute("select name from users")
print(cr.fetchone())
print(cr.fetchone())

