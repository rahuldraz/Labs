//WAP in C to demonstrate the use of basic arithmetic operation +,-,*,/,%.
 
#include<stdio.h>

int main()

{
	int a, b, sum, diff, prod, quo, rem;
	printf("\nEnter two operands : ");
	scanf("%d%d",&a, &b);
	sum = a+b;
	diff = a-b;
	prod = a*b;
	quo = a/b;
	rem = a%b;

	printf("\nSum:%d\nDiff:%d\nProd:%d\nQuo:%d\nRem:%d",sum, diff, prod, quo, rem);
	return 0;
}