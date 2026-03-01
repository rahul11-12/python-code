import mysql.connector

# Create connection
connection = mysql.connector.connect(
    host="localhost",
    user="root",
    password="admin"
)

cursor = connection.cursor()

# Create database
try:
    cursor.execute("CREATE DATABASE IF NOT EXISTS Customers_DB")
    print("Database 'Customers_DB' created successfully (if not existed already)")
except mysql.connector.Error as error:
    print("Error:", error)

# Use database
connection.database = "Customers_DB"

# Create table
create_table_query = """
CREATE TABLE IF NOT EXISTS Customers (
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(50)
)
"""
cursor.execute(create_table_query)
print("Customers table created successfully")

# Insert data
insert_query = "INSERT INTO Customers (name) VALUES (%s)"
values = [("Alice",), ("Bob",), ("Charlie",)]
cursor.executemany(insert_query, values)
connection.commit()
print("Records inserted successfully")

# Select data
cursor.execute("SELECT * FROM Customers")
records = cursor.fetchall()
print("Customer Records:")
for row in records:
    print(row)

# Delete data
delete_query = "DELETE FROM Customers WHERE name = 'Bob'"
cursor.execute(delete_query)
connection.commit()
print("Record deleted successfully")

# Close connection
cursor.close()
connection.close()

#second page 
import mysql.connector

# Create connection
connection = mysql.connector.connect(
    host="localhost",
    user="root",
    password="admin",
    database="Customers_DB"
)

cursor = connection.cursor()

# Create table
create_table_query = """
CREATE TABLE IF NOT EXISTS Customers (
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(50),
    email VARCHAR(100),
    age INT
)
"""
cursor.execute(create_table_query)
print("Table 'Customers' created successfully (if not existed already)")

# Insert customer function
def insert_customer(name, email, age):
    insert_query = """
    INSERT INTO Customers (name, email, age)
    VALUES (%s, %s, %s)
    """
    data = (name, email, age)
    cursor.execute(insert_query, data)
    connection.commit()
    print(f"Customer '{name}' added successfully")

# Insert records (same names as notebook)
insert_customer("Akash", "akash99@gmail.com", 20)
insert_customer("Ankit", "ankit99@gmail.com", 21)
insert_customer("Shubham", "shubham99@gmail.com", 22)
insert_customer("Ritesh", "ritesh99@gmail.com", 24)
insert_customer("Gautam", "gautam@gmail.com", 25)

# Select records
def select_customers():
    cursor.execute("SELECT * FROM Customers")
    records = cursor.fetchall()
    print("Customer Records:")
    for row in records:
        print(row)

select_customers()

# Close connection
cursor.close()
connection.close()


#3rd page  

import mysql.connector

# Database connection
connection = mysql.connector.connect(
    host="localhost",
    user="root",
    password="admin",
    database="Customers_DB"
)

cursor = connection.cursor()

# Select all customers
def select_all_customers():
    select_query = "SELECT * FROM Customers"
    cursor.execute(select_query)
    rows = cursor.fetchall()
    print("Customer Records:")
    for row in rows:
        print(row)


# Update customer age
def update_customer_age(customer_id, new_age):
    update_query = """
    UPDATE Customers
    SET age = %s
    WHERE id = %s
    """
    data = (new_age, customer_id)
    cursor.execute(update_query, data)
    connection.commit()
    print(f"Customer with id {customer_id} updated successfully")


# Delete customer
def delete_customer(customer_id):
    delete_query = "DELETE FROM Customers WHERE id = %s"
    cursor.execute(delete_query, (customer_id,))
    connection.commit()
    print(f"Customer with id {customer_id} deleted successfully")


# Function calls (same flow as notebook)
select_all_customers()

update_customer_age(1, 22)
select_all_customers()

delete_customer(2)
select_all_customers()

# Close connection
cursor.close()
connection.close()



#4page
# Delete customer record

def delete_customer(customer_id):
    delete_query = "DELETE FROM Customers WHERE id = %s"
    data = (customer_id,)

    cursor.execute(delete_query, data)
    connection.commit()

    print(f"Customer with id {customer_id} deleted successfully")


# Function calls (same as notebook)
delete_customer(2)
select_all_customers()

cursor.close()
connection.close()

print("Database connection closed")



