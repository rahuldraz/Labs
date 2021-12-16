//Write a program in C++ to create a template function and perform bubble sort.
#include <iostream>
using namespace std;
  

template <class T>
void bubbleSort(T a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j] < a[j - 1])
              swap(a[j], a[j - 1]);
}
  

int main() 
{
    cout<<"Enter 10 integer elements: ";
    int arr[10];
    for(int i=0;i<9;i++)
    {
        cin>>arr[i];
    }
    
  
    bubbleSort<int>(arr, 9);
  
    cout << " Sorted array : ";
    for (int i = 0; i < 9; i++)
        cout << arr[i] << " ";
    cout << endl;
  
  return 0;
}