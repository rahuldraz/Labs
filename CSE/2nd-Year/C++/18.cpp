/**
Write a program in C++ to define a class named Bank. Include the following data members:-

a. Name of account holder 

b. Account number

c. type of account 

d. balance amount in account

e. number of transactions in the bank(static data member)

Create the following member functions:-

i. To read inputs

ii. To deposit an amount

iii. To withdraw amount after checking current balance

Display number of transactions (use static function).
**/


#include<iostream>
#include<string.h>

using namespace std;

int no_trans;    //Global Variable
class bank
{
        long int acno;
        char nm[100], acctype[100];
        float bal;  
   public:
        static int no_of_trans;
        bank(int acc_no, char *name, char *acc_type, float balance)  //Parameterized Constructor
        {
                acno=acc_no;
                strcpy(nm, name);
                strcpy(acctype, acc_type);
                bal=balance;
        }
        void deposit();
        void withdraw();
        void display();
        static void trans_input()
        {
            cout<<"\nEnter the no. of transactions: ";
            cin>>no_trans;
        }
        static void trans_display()
        {
            cout<<"\nThe total no. of transactions: "<<no_trans;
        }
};
void bank::deposit()   //depositing an amount
{
        int damt1;
        cout<<"\n Enter Deposit Amount = ";
        cin>>damt1;
        bal+=damt1;
}
void bank::withdraw()  //withdrawing an amount
{
        int wamt1;
        cout<<"\n Enter Withdraw Amount = ";
        cin>>wamt1;
        if(wamt1>bal)
                cout<<"\n Cannot Withdraw Amount";
        bal-=wamt1;
}
void bank::display()  //displaying the details
{
        cout<<"\n ----------------------";
        cout<<"\n Accout No. : "<<acno;
        cout<<"\n Name : "<<nm;
        cout<<"\n Account Type : "<<acctype;
        cout<<"\n Balance : "<<bal;  
}

int main()
{
        int acc_no;
        char name[100], acc_type[100];
        float balance;                          //Input data 
        cout<<"\n Enter Details: \n";
        cout<<"\n Name : ";
        cin>>name;
        cout<<"\n Accout No. ";
        cin>>acc_no;
        
        cout<<"\n Account Type : ";
        cin>>acc_type;
        cout<<"\n Balance : ";
        cin>>balance;
        bank::trans_input();
        
  
        bank b1(acc_no, name, acc_type, balance);  //object is created
        b1.deposit(); 
        b1.withdraw(); // calling member functions to display the data
        b1.display(); 
        bank::trans_display();
        return 0;
}