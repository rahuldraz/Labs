//Write an OOP in C++ to create a base class convert with two data members val1 and val2 and two member functions getinit() and getconvert() which return the initial values and converted values. It includes a pure virtual function compute() which must be defined by by two derived classes lit_to_gal and far_to_cel. Each of these class have their own definition of compoute().
#include<iostream>
using namespace std;

class Convert
{
    public:
    float val1,val2;
    void getinit()
    {
        cin>>val1;
    }
    void getconvert()
    {
       cout<<val2;
        
    }
    virtual void compute()=0;
};

class lit_to_gal:public Convert
{
    public:
    void compute()
    {
        //litre to gallons
        val2=val1/3.785;
    }
};

class far_to_cel:public Convert
{
    public:
    void compute()
    {
        // fahrenheit to celsius
        val2=(val1-32)/1.8;
    }
};

int main()
{
    Convert *c;
    lit_to_gal ob1;
    far_to_cel ob2;
    c=&ob1;
    printf("Enter The Litre : ");
    c->getinit();
    c->compute();
    cout<<c->val1<<" Litre = ";
    c->getconvert();
    cout<<" Gallon\n";
    
    c=&ob2;
    printf("\n\nEnter The Fahrenheit : ");
    c->getinit();
    c->compute();
    cout<<c->val1<<" Fahrenheit = ";
    c->getconvert();
    cout<<" Celsius\n";
    
    return 0;
}