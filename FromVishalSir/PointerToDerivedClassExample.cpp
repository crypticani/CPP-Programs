// C++ program to implementation of the base class pointer pointing to derived class

#include <iostream>
using namespace std;

// Base Class
class BaseClass {
	public:
		int x;

	// Function to display the base class members
	void display()
	{
		cout << "Displaying Base class"<<" variable in base" << x<< endl;
	}
};

// Class derived from the Base Class

class DerivedClass : public BaseClass 
{
public:
	int y;

	// Function to display the base and derived class members
	void display()
	{
		cout << "Displaying Base class"<< "variable in derived: " << x << endl;
		cout << "Displaying Derived "<< " variable in derived: "<< y << endl;
	}
};

int main()
{
	// Pointer to base class
	BaseClass *ptrB;
	BaseClass objB;

	DerivedClass objD;

	// Pointing to derived class

	ptrB = &objD;

	ptrB->x = 34;

	// Calling base class member function
	ptrB->display();

	ptrB->x = 3400;
	ptrB->display();
 
	DerivedClass *ptrD;   

	ptrD = &objD;
	ptrD->x = 9448;
	ptrD->y = 98;
	ptrD->display();

	return 0;
}
