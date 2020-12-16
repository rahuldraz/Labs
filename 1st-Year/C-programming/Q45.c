//WAP in C to find smallest and largest in 1D double Array.

#include<stdio.h>

int main(){
	int n;
	double a[100],s,l;
	printf("Enter Size of Array:");
	scanf("%d",&n);
	printf("Enter Values:");
	for(int i=0;i<n;i++){
		scanf("%lf",&a[i]);

	}
	s=a[0];
	l=a[0];
	for(int i=0;i<n;i++){
		if(s>a[i])
			s=a[i];
		if(l<a[i])
			l=a[i];
	}
	printf("Smallest->%lf \nLargest->%lf\n",s,l);
}