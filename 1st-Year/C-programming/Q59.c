//WAP to check if a string is palindrome or not.

#include<stdio.h>
#include<string.h>
#define MAX_LIMIT 20 

int main(){
	char str[MAX_LIMIT];
	int a,b=0,flag=1;
	printf("Enter a string:");
	fgets(str,MAX_LIMIT,stdin);
	a=strlen(str)-2;
	while(b<a){
		if(str[b++]!=str[a--])
			flag=0;
	}
	if(flag==0)
		printf("Not a palindrome\n",str);
	else
		printf("Is palindrome\n",str);
}