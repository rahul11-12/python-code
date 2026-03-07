Program 1 : /*Develop a program that employs one and two-dimensional arrays within a class. 
Illustrate how classes can handle array-based data structures. */

#include <iostream>
using namespace std;

class ArrayExample
{
private:
    int arr1D[5];     // One-dimensional array
    int arr2D[2][2];  // Two-dimensional array (2x2 matrix)

public:

    void read1D()
    {
        cout << "Enter 5 elements for 1D array:\n";
        for (int i = 0; i < 5; i++)
            cin >> arr1D[i];
    }

    void display1D()
    {
        cout << "\n1D Array Elements:\n";
        for (int i = 0; i < 5; i++)
            cout << arr1D[i] << " ";
        cout << "\n";
    }

    void read2D()
    {
        cout << "\nEnter elements for 2x2 matrix:\n";
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                cin >> arr2D[i][j];
    }

    void display2D()
    {
        cout << "\n2x2 Matrix:\n";
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
                cout << arr2D[i][j] << " ";
            cout << "\n";
        }
    }
};

int main()
{
    ArrayExample obj;

    obj.read1D();
    obj.display1D();

    obj.read2D();
    obj.display2D();

    return 0;
}



Program 2 : /*Write a C++ program using a class to read and sort a one-dimensional array. */

#include <iostream>
using namespace std;

class ArraySorting
{
private:
    int arr1D[5],i,j,t;     // One-dimensional array

public:

    void read1D()
    {
        cout<<"\nEnter Five numbers";
        for(i=0;i<5;i++)
        cin>>arr1D[i];
    }

    void display1D()
    {
        for (int i = 0; i < 5; i++)
        cout << arr1D[i] << " ";
        cout << "\n";
    }

    void Sorting()
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = i+1; j < 5; j++)
            {
                if(arr1D[i]<arr1D[j])
                {
                    t=arr1D[i];
                    arr1D[i]=arr1D[j];
                    arr1D[j]=t;
                }
            }
        }
    }
};

int main()
{
    ArraySorting obj;

    obj.read1D();

    cout<<"\nElement Before sorting"<<endl;
    obj.display1D();

    obj.Sorting();

    cout<<"\nElement After sorting"<<endl;
    obj.display1D();

}
