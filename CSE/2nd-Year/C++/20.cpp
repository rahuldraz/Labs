//Write an OOP in C++ to demonstrate static members function of a class to pre-initialize private static data members. Also show restrictions that apply on static member functions.

#include<iostream>
using namespace std;

class demo
{
    static int a; //declaring static variable a
    int b;

    public : 

    static void abc()
    {
        a = 15;
        //b = 5; (not allowed as b is non-static)
        cout<<a;
    }
};
int demo :: a;  //defining static variable a

int main()
{
    demo::abc(); //calling static member function abc();
    return 0;
}