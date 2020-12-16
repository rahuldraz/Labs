//WAP in C to reverse elements 1 D array and store in another array

#include<stdio.h>

int main(){
	int n,j=0;
	int a[100],b[100];
	printf("Enter Size of Array:");
	scanf("%d",&n);
	printf("Enter Values:");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);

	}
	for(int i=n-1;i>=0;i--){
		b[j]=a[i];
		j++;
	}
	printf("----- Main Array -----\n");
	for(int i=0;i<n;i++)
		printf("%d\n",a[i]);
	printf("----Reversed Array----\n");
	for(int i=0;i<n;i++)
		printf("%d\n",b[i]);
	
}