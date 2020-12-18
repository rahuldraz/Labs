//WAP in C to sort all interget   in 1 D array using Bubble Sort

#include<stdio.h>

void swap(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}

int main(){
	int n;
	int a[100];
	printf("Enter Size of Array:");
	scanf("%d",&n);
	printf("Enter Values:");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);

	}
	
	for(int i=0;i<n-1;i++)
		for(int j=0;j<n-i-1;j++)
			if(a[j]>a[j+1])
				swap(&a[j],&a[j+1]);

	printf("Sorted Array\n");
	for(int i=0;i<n;i++)
		printf("%d \n",a[i]);
	return 0;
}