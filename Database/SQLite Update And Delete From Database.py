import sqlite3
db=sqlite3.connect("app.db")
cr=db.cursor()
#cr.execute("delete from users where user_id =2")#delete from (table_name) where (value of colun in foldernam)==
#cr.execute("update users set name='ghadghouda' where user_id=3") #update (table-name) set (coloun name)=haja where any colun name=
cr.execute("update users set user_id =2 where name='ghadghouda'")
db.commit()