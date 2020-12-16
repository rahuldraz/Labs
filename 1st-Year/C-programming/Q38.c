/***
WAP a program to display the following pattern using loop.

1 1 1 1
 2 2 2
  3 3
   4

***/

#include<stdio.h>
int main(){
	int n;
	printf("Enter the Value of N:");
	scanf("%d",&n);
	x=n;
	for(int i=1;i<=n;i++){
		for(int j=0;j<=i;j++)
			printf(" ");
		for(int j=i;j<=n;j++){
			printf("%d",i);
			printf(" ");
		}
		printf("\n");
	}
}