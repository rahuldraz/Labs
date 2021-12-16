/**
Write a C++ program to create a class called COMPLEX and implement the following by overloading functions ADD() that return a COMPLEX number. ADD(a, s2)- where a is an integer (real part) and s2 is a complex number. ADD(s1, s2)- where s1 and s2 are complex numbers.
**/

#include<iostream>
using namespace std;

class COMPLEX            //class name complex
{
    public:
        int real,img;    //objects
        COMPLEX()        //a default costructor having same name as the class
        {
            real=0;     
            img=0;
        }
        
        COMPLEX(int r,int i)   // Parameterized Constructor
        {                     
            real=r;
            img=i;
        }
        
        COMPLEX ADD(COMPLEX s1, COMPLEX s2)      //Overloading function
        {                                        // To add two complex numbers
            COMPLEX res;                         // and return a complex number
            res.real= s1.real + s2.real;
            res.img= s1.img + s2.img;
            return res;
        }
        
        COMPLEX ADD(int a, COMPLEX s2)        //Overloading function 
        {                                     // to add real part and a complex
            COMPLEX ans;                      // and return a complex number
            ans.real=a+s2.real;
            ans.img=s2.img;
            return ans;
        }
};

int main()
{
   COMPLEX s1(3,4);                         // Function Call
   
   COMPLEX s2(5,6);                         // Function Call
   
   COMPLEX add_r;
   add_r=add_r.ADD(10,s2); 
   COMPLEX s3= s3.ADD(s1,s2);
   
   cout<<"Complex number1: "<<s1.real;cout<<"+i"<<s1.img<<endl;
   cout<<"Complex number2: "<<s2.real;cout<<"+i"<<s2.img<<endl;
   cout<<"Sum of real part and complex number: "<<add_r.real;cout<<"+i"<<add_r.img<<endl;
   cout<<"Sum of two complex numbers: "<<s3.real;cout<<"+i"<<s3.img<<endl;
   
}