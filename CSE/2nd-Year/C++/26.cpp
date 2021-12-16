//Write an OOP in C++ to demonstrate accessing derived class objects’ members using base class pointers. Also show the sequence of execution of constructors and destructors when inheritance is involved.
#include <iostream>
using namespace std;
class BaseClass {
public:
	int var_base;
	void display()
	{
		cout << "Displaying Base class"
			<< " variable var_base: " << var_base << endl;
	}
	 BaseClass()
   {
      cout << "Base default constructor\n";
   }
};
class DerivedClass : public BaseClass {
public:
	int var_derived;
	void display()
	{
		cout << "Displaying Base class"
			<< "variable var_base: " << var_base << endl;
		cout << "Displaying Derived "
			<< " class variable var_derived: "
			<< var_derived << endl;
	}
	 DerivedClass()
   {
      cout << "Derived default constructor\n";
   }
};
int main()
{

	BaseClass* base_class_pointer;
	BaseClass obj_base;
	DerivedClass obj_derived;
	base_class_pointer = &obj_derived;
	base_class_pointer->var_base = 34;
	base_class_pointer->display();
	base_class_pointer->var_base = 3400;
	base_class_pointer->display();
	DerivedClass* derived_class_pointer;
	derived_class_pointer = &obj_derived;
	derived_class_pointer->var_base = 9448;
	derived_class_pointer->var_derived = 98;
	derived_class_pointer->display();
	return 0;
}