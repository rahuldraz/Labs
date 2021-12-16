//7. Write C++ Program to swap two numbers using temporary variable.

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    return 0;
}