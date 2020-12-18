//WAP to find greatest among three numbers using if-else construct.

#include<stdio.h>
int main(){
	int a,b,c;

	printf("Enter three numbers :");
	scanf("%d %d %d",&a,&b,&c);

	if(a>b){
		if(a>c)
			printf("A is greatest\n");
		else
			printf("C is greatest\n");
	}
	else if(b>c)
		printf("B is greatest\n");
	else
		printf("C is greatest\n");

}