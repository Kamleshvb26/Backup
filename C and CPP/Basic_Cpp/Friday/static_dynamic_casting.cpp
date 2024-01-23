// C++ program demonstrate if there
// is no virtual function used in
// the Base class
#include <iostream>
using namespace std;

// Base class declaration
class Base {
	virtual void print()
	{
		cout << "Base" << endl;
	}
};

// Derived Class 1 declaration
class Derived1 : public Base {
	void print()
	{
		cout << "Derived1" << endl;
	}
};

// Derived class 2 declaration
class Derived2 : public Base {
	void print()
	{
		cout << "Derived2" << endl;
	}
};

// Driver Code
int main()
{
	
    Base *b=new Derived1();
	// Base class pointer hold Derived1
	// class object
	//Base* bp = dynamic_cast<Base*>(&d1);

	// Dynamic casting
	 dynamic_cast<Derived1*>(b);
	if (b == nullptr)
		cout << "null" << endl;
    b->print();

	return 0;
}
