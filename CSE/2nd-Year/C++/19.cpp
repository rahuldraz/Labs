//Write an OOP in C++ to demonstrate static members of a class. Include static data members to count the number of objects created for the class

#include <iostream>
using namespace std;
class My_Class
{
private:
   static int count;
   public:
    My_Class() 
{ 
    cout << "Count of number of object" << endl;
    count++;
}
    static int objCount() 
{
    return count;
    }
};
int My_Class::count;
int main() 
{
   My_Class my_obj1, my_obj2, my_obj3, my_obj4;
   int cnt;
   cnt = My_Class::objCount();
   cout << "Number of objects:" << cnt;
   return 0;
}