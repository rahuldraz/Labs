/**
Write a C++ program to create a class called LIST (linked list) with member functions to :-

i. Delete an element fromany position.

ii. To display the list.
**/
#include<iostream>
#include<cstdlib>
using namespace std;

class list
{	 	  	   	    	  		   	 	
    public:
    int data;
    list *link;
    
    list()
    {
        data = 0;
        link = NULL;
    }
    
    list (int data)
    {
        this->data = data;
        this->link = NULL;
    }
};

class linklist:public list
{
    list *head;
    public:
    linklist()
    {
        head = NULL;
    }
    
    void insert_position();
    
    void display();
    
    void deleteposition();
};

void linklist::insert_position()
{
    list *temp, *newnode;
    int pos, x, i =1 ;
    newnode = new list(data);
    
    cout<<"Enter the position and data : ";
    cin>>pos>>x;
    if(head == NULL)
        {	 	  	   	    	  		   	 	
            head = newnode;
            head->data = x;
            head->link = NULL;
        }
        else
        {
            temp = head;
            newnode->data = x;
            newnode ->link = NULL;
            while(i < pos -1)
            {
                temp = temp->link;
                i++;
            }
            newnode->link = temp->link;
            temp->link = newnode;
    }
}

void linklist::deleteposition()
{
    list *temp, *position;
    int i = 1, pos;
    
    if (head == NULL)
    cout<<"\nList is empty\n";
  

    else {
    cout<<"\nEnter index to delete : ";
    cin>>pos;
    
    position = new list(data);
    temp = head;
  
        while (i < pos - 1) {	 	  	   	    	  		   	 	
            temp = temp->link;
            i++;
        }
  
        position = temp->link;
        temp->link = position->link;

        free(position);
    }
}

void linklist::display()
{
    while(head != NULL)
    {
        cout<<head->data<<"\t";
        head = head->link;
    }
}

int main()
{
    linklist list;
    int ch,x;
    while(1)
    {
    cout<<"\n1.Insert at any position\n2.Delete at any position\n3.Display the list\n4.Exit";
    cout<<"\nEnter choice: ";
    cin>>ch;
        switch(ch)
        {
            case 1:
            {
                list.insert_position();
                break;
            }	 	  	   	    	  		   	 	
            case 2:
            {
                list.deleteposition();
                break;
            }
            
            case 3:
            {
                list.display();
                break;
            }
            case 4:
                exit(1);
            
            default:
            cout<<"Enter valid choice.";
                
        }
    }

}