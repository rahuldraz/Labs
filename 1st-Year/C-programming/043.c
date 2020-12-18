//WAP in C to find fibannaci series upto Nth term using Loop
#include <stdio.h>


int main()
{
    int n;

    //Magic Initialization
    int a = 0,b = 1,c = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);
    

    printf("Fibonacci terms: \n");

    
    for(int i=0; i<n; i++)
    {
        printf("%d, ", c);
        a = b;     
        b = c;   
        c = a + b;
    } 
    return 0;
}