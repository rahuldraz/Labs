#include<iostream>
using namespace std;

class C_POWER
{
    public:
        double power(double m, int n);
        int power(int m, int n);
        
        double num1;
        int num2;
        
        void read()
        {
            cout<<"Base = ";
            cin>>num1;
            cout<<"Power = ";
            cin>>num2;
        }

};
double C_POWER::power(double m, int n=2)
{
    cout<<"Accessing Double\n";
    double ans=1;
    for(int i=0;i<n;i++)
    {
        ans=ans*m;
    }
    return ans;
}

int  C_POWER::power(int m, int n)
{
    cout<<"\nAccessing integer\n";
    int ans=1;
    for(int i=0;i<n;i++)
    {
        ans=ans*m;
    }
    
    return ans;
}
    

int main()
{
    
    C_POWER obj;
    obj.read();
    cout<<"Answer= "<<obj.power(obj.num1,obj.num2)<<endl;
    cout<<"Answer= "<<obj.power(4,2);
    
    return 0;
}