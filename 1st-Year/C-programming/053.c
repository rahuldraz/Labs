//WAP in C to find the sum of all odd elements in 1D array.

#include<stdio.h>
int main()
{
    int a[10], i, n, sum=0;

    printf("Enter the size of an array : ");
    scanf("%d", &n);

    printf("\nEnter any %d array elements: ", n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=0; i<5; i++)
    {
        if(a[i]%2==1)
            sum=sum+a[i];
    }
    printf("\nTotal sum of odd elements is : %d ",sum);

    return 0;
}
