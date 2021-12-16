#include<iostream>
using namespace std;

class DM
{
    public:
    double meter,centimeter;
};

class DB
{
    public:
    double feet,inches;
    friend void add(DM,DB);
};

void add(DM dm,DB db)
{
    double d1,d2;
    cout<<"\nEnter The Distance In Meter : ";
    cin>>dm.meter;
    cout<<"\nEnter The Distance In Centimeter : ";
    cin>>dm.centimeter;
    cout<<"\nEnter The Distance In Feet : ";
    cin>>db.feet;
    cout<<"\nEnter The Distance In Inches : ";
    cin>>db.inches;
    d1=dm.meter+(db.feet)/3.281;
    d2=dm.centimeter+(db.inches)*2.54;
    cout<<"\nMeter + Feet = "<<d1<<" meter";
    cout<<"\nCentimeter + inches = "<<d2<<" centimeter";
}
int main()
{
    DM dm;
    DB db;
    add(dm,db);
}