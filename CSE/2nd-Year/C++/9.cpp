#include<iostream>
using namespace std;

class student                   // Class name student
{   
    public:
        string name;            // variables inside class
        int reg_no;
        double  marks[3];
        int i;
        
        void read_data();
        void display_data();
    
    inline void avg(double total)         //Function Definition to find average of marks obtained
    {
        cout<<"The average is: "<<total/3;
    }
};

void student::read_data()                //Function to read the data of student
{
    cout<<"Enter the name of student: ";
    cin>>name;
    cout<<"Enter the registration number: ";
    cin>>reg_no;
    for(i=0;i<3;i++)
    {
        cout<<"Enter the marks in subject"<<i+1;cout<<":";
        cin>>marks[i];
    }
}
    
void student::display_data()          // Function to display the data of student
{
    cout<<"Name: "<<name<<endl;
    cout<<"Registration Number: "<<reg_no<<endl;
    for(i=0;i<3;i++)
    {
        cout<<"Marks in subject"<<i+1;cout<<":"<<marks[i]<<endl;
    }
}

int main()
{
    student obj1;              // Object 
    double sum=0;
    
    obj1.read_data();         //Function call
    cout<<endl;
    obj1.display_data();      // Function call
    
    for(int j=0;j<3;j++)
    {
        sum+=obj1.marks[j];   
    }
    
    obj1.avg(sum);             // Function Call
    
    return 0;
}