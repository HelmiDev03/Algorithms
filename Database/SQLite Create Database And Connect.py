import sqlite3

# create Database and Connect
db = sqlite3.connect("app.db")#create app.db as database file if not exixst
# create the tabled and fields
db.execute("create table if not exists SKILLS (name text, progress integer, user_id integer)")
#close