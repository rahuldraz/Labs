//WAP to if number is even or odd
#include<stdio.h>


int main()

{
	int a;

	printf("Enter a Number:");
	scanf("%d",&a);
	a%2==0?printf("%d is Even\n",a):printf("%d is Odd\n",a);
	return 0;
}