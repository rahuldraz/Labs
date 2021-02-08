//WAP in C to demonstrate the use of puts() , putchar() , gets() , getchar().

#include<stdio.h>
int main()
{
	char str[20] , ch;

	printf("Enter a string : ");
	gets(str);
	printf("User entered : ");
	puts(str);

	printf("Enter the character : ");
	ch = getchar();
	printf("User entered : ");
	putchar(ch);

	return 0;
}
