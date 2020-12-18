//WAP in C to count number of students who scored S,A,B,C,D,E,F
#include<stdio.h>
int main(){

    int p,c,b,ch;
    float avg;
    printf("Enter Marks of Physics Chemistry Biology out of 100:");
    scanf("%d %d %d",&p,&c,&b);
    avg=(p+c+b)/3;
    ch=avg/10;
    printf("Average In Science-> %f\n",avg);
    if(ch==10)
    	printf("Grade-> S\n");
    else if(ch==9)
    	printf("Grade-> S\n");
    else if(ch==8)
    	printf("Grade-> A\n");
    else if(ch==7)
    	printf("Grade-> B\n");
    else if(ch==6)
    	printf("Grade-> C\n");
    else if(ch==5)
    	printf("Grade-> D\n");
    else if(ch==4)
    	printf("Grade-> E\n");
    else
    	printf("Grade-> F\n");
    return 0; 
} 