//WAP to calculate the sum of N natural numbers.

#include<stdio.h>

int main()

{
	int n, sum=0, i;

	printf("Enter the value of n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum=sum+i;	
	}
	printf("The sum of series is %d \n",sum);
	return 0;

}