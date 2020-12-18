//WAP in C to condense number into single digit
#include <stdio.h>


int main()
{
    int n,sum=0;


    printf("Enter number to condense: ");
    scanf("%d", &n);
    
    while(n > 0 || sum > 9) 
    { 
        if(n == 0) 
        { 
            n = sum; 
            sum = 0; 
        } 
        sum += n % 10; 
        n /= 10; 
    } 
    printf("The condense Sum ->%d\n",sum);
    return 0;
}
