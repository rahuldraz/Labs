//WAP to find sum and average of 5 numbers.

#include<stdio.h>

int main()

{
	int a,b,c,d,e,sum=0;
	float avg;

	printf("Enter 5 Numbers:");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	sum=a+b+c+d+e;
	avg=sum/5;
	printf("Sum->%d\nAvg->%f \n",sum,avg);
	return 0;
}