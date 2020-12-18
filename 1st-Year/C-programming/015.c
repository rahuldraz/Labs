//WAP to swap two variable without using a third variable.

#include<stdio.h>

int main()
{
	int a, b;

	printf("Enter a and b :");
	scanf("%d%d",&a,&b);
	printf("\nBefore swapping\na=%d and b=%d",a, b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter swapping\na=%d and b=%d",a, b);
	return 0;
}