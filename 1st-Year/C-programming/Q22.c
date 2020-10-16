//Write a Program in C to check an Alphabet is Vowel Or Consonant using Ternary Operator.

#include<stdio.h>
int main(){
	char c;
	printf("Enter A Character:");
	scanf("%c",&c);
	//Terniary Condition
	(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')?printf("Given Character is A Vowel\n"):printf("Given Character is a Consonant\n");
}
