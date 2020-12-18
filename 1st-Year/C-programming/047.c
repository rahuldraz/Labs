//WAP in C to demonstrate linear search in 1 D array.

#include<stdio.h>

int main(){
	int n,search,flag=0;
	int a[100];
	printf("Enter Size of Array:");
	scanf("%d",&n);
	printf("Enter Values:");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);

	}
	printf("Enter Element to search:");
	scanf("%d",&search);
	for(int i=0;i<n;i++)
		if(search==a[i]){
			printf("Found %d at Array[%d]\n",search,i);
			flag=1;
		}
	if(flag==0){
		printf("Not Found In Array!\n");
	}
	return 0;
}