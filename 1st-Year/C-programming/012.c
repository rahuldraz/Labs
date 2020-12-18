//WAP to compute simple interest.

#include<stdio.h>
#define RATE 10

int main()

{
	int t;
	float p , SI ,amt;

	printf("\nEnter principle and time :");
	scanf("%f%d",&p, &t);
	SI = (p*RATE*t)/100;
	amt = p+SI;
	printf("SI:%f\nAmount:%f\n",SI, amt);
	return 0;
}