# Practical No: 01
# Aim: Write a program to create a class Student having data members and member functions

class Student:
    def get_data(self):
        self.name = input("Kindly enter your name: ")
        self.rollno = int(input("Kindly enter your roll no: "))
        self.age = int(input("Kindly enter your age: "))
        self.percent = float(input("Kindly enter your percent: "))

    def display_data(self):
        print("Your name is:", self.name)
        print("Your roll no is:", self.rollno)
        print("Your age is:", self.age, "years")
        print("Your percent is:", self.percent, "%")


print("\nEnter the details of Student 1\n")
s1 = Student()
s1.get_data()

print("\nEnter the details of Student 2\n")
s2 = Student()
s2.get_data()

print("\nDetails of Student 1 are:\n")
s1.display_data()

print("\nDetails of Student 2 are:\n")
s2.display_data()
