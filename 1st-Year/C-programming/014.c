//WAP to swap two variable using a third variable.

#include<stdio.h>

int main()

{
	int a, b, c;

	printf("Enter a and b :");
	scanf("%d%d",&a, &b);
	printf("Before swapping\na=%d and b=%d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\nAfter swapping\na=%d and b=%d \n",a,b);
	return 0;
}