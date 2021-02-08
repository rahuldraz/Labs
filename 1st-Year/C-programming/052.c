// WAP in C to display all the elements present in even location in 1D array.
#include<stdio.h>
int main()
{
    int a[10], i, n;

    printf("Enter the size of an array : ");
    scanf("%d", &n);

    printf("\nEnter any %d array elements: ", n);
    for(i=0;i<n;i++)
      scanf("%d", &a[i]);

    printf("\nValues stored at even position are :\n");
    for(i=0;i<n;i++)
    {
        if(i%2==0)
          printf("A[%d] = %d\n", i, a[i]);
    }
    return 0;
}

