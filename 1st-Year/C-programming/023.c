//WAP to find the roots of a quadratic equation using if-else construct.

#include<stdio.h>
#include<math.h>

int main()

{
	int a, b, c, D;
	float r1, r2;

	printf("Enter values of a, b and c:");
	scanf("%d %d %d",&a,&b,&c);
	D = b*b-4*a*c;
	
	if(D>0)
		{
		r1=((-1)*b+sqrt(D))/2*a;
		r2=((-1)*b+sqrt(D))/2*a;

		printf("Real and Distinct roots : %f\t%f \n",r1, r2);
		}

	else if(D==0)
		{
		r1=(-1)*b/2*a;
		printf("Real and equal roots:%f \n",r1);
		}

	else
		printf("Imaginary roots\n");
}
