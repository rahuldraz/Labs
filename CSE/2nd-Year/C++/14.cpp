/**
Write a C++ program to create a class called STRING and implement the following operations. STRING s1=”SMIT” STRING s2=”MAJITAR” STRING s3=s1+s2 (Use copy constructor).
**/

#include<iostream>
using namespace std;

class STRING              // Class name
{
    private:              //private specifier
        string s1,s2,s3;
     
    public:                                 //public specifier
        STRING(string st1,string st2)
        {
            s1=st1;                         // values assigned
            s2=st2;
        }
        //Copy String-->
        STRING(STRING &str)
        {
            s1=str.s1;
            s2=str.s2;
        }
       /* void display()                   
        {
            cout<<" "<<s1;cout<<" "<<s2<<endl;
        }*/
        
        string display()                 //display the output
        {
            s3=s1+s2;
            return s3;
        }
       
};

int main()
{
    STRING obj1("SMIT"," MAJITAR");             // using copy constructor to join two different strings
    STRING obj2=obj1;
    cout<<"Normal Constructor: "<<obj1.display()<<endl;             
    cout<<"Copy Constructor: "<<obj2.display();              
    
    return 0;
}