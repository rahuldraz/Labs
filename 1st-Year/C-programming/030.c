//WAP to print series like 11+22+33... NN terms

#include<stdio.h>

int main()

{
	int n,  i;
	printf("Enter the value of N(0-9)");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{	
		if(i!=1)
			printf("+");
		printf("%d",i*11);	
		i++;
	}
	printf("\n");
	return 0;
}