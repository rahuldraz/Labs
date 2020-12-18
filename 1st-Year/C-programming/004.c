//WAP to demonstrate working of printf() and scanf() in C.

#include<stdio.h>

int main(){
	char gender;
	int age;
	float height;
	printf("\nEnter Gender M/F :");
	scanf("%c",&gender);
	printf("\nEnter age :");
	scanf("%d",&age);
	printf("\nEnter height :");
	scanf("%f",&height);
	printf("\nGender:%c , Age:%d , Height:%f\n",gender, age, height);
	return 0;
}