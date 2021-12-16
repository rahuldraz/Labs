//Write a program in C++ to create a class named student, create a constructor and destructor for the class and demonstrate sequence of execution of constructors and destructors.

#include<iostream>
#include<string.h>
using namespace std;

class student
{
    int regn_no;
    float cgpa;
    char name[20];

    public:

    student(int x,float y,const char *ch) //parameterised constructor
    {
        regn_no=x;
        cgpa=y;
        strcpy(name,ch);
        cout<<"\nParameterised constructor called"<<endl;
    }
    ~student() //Destructor
    {
        cout<<"\nDestructor called"<<endl;
    }

    void display()
    {
        cout<<"\nThe registration Number is : "<<regn_no;
        cout<<"\nThe CGPA is : "<<cgpa;
        cout<<"\nThe name is : "<<name<<endl;
    }

};

int main()
{
    student *student1 = new student(2020,9,"Virat");
    student1->display();
    delete student1;
    
    student *student2 = new student(1582,9.5,"Rohit");
    student2->display();
    delete student2;
    
    student *student3 = new student(2025,8.9,"Surya");
    student3->display();
    delete student3;
  
    return 0;

}