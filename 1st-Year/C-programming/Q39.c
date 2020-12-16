//WAP to count no of digits in a number using loop.

#include<stdio.h>
int main(){
	int n,c=0,r;
	printf("Enter a Number:");
	scanf("%d",&n);
	while(n>=1){
		r=n%10;
		//rev=(rev*10)+r;
		n=n/10;
		c++;
	}
	printf("Digits count-> %d\n",c);
}