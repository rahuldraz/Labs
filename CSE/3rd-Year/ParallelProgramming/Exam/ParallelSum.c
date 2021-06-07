#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>
#define MAXSIZE 10000

//Function to sort the array using Parallel Programming
void SumParallel(int arr[]){
	
	int sum=0;
	//Defining 4 Threads
	printf("Starting 4 Threads\n");
	omp_set_num_threads(4);
		#pragma omp parallel for
			for (int i = 0; i <= MAXSIZE; i ++){
				//Section to execute at once in a thread a a time
				#pragma omp critical
					sum=sum+arr[i];
			}
	printf("Sum -> %d\n",sum );
	}

int main(){
	int ch,x;int *arr;
	double iftime, oftime;
	printf("Defining Random %d Size Array\n",MAXSIZE);
	arr = (int *)malloc((MAXSIZE) * sizeof(int));srand(time(NULL));
	for (int i = 0; i < MAXSIZE; i++){
		arr[i] = rand() % 100;
	}
		
	iftime = omp_get_wtime();
	SumParallel(arr);
	oftime = omp_get_wtime();
	printf("Time taken for Sum:%f\n", oftime -iftime);
	free(arr);
}