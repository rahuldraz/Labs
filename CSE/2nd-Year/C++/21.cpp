/**
Write a C++ program to create a class called COMPLEX and implement the following by overloading + operator:-

i. a+ s2; where a is an integer (real part) and s2 is a complex number.

ii. s1+ s2 ; where s1 and s2 are complex numbers.

iii. Return object and display the result.
**/
#include<iostream>
using namespace std;
class COMPLEX
{
    int real;
    int imag;
    public:
    void read()
    {
       cout<<" Enter Real part:";
       cin>>real;
       cout<<" Enter Imaginary part:";
       cin>>imag;
    }
    void display()
    {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
    COMPLEX operator+(COMPLEX);
    COMPLEX operator+(int);
};
COMPLEX COMPLEX::operator +(int x)
{
    COMPLEX temp;
    temp.real=real+x;
    temp.imag=imag;
    return temp;
}
COMPLEX COMPLEX::operator+(COMPLEX obj2)
{  
    COMPLEX temp;
    temp.real=real+obj2.real;
    temp.imag=imag+obj2.imag;
    return temp;
}
int main()
{
    COMPLEX obj1,obj2,obj3;
    int a;
    cout<<" Complex Number 1: \n";
    obj1.read();
    cout<< "\n Complex Number 2: \n";
    obj2.read();
    cout<<"\n Enter Integer : ";
    cin>>a;
    obj2=obj2+a;
    obj3=obj1+obj2;
    cout<<"\n a + Obj2 = ";
    obj2.display();
    cout<<"\n Obj1 + Obj2 = ";
    obj3.display();
    return 0;
   }