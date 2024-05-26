import mysql.connector
conn=mysql.connector.connect(host="localhost",user="root",password="123456",database="School")
cur=conn.cursor()
cur.execute("select * from DRESS")

data=cur.fetchall()

print(data)


