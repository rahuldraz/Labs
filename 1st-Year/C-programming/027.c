//WAP to design a basic calculator using else if ladder.

#include<stdio.h>
#include<math.h>

int main()

{
	double a,b,result;
	char ch;
	printf("Enter Choice \n'+'for Add\n'-'for sub\n'*'for multiply \n'^'for pow\n'/'for div\n:");
	scanf("%c",&ch);
	printf("Enter two operands : ");
	scanf("%lf %lf",&a,&b);
	if(ch=='+')
		result = a+b; 
	else if(ch=='-')
		result = a-b; 
	else if(ch=='*')
		result = a*b; 
	else if(ch=='^')
		result = pow(a,b); 
	else if(ch=='/')
		result = a/b; 
	else 
		printf("\nInvalid input");
	printf("The result is %lf \n",result);
	return 0;
}