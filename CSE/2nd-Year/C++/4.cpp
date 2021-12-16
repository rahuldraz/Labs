#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int num;
    float sqroot, cbroot;
    cout<<"Enter a number : ";
    cin>>num;
    
    sqroot= sqrt(num);
    cbroot= cbrt(num);
    cout<<"\nSquare root of "<<num<<" is "<<sqroot<<endl;
    cout<<"Cube root of "<<num<<" is "<<cbroot;
}