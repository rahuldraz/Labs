/***
WAP a program to display the following pattern using loop.

1111
 222
  33
   4

***/

#include<stdio.h>
int main(){
	int n,x,l=1;
	printf("Enter the Value of N:");
	scanf("%d",&n);
	x=n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=l;j++)
			printf(" ");
		for(int k=0;k<=n-i;k++){
			printf("%d",i);
		}
		l++;
		printf("\n");
	}
}