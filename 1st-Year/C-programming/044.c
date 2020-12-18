//WAP in C to find sum and average of elements in 1D float Array.

#include<stdio.h>

int main(){
	int n;
	float a[100],sum=0,avg=0;
	printf("Enter Size of Array:");
	scanf("%d",&n);
	printf("Enter Values:");
	for(int i=0;i<n;i++){
		scanf("%f",&a[i]);
		sum+=a[i];
	}
	avg=sum/n;
	printf("Sum->%f \nAvg->%f\n",sum,avg);
}