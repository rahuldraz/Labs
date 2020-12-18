//WAP to find largest among 3 number using ternary operator.

#include<stdio.h>

int main()

{
	int a,b,c,big;

	printf("Enter 3 Numbers:");
	scanf("%d %d %d",&a,&b,&c);
	big = a > b ? (a > c ? a : c) : (b > c ? b : c) ;
	printf("%d is Bigger \n",big);
	return 0;
}