//Write a program, in C++ to create a template class STACK and perform push and pop operations.

#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
template<class T>
class Stack
{
    T s[10];
    int top,n;
    public:
    Stack()
    {
        top=-1;
    }
    
    void push(T elt,int n)
    {
        if(top<n-1)
        {
            top++;
            s[top]=elt;
            cout<<s[top]<<" Pushed Successfully\n";
        }
        else
        {
            cout<<"\nStack Is Full\n";
        }
    }
    
    void pop()
    {
        if(top<0)
        {
            cout<<"\nStack Is Empty\n";
        }
        else
        {   
            cout<<"\nPopped Element : "<<s[top]<<endl;
            top--;
        }
    }
    void stk_operation();
};
    
    template<class T>
    void Stack<T> :: stk_operation()
    {
        int choice=1,i;
        T x;
        int size;
        cout<<"Enter The Size Of Stack : ";
        cin>>size;
        while(choice!=3)
        {
            cout<<"\n1. PUSH\n2. POP\n3. EXIT\n";
            cout<<"Enter The Choice : ";
            cin>>choice;
            switch(choice)
            {
                case 1 :
                cout<<"\nEnter the Element to push : ";
                cin>>x;
                push(x,size);
                break;
            case 2 :pop();
                    break; 
            case 3:cout<<"Exit\n";
                    break;
            default:cout<<"Invalid Choice! \n";
            }
        }
}
int main()
{
    cout<<"STACK OPERATION USING TEMPLATE\n";
    Stack<int> stk1;
    Stack<string> stk2;
    int ch=1;
    cout<<"\n\tSTACK OPERATION \n\n";
    while(ch!=3)
    {
        cout<<"\n1. INT STACK\n2. CHARACTER STACK\n3. EXIT\n";
        cout<<"Enter The Choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1 : stk1.stk_operation();
                    break;
            case 2 :stk2.stk_operation();
                    break;
            case 3: cout<<"EXIT POINT\n";
                    break;
            default :cout<<"Invalid Choice\n";
        }
    }
    return 0;
}