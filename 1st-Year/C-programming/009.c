//WAP to demonstrate the use of float,char,double and unsigned int.

#include<stdio.h>

int main()

{
	char section;
	float weight;
	double height;
	unsigned int roll;

	printf("\nEnter section :");
	scanf("%c",&section);

	printf("\nEnter weight :");
	scanf("%f",&weight);

	printf("\nEnter height :");
	scanf("%lf",&height);

	printf("\nEnter roll :");
	scanf("%u",&roll);

	printf("\nSection:%c\nWeight:%f\nHeight=%lf\nRoll=%u\n",section, weight, height, roll);
	return 0;
}