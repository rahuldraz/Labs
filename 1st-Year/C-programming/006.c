//WAP to find largest among 2 different number.

#include<stdio.h>

int main()

{
	int a,b;

	printf("Enter 2 Different Numbers:");
	scanf("%d %d",&a,&b);
	if(a!=b)
		a>b?printf("%d is Bigger\n",a):printf("%d is Bigger\n",b);
	else
		printf("Both are same Number\n");
	return 0;
}