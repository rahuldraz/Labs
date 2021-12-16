/**

Define a structure named “Date” with three integer members “day”, “month” and “year”. Develop an

interactive modular program to perform the following tasks:

i. To read the data into structure members using a function.

ii. Create a function named validate() to validate the date

Display the date in the format “April 29 2014” using a function.

**/

#include<iostream>
using namespace std;

const int MAX_VALID_YR = 9999;  // Global constant variable
const int MIN_VALID_YR = 1000;

bool isLeap(int year)      // Returns true if given year is valid.
{
    return (((year % 4 == 0) &&      // The year is leap year if the year is divisible by 4 but it should not be divisible by 100 
         (year % 100 != 0)) ||       // Or the year must be divisible by 400
         (year % 400 == 0));         // For example: The year 1800 is not a leap year -> as it is divisible by 100 but not by 400
}

bool validate(int d, string mnth, int y)  // Since the Entered month is in string so convert it to int 
{                                         // So that it would be easier to validate the month
    int m=0;
    if(mnth== "january"||mnth=="January")
    m=1;
    else if(mnth=="february"||mnth=="February")
    m=2;
    else if(mnth=="march"||mnth=="March")
    m=3;
    else if(mnth=="april"||mnth=="April")
    m=4;
    else if(mnth=="may"||mnth=="May")
    m=5;
    else if(mnth=="june"||mnth=="June")
    m=6;
    else if(mnth=="july"||mnth=="July")
    m=7;
    else if(mnth=="august"||mnth=="August")
    m=8;
    else if(mnth=="september"||mnth=="September")
    m=9;
    else if(mnth=="october"||mnth=="October")
    m=10;
    else if(mnth=="november"||mnth=="November")
    m=11;
    else if(mnth=="december"||mnth=="December")
    m=12;
    
    // If year, month and day are not in given range
    if (y > MAX_VALID_YR ||
        y < MIN_VALID_YR)
    return false;
    if (m < 1 || m > 12)
    return false;
    if (d < 1 || d > 31)
    return false;
 
    // Handle February month with leap year
    if (m == 2)
    {
        if (isLeap(y))
        return (d <= 29);
        else
        return (d <= 28);
    }
 
    // Months of April, June, Sept and Nov must have number of days less than or equal to 30.
    if (m == 4 || m == 6 ||
        m == 9 || m == 11)
        return (d <= 30);
 
    return true;
}

void date(int,string,int);    // Function Declaration of the first part to read structure members

struct the_date  // Create a structure
{
    int day;
    string month;
    int year;
};

int main() 
{
    string d1;
    struct the_date dmy;   // Read the input from the user
    cout<<"Enter the Day (in numbers):"<<endl;
    cin>>dmy.day;
    cout<<"Enter the Month (in alphabets):"<<endl;
    cin>>dmy.month;
    cout<<"Enter the Year (in numbers):"<<endl;
    cin>>dmy.year;
   
    date(dmy.day,dmy.month,dmy.year);  // 1st Function Calling
   
    validate(dmy.day,dmy.month,dmy.year)?cout<<"Valid\n":cout<<"Not valid\n";   // Use of ternary operator to know whether the given date is valid
                                                                                                 // or not
return 0;
}

void date(int day, string month, int year)
{
    cout<<month<<"/"<<day<<"/"<<year<<endl;
}