Practical 5 : Scope Resolution Operator

Program 1 //Write a C++ program to demonstrate the use of scope resolution operator (::).

#include <iostream>

int value = 10; // Global variable

void display() {

    int value = 20; // Local variable

    std::cout << "Local Value: " << value << std::endl; // Prints 20

    std::cout << "Global Value: " << ::value << std::endl; // Prints 10

}

int main() 

{

    display();

    return 0;

}





2. Use the scope resolution operator to declare variables at different scope levels in class. Display and compare the values of variables with different scopes.

#include <iostream>

using namespace std;

int num = 100; // Global variable

class Example

{

public:

    int num; // Public class variable

    void show()

    {

        int num = 50; // Local variable

        cout << "Local num = " << num << endl;        // Local variable

        cout << "Class num = " << this->num << endl; // Public class variable

        cout << "Global num = " << ::num << endl;    // Global variable using scope resolution operator

    }

};



int main()

{

    Example obj;

    obj.num = 200; // Assign value to public class variable

    obj.show();

    return 0;

}
