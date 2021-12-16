#include<iostream>
using namespace std;
class TIME
{
    float hr;
    int min;
    public:
    void read()
    {
        cout<<"Enter the hours : ";
        cin>>hr;
        cout<<"Enter the minutes : ";
        cin>>min;
    }
    void print()
    {
        cout<<hr<<" Hours "<<min<<" Minutes "<<endl;
    }
    friend TIME add(TIME t1 , TIME t2);
    friend TIME add(TIME t1 , int x);
};

TIME add(TIME t1, TIME t2)
{
    TIME t;
    int i=0;
    if((t1.min + t2.min)>=60)
    {
        i = (t1.min + t2.min)/60;
    }
    t.hr = t1.hr + t2.hr + i ;
    t.min = t1.min +t2.min - i*60;
    return t;
}


TIME add(TIME t1 , int x)
{
    TIME t;
    int i=0;
    if((x+t1.min)>=60)
    {
        i = (x+t1.min) / 60;
    }
    t.hr = t1.hr  + i;
    t.min = t1.min + x  -i*60;
    return t;
}

int main()
{
    TIME t1,t2,t3;
    cout<<"Enter The 1st Time : \n";
    t1.read();
    cout<<"\nEnter The 2nd Time : \n";
    t2.read();
    cout<<"\n\tT1 + T2 :\n";
    t3 = add(t1 , t2);
    t3.print();
    cout<<"\nEnter The Value Of x : ";
    int x;
    cin>>x;
    t3 = add(t1 , x);
    cout<<"\nT1 + x = "; 
    t3.print();
    return 0;
}