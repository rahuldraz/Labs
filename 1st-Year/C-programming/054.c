//WAP in C to count number of positive , negative and zero elements in 1D array.

#include<stdio.h>
int main()
{
    int a[10], n, i, positive=0, negative=0, zero=0;

    printf("Enter the size of an array : ");
    scanf("%d", &n);

    printf("\nEnter any %d array elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        if(a[i]>0)
            positive++;
        else if(a[i]<0)
            negative++;
        else
            zero++;
    }

   printf("\nCount of positive number is %d", positive);
   printf("\nCount of negative number is %d", negative);
   printf("\nCount of zeros is %d", zero);

   return 0;
}
