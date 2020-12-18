#include <stdio.h>

void fib(int n){

    int a = 0,b = 1,c = 0;

    printf("Fibonacci terms: \n");

    
    for(int i=0; i<n; i++)
    {
        printf("%d, ", c);
        a = b;     
        b = c;   
        c = a + b;
    } 
}

int main()
{
    int n;


    printf("Enter number of terms: ");
    scanf("%d", &n);
    fib(n);

}