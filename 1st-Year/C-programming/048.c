//WAP in C to demonstrate  search in 1 D array using Binary Search

#include<stdio.h>

int main(){
	int n,search,flag=0,start,end,mid;
	int a[100];
	printf("Enter Size of Array:");
	scanf("%d",&n);
	printf("Enter Values:");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);

	}
	start=0;
	end=n-1;
	mid=(start+end)/2;
	printf("Enter Element to search:");
	scanf("%d",&search);
	while(start<=end){
		if(search==a[mid]){
			printf("Found %d at Array[%d]\n",search,mid);
			flag=1;
			break;
		}
		if(a[mid]<search)
			start=mid+1;
		
		else
			end=mid-1;
		mid=(start+end)/2;
		
	}
	if(flag==0)
		printf("Not Found In Array!\n");
	return 0;
}