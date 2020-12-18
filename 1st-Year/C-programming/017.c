//WAP to convert input in seconds to hour minute and seconds.

#include<stdio.h>

int main()
{
	 int sec, hh, mm, ss;
	 
	 printf("Enter time in seconds: ");
	 scanf("%d", &sec);
	 hh = sec/3600;
	 mm = (sec - hh*3600)/60;
	 ss = sec - hh*3600 - mm*60;
	 printf("%d hours : %d minutes : %d seconds\n",  hh,mm,ss);
	 
	 return 0;
}
