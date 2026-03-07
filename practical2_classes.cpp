//Practical 2 : Introduction to Classes:

//Program 1 : Create a simple class with data members and member functions. 
//Demonstrate the use of class instances to access data and invoke member functions. 

#include <iostream>
using namespace std;

// Class definition
class Test
{
  public:
    // Data member
    int val;

    // Member function
    void show()
    {
        val=100;
        cout << "Value: " << val << endl;
    }
};

int main()
{

    // Object will declareed here
    Test t1;
    t1.show();
    return 0;
}



//P22:Write a c++ program using classes and object student 
//to print name of the student,rollno. Display the same.

using namespace std;
#include<iostream>

class student
{
private:
char name[30];
int rollno;

public:
void getDetails(void);//member function to get students data
void putDetails(void);//member function to print students data
};

//member function definition outside of the class
void student::getDetails()
{	
	cout<<"Enter Name:";
	cin>>name;
	cout<<"Enter rollno"<<endl;
	cin>>rollno;
}
void student::putDetails()
{
	cout<<"Name is: "<<name<<endl;
	cout<<"Rollno is:"<<rollno<<endl;
}

int main()
{
	student s;
	s.getDetails();
	s.putDetails();
	return 0;
}
