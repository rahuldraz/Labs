#include<iostream>
using namespace std;

class EMPLOYEE          //Class Name EMPLOYEE
{
    public:
        string Employee_Name;              //Data Members 
        int Employee_Number,Basic,DA;
        
        double read_data();               //Function Declaration
        void print_data();
        double inc_tax(double gross);
        
    
        inline double net_sal(double gross)    // Function for obtaining net salary
        {
            return (gross-0.3*gross);
        }
        
};

inline double EMPLOYEE:: inc_tax(double gross)   // inline function outside class using scope resolution
{                                                // function to find income tax
    return 0.3*gross;
}

double EMPLOYEE:: read_data()                   // Function to read data
{
    cout<<"Enter the Name of Employee: ";
    cin>>Employee_Name;
    cout<<"Enter the Employee number: ";
    cin>>Employee_Number;
    cout<<"Enter the Basic Salary: ";
    cin>>Basic;
    
    return (Basic+0.52*Basic);                 //Returning the gross salary
}

void EMPLOYEE:: print_data()                   //Function to print data of employee
{
    cout<<"\nName of Employee: "<<Employee_Name<<endl;
    cout<<"Employee number: "<<Employee_Number<<endl;
    cout<<"Basic Salary: "<<Basic<<endl;
    cout<<"Dearness Allowance(DA): "<<0.52*Basic<<endl;
}

int main()
{
    EMPLOYEE obj1,obj2,obj3;                   
    
    double gross_sal;
    
    gross_sal=obj1.read_data();                       //Calling member functions
    obj1.print_data();
    
    cout<<"The gross salary is: "<<gross_sal<<endl;                     //Printing the gross salary
    cout<<"The income tax is: "<<obj2.inc_tax(gross_sal)<<endl;         //Income tax
    cout<<"The net salary is: "<<obj3.net_sal(gross_sal)<<endl;         // Net Salary
    
    return 0;
}