//WAP to design a basic calculator .

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
	switch(ch)

	{
		case '+' : result = a+b; 
			break;
	
		case '-' : result = a-b; 
			break;

		case '*' : result = a*b; 
			break;

		case '^' : result = pow(a,b); 
			break;	
	
		case '/' : result = a/b; 
			break;
	
		default: 
			printf("\nInvalid input");
	}
	printf("The result is %lf \n",result);
	return 0;
}