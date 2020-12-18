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

    switch(ch){
    	case 10:
    		printf("Grade-> S\n");
    		break;
    	case 9:
    		printf("Grade-> S\n");
    		break;
    	case 8:
    		printf("Grade-> A\n");
    		break;
    	case 7:
    		printf("Grade-> B\n");
    		break;
    	case 6:
    		printf("Grade-> C\n");
    		break;
    	case 5:
    		printf("Grade-> D\n");
    		break;
    	case 4:
    		printf("Grade-> E\n");
    		break;
    	default:
    	printf("Grade-> F\n");
    	break;
    }
    return 0; 
} 