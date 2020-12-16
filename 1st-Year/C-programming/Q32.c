//WAP to reverse a number and check if its palindrome or not

#include<stdio.h>
int main(){
	int n,x,r,rev=0;
	printf("Enter a Number:");
	scanf("%d",&n);
	x=n;
	while(x>=1){
		r=x%10;
		rev=(rev*10)+r;
		x=x/10;
	}
	printf("Reverse-> %d\n",rev);
	if(n==rev)
		printf("%d is Palindrome Number\n",n);
	else
		printf("%d is not a Palindrome Number\n",n);
}