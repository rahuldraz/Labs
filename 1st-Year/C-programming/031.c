//WAP to Find Sum of a Digits of A Number
#include<stdio.h>
int main(){
	int sum=0,n,r;
	printf("Enter A Number:");
	scanf("%d",&n);
	while(n>0){
		r=n%10;
		sum+=r;
		n=n/10;
	}
	printf("Sum of Digits-> %d",sum);
	return 0;
}


