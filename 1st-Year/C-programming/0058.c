#include<stdio.h>
#include<string.h>

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
            printf("The length of the string %d",strlen(arr));
            break;
        }
        case 2:{
            printf(" String Concatenation \n");
            printf("\nEnter the First string:\n");
            gets(s1);
            printf("\nEnter Second string");
            gets(s2);
            strcat (s1,s2);
            printf("Concatenated String-")
            puts(s1);
            break;
        }
        case 3:{
            printf(" Reverse the string ");
            printf("\nEnter the string");
            gets(s1);
            printf("Reversed-");
            puts(strrev(s1));
            break;
        }
        case 4:{
            printf("String copying \n");
            printf("Enter 1st string :");
            gets(s1);
            printf("Enter 2st string :");
            gets(s2);
            strcpy (s1,s2);
            puts(s1);
            break;
        }
        case 5:{
            printf("String Compare \n");
            printf("Enter 1st string :");
            gets(s1);
            printf("Enter 2st string :");
            gets(s2);
            if(strcmp (s1,s2)==0)
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

