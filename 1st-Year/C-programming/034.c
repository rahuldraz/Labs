/***
WAP a program to display the following pattern using loop.

*
**
***
****

***/

#include<stdio.h>
int main(){
	int n;
	printf("Enter Size of N:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
