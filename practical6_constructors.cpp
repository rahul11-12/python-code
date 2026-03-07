Practical 6

P1 //Implement programs showcasing various types of constructors and destructors.

#include <iostream>

using namespace std;

class Example {

public:

Example() 
{
cout << "Default Constructor called" << endl;
}

Example(int v) 
{
cout << "Parameterized Constructor called with value: " << v << endl;
}

Example(const Example &obj) 
{
cout << "Copy Constructor called" << endl;
}

~Example() {
cout << "Destructor called" << endl;
}

};

int main() 
{
Example e1; // Default Constructor
Example e2(10); // Parameterized Constructor
Example e3 = e2; // Copy Constructor
return 0;
}



P 2 // C++ program to illustrate the concept of default constructors

#include <iostream>

using namespace std;

class construct {

public:

	int a, b;

	// Default Constructor
	construct()
	{
		a = 10;
		b = 20;
	}

};

int main()
{
	// Default constructor called automatically
	// when the object is created
	construct c;
	cout << "a: " << c.a << endl << "b: " << c.b;
	return 1;
}





P3 // CPP program to illustrate parameterized constructors

#include <iostream>

using namespace std;

class Point {

private:

	int x, y;

public:

	// Parameterized Constructor
	Point(int x1, int y1)
	{
		x = x1;
		y = y1;
	}

	int getX() { return x; }
	int getY() { return y; }

};

int main()
{
	// Constructor called
	Point p1(10, 15);

	// Access values assigned by constructor
	cout << "p1.x = " << p1.getX()
		<< ", p1.y = " << p1.getY();

	return 0;
}



P4 // C++ program to illustrate the use of  copy constructor

#include <iostream>

using namespace std;

class Sample {

	int id;

public:

	// parameterized constructor
	Sample(int x) 
	{ id = x; }

	void display() 
	{ cout << "ID=" << id; }

};

int main()
{

	Sample obj1(10);
	obj1.display();
	cout << endl;

	// creating an object of type Sample from the obj
	Sample obj2(obj1); // or obj2=obj1;
	obj2.display();
	return 0;

}
