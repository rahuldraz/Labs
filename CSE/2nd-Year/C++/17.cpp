//Write an OOP in C++ to create a Class Two values with two integer type data members and member function to read values in those data members. Create another Class Min_Max and declare it as friend of Class Twovalues. Min_Max should have member functions to find the minimum and maximum of two values.
#include<iostream>
using namespace std;

class Input
{
     public:
        int num1,num2;
        void read_values()
        {
            cout<<"Number 1= ";
            cin>>num1;
            cout<<"Number 2= ";
            cin>>num2;
        }
        friend class Min_Max;   //friend class
};

class Min_Max
{
    public:
        int flag=0;
        void Max_and_Min(Input &ans)
        {
            if(ans.num1>ans.num2)
            {
                cout<<" "<<ans.num1;cout<<" is maximum"<<endl;
                flag=1;
            }
            else
            {
                cout<<" "<<ans.num2;cout<<" is maximum"<<endl;
                
            }
            
            if(flag==1)
            {
                cout<<" "<<ans.num2;cout<<" is minimum"<<endl;
            }
            else
            {
                cout<<" "<<ans.num1;cout<<" is minimum"<<endl;
            }
        }
    
};

int main()
{
    Input ans;
    Min_Max obj;
    ans.read_values();
    obj.Max_and_Min(ans);
    
    return 0;
}