Practical 7

P1// C++ program to demonstrate the use/ differences between public and private scope specifiers

#include <iostream>

using namespace std;

class MyClass 
{

  public:    // Public access specifier
    int x;   // Public attribute

  private:   // Private access specifier
    int y;   // Private attribute

};

int main() {

  MyClass myObj;

  myObj.x = 25;  // Allowed (public)

  cout<<myObj.x;

  myObj.y = 50;  // Not allowed (private)

  return 0;

}



P2 // C++ program to demonstrate the working of Protected scope specifiers

#include <iostream>

using namespace std;

class Demo {

  private:
    int pvt = 1;

  protected:
    int prot = 2;

  public:
    int pub = 3;

    // function to access private member
    int getPVT() {
      return pvt;
    }

};

class Demopro : public Demo {

  public:

    // function to access protected member from Base
    int getProt() {
      return prot;
    }

};

int main() 
{

  Demopro object1;

  cout << "Private = " << object1.getPVT() << endl;
  cout << "Protected = " << object1.getProt() << endl;
  cout << "Public = " << object1.pub << endl;

  return 0;

}
