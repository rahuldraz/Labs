//WAP to calculate the sum of series (1)^2+(2)^2+.....+(N)^2

#include<stdio.h>
#include<math.h>

int main()

{
	int n, sum=0, i;
	printf("Enter the value of n");
	scanf("%d",&n);
	i=0;
	while(i<=n)
	{
		sum=sum+pow(i,2);
		i++;	
	}
	printf("\n The sum of series is %d\n",sum);
	return 0;
}