/**
Create a class named circle with data member Radius, pi (constant member) and area. Create following member functions:

i. to accept the radius from the user

ii. to calculate the area of the circle

iii. to display the details

iv. Write Algorithm for program.

**/
#include<iostream>
using namespace std;

class circle                    //Creating a class named circle
{
    private:                    // making radius and pi variables inaccessible outside the class
        float radius;
        const double pi=3.14;   // constant always 
        
    public:
        float input_radius()    // creating a function input_radius() for accepting  radius from the user
        {
            cin>>radius;
            return radius;  
        }
        
        double find_area(float r)  // creating a function find_area() for finding the area of the circle
        {
           double area= pi*radius*radius;    // Calculating area
           return area;
        }
};

int main()
{
    circle obj;
    cout<<"Enter the radius: ";
    float r=obj.input_radius();     // Calling input_radius() function
    
    cout<<"The radius of the circle is: "<<r<<endl;      // Print Radius
    
    cout<<"The area of the circle of "<<r<<" radius is "<<obj.find_area(r)<<endl;  // Print area
    
    
    return 0;
}