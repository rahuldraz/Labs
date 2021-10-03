#include<stdio.h>

int  main(){
    char arr[30],s1[10],s2[10],s3[10];
    int opt,i=0,j,len=0,flag=0;
    char ch;
    printf("Enter any option\n");
    printf("1: Find out length of the string\n");
    printf("2: Concatenate of the two string\n");
    printf("3: Reverse of the string\n");
    printf("4: Copy of the string\n");
    printf("5: String Compare\n");
    printf("Enter the choice:");
    scanf("%d",&opt);

    //Clearing New Line from Buffer
    while( ch = getchar() != '\n' && ch != EOF);  
    
    
    switch(opt){
        case 1:{
            printf("Enter any string \n");
            gets(arr);
            for(i=0;arr[i]!='\0';i++);
                printf("The length of the string %d",i);
                break;
        }
        case 2:{
            printf(" String Concatenation \n");
            printf("\nEnter the First string:\n");
            gets(s1);
            printf("\nEnter Second string");
            gets(s2);
            for(i=0;s1[i]!='\0';i++){
                s3[i]=s1[i];
            }
            s3[i]='\0';
            for(j=0;j<=i;j++){
                s3[i+j]=s2[j];
            }
            printf("The Concatenated string is %s",s3);
            break;
        }
        case 3:{
            printf(" Reverse the string ");
            printf("\nEnter the string");
            gets(s1);
            while(s1[i]!='\0'){
                len=len+1;
                i++ ;
            }
            for(i=len-1;i>=0;i--){
                printf("%c",s1[i]);
            }
        break;
        }
        case 4:{
            printf(" String copying \n");
            printf("Enter 1st string :");
            gets(s1);
            printf("Enter 2st string :");
            gets(s2);
            while(s2[i]!='\0'){
                s1[i]=s2[i];
                i++;
            }
            s1[i]='\0';
            printf("%s",s1);
            break;
        }
        case 5:{
            printf("String Compare \n");
            printf("Enter 1st string :");
            gets(s1);
            printf("Enter 2st string :");
            gets(s2);
            while(s1[i]!='\0' &&s2[i]!='\0'){  
                if(s1[i]!=s2[i]){  
                    flag=1;  
                    break;  
                }  
                i++;  
            }  
            if(flag==0)
                printf("Both Strings are Equal!\n");
            else
                printf("Both Strings are not Equal!\n");
            
            break;
        }
        default:{
            printf("Invalid Choice!");
        }
    }
    return 0;
}

