//Write a Program in C to check an Alphabet is Vowel Or Consonant using If-Else Construct.
#include<stdio.h>
int main(){
	char c;
	printf("Enter A Character:");
	scanf("%c",&c);
	//Terniary Condition
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
		printf("Given Character is A Vowel\n");
	else
		printf("Given Character is a Consonant\n");
}