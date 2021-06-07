#include <stdio.h>
#include <stdlib.h>
#include <omp.h>


int main(void){
	int i;
	int x;
	x=22;
	omp_set_num_threads(3);
	printf("FOR PRIVATE\n");
	#pragma omp parallel for private(x)
		for(i=0;i<=10;i++){
			x=i;
			printf("Thread number: %d     x: %d\n",omp_get_thread_num(),x);
		}
	printf("x is %d\n", x);
	printf("FOR FIRST PRIVATE\n");
	#pragma omp parallel for firstprivate(x)
		for(i=0;i<=10;i++){
			x=i;
			printf("Thread number: %d     x: %d\n",omp_get_thread_num(),x);
		}
	printf("x is %d\n", x);
}