// C++ program to swap two numbers without using temporary variable

#include<iostream>
using namespace std;
int main()
{
    int a=2,b=3;
    cout<<"before swapping 1st number and 2nd number is respectively : "<<a<<endl;
    cout<<b<<endl;
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"After swapping 1st number and 2nd number is respectively :"<<a<<endl;
    cout<<b<<endl;
    return 0;
}