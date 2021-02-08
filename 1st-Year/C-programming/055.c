//WAP in C to display all the prime numbers in 1D array.

#include<stdio.h>
int main()
{
    int a[10],i,j,n,counter;

    printf("Enter the size of an array : ");
    scanf("%d", &n);

    printf("\nEnter any %d array elements: ", n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nPrime numbers in the array are :\n");
    for(i=0;i<n;i++)
    {
        counter=0;
        for(j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
                {
                    counter=1;
                    break;
                }
        }
            if(counter==0)
            {
                 printf("%d \n",a[i]);
            }
    }
     return 0;
}
