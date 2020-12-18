//WAP to convert fahrenheit to Celcius and Vise Vera.
#include <stdio.h>
 
int main()
{
  
    float fh,cl;
    int choice;
 
    printf("\n1:Fahrenheit to Celsius."); 
    printf("\n2:Celsius to Fahrenheit.\n:");
    scanf("%d",&choice);
 
    if(choice ==1){
        printf("\nEnter temperature in Fahrenheit: ");
        scanf("%f",&fh);
        cl= (fh - 32) / 1.8;
        printf("Temperature in Celsius: %f \n",cl);
    }
    else if(choice==2){
        printf("\nEnter temperature in Celsius:");
        scanf("%f",&cl);
        fh= (cl*1.8)+32;
        printf("Temperature in Fahrenheit: %f \n",fh);
    }
    else{
        printf("\nInvalid Choice.\n");
    }
    return 0;
}