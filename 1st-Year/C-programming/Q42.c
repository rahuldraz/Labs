//WAP in C to find factorial of a number using Loop
#include <stdio.h>


int main()
{
    int n;
    long int f=1;


    printf("Enter number whose factorial to find: ");
    scanf("%d", &n);
    
    if(n>=0)
        if(n==0)
            printf("Factorial-> 1\n");
        else{
            for(int i=1; i<=n; i++)
            f=f*i; 
        printf("Factorial-> %ld \n",f);
        }
    else
        printf("Factorial Doesn't Exist!\n");
}
