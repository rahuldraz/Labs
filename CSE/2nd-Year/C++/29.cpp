//WAP in C++ to create a class called Figure. Use this class to store two double type values that could be used to compute the area of various shapes (i.e. length, breadth for rectangle and base, height for triangle). Derive two specific classes called Triangle and Rectangle inherited from super class Figure. Create a virtual function called areaegg to compute and display the area of the basic shapes. Redefine this function in derived classes to suit its requirements.

#include<iostream>
using namespace std;

class figure
{
    public:
    double x,y;
    
    void read()
    {
        cout<<"\nEnter the length/base : ";
        cin>>x;
        cout<<"Enter the breadth/height :";
        cin>>y;
    }	 	  	   	    	  		   	 	
    
    virtual void compute_area()
    {
        
    }
    
};

class triangle: public figure
{
    void compute_area()
    {
        double area;
        area = (0.5)*x*y;
        cout<<"Area of triangle = "<<area;
    }
};

class rectangle: public figure
{
    void compute_area()
    {
        double area;
        area = x*y;
        cout<<"Area of rectangle = "<<area;
    }
};

int main()
{   
    figure* a;
    triangle tri;
    cout<<"Enter details for triangle:-"<<endl;
    tri.read();
    a=&tri;
    a->compute_area();
    rectangle rec;
    cout<<"\n\nEnter details for rectangle:-"<<endl;
    rec.read();
    a=&rec;
    a->compute_area();
}