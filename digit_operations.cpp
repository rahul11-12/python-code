/*Define a class DigitOperations that contains methods multiplicationTable() that prints its multiplication table reverseNumber()-displays number in reverse ,factorial() calculates its factorial. In the main() function, implement a menu-driven program that allows the user to choose any one of these operations or exit the program.*/

#include <iostream>
using namespace std;

class DigitOperations 
{
private:
    int num;

public:

    void read_no() 
    {
        cout <<"Enter number ";
        cin>>num;
    }

    // Function to print multiplication table (1 to 10)
    void multiplicationTable() 
    {
        read_no();	
        cout << "\nMultiplication Table of " << num << ":\n";

        for (int i = 1; i <= 10; i++)
        {
            cout << num << " x " << i << " = " << num * i << "\n";
        }
    }

    // Function to reverse the number
    void reverseNumber() 
    {
        read_no();
        int temp = num, rev = 0;

        while (temp != 0) 
        {
            rev = rev * 10 + (temp % 10);
            temp /= 10;
        }

        cout << "\nReverse of " << num << " is: " << rev << "\n";
    }

    // Function to calculate factorial
    void factorial() 
    {
        read_no();
        int fact=1;    

        for (int i = 1; i <= num; i++) 
        {
            fact *= i;
        }

        cout << "\nFactorial of " << num << " is: " << fact << "\n";
    }
};

int main() 
{
    int choice;
    DigitOperations obj;

    do
    {
        cout << "\nChoose an operation:\n";
        cout << "1. Multiplication Table\n";
        cout << "2. Reverse Number\n";
        cout << "3. Factorial\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin>>choice;

        switch (choice) 
        {
            case 1:
                obj.multiplicationTable();
                break;

            case 2:
                obj.reverseNumber();
                break;

            case 3:
                obj.factorial();
                break;

            case 4:
                cout << "Exiting program.\n";
                break;
        }

    } while (choice != 4);
}

/*Create a class AreaCalculator with functions to calculate:
Area of circle , Area of rectangle ,Area of triangle
Write a menu-driven program that lets the user choose which shape's area to calculate*/

#include <iostream>
using namespace std;

class AreaCalculator
{
private:
    float a, b,area;   

public:

    void areaCircle()
    {
        cout << "Enter radius of circle: ";
        cin >> a;

        area = 3.14 * a * a;

        cout << "\nArea of Circle = " << area << "\n";
    }

    void areaRectangle()
    {
        cout << "Enter length: ";
        cin >> a;

        cout << "Enter breadth: ";
        cin >> b;

        area = a * b;

        cout << "\nArea of Rectangle = " << area << "\n";
    }

    void areaTriangle()
    {
        cout << "Enter base: ";
        cin >> a;

        cout << "Enter height: ";
        cin >> b;

        area = 0.5 * a * b;

        cout << "\nArea of Triangle = " << area << "\n";
    }
};

int main()
{
    AreaCalculator obj;
    int choice;

    do 
    {
        cout << "\n----- AREA CALCULATOR -----\n";
        cout << "1. Area of Circle\n";
        cout << "2. Area of Rectangle\n";
        cout << "3. Area of Triangle\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";

        cin >> choice;

        switch(choice)
        {
            case 1: obj.areaCircle(); break;
            case 2: obj.areaRectangle(); break;
            case 3: obj.areaTriangle(); break;
            case 4: cout << "Exiting program.\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }

    } while(choice != 4);

    return 0;
}
