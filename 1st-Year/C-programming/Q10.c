//WAP to demonstrate use of sizeof(),const,#Define


#include<stdio.h>
#define PI 3.14

int main(){

const int a=1;
int b;
char c;
float d;
double e;
long int f;
short int g;

//Display All Input

printf("Value of Macro PI->%f\n",PI);
printf("Value of Const a->%d\n",a);
printf("Size of Int->%d\n",sizeof(b));
printf("Size of Char->%d\n",sizeof(c));
printf("Size of Float->%d\n",sizeof(d));

printf("Size of Double->%d\n",sizeof(e));

printf("Size of Long Int->%d\n",sizeof(f));
printf("Size of Short Int->%d\n",sizeof(g));


}
