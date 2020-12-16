//WAP in C to count number of students who scored S,A,B,C,D,E,F
#include<stdio.h>
int main(){

    int n,score[100],s=0,a=0,b=0,c=0,d=0,e=0,f=0;
    printf("Enter Number of Students:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter score( 0-100 ): ");
        scanf("%d",&score[i]);
        switch( score[i] / 10 ){
            case 10:
                s+=1;
                break;
            case 9:
                a+=1;
                break;

            case 8:
                b+=1;
                break;

            case 7:
                c+=1;
                break;
            case 6:
                d+=1;
                break;

            case 5:
                e+=1;
                break;

            default:
                f+=1;
                break;

        }
    }
    printf("Student Scored S->%d\nStudent Scored A->%d\nStudent Scored B->%d\nStudent Scored C->%d\nStudent Scored D->%d\nStudent Scored E->%d\nStudent Scored F->%d\n",s,a,b,c,d,e,f);
 } 