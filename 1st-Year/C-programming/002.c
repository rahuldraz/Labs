/**
WAP to display message in the following manner and use \t \n where necessary.

a. HelloWorld
b. 	Hello World
c. Hello
   World
d. Hello World
**/

#include<stdio.h>

int main()

{
	//a-Without using  \t and \n
	printf("Hello World!");
	//b-Using \t and \n 
	printf("\n\tHello World!\n");
	//c-USing \n.
	printf("Hello\nWorld!\n");
	//d-Using Single Printf Statement
	printf("\nHello World!\n");
	return 0;
}