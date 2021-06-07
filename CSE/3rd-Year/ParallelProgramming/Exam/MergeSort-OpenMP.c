#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>


void merge(int *arr, int parent_len, int len)
{
    int bottom_i, top_i, i;
    int *part_arr = malloc(parent_len * sizeof(*part_arr));

    // Merge

    for (bottom_i = 0, top_i = len, i = 0; i < parent_len; i++) {                                           
        part_arr[i] = top_i      == parent_len   ? arr[bottom_i++] // Capping Condition
                    : bottom_i   == len          ? arr[top_i++]    // Capping Condition
                    : arr[top_i] < arr[bottom_i] ? arr[top_i++]
                    :                              arr[bottom_i++];
    }

    // Copy back to parent

    for (int i = 0; i < parent_len; i++)
        arr[i] = part_arr[i];

    free(part_arr);
}

//Serial Merge Sort
void merge_sort(int *arr, int len)
{
    if (len < 2)
        return;

    int part_len = len / 2;
    merge_sort(arr, part_len);
    merge_sort(&arr[part_len], len - part_len);
    merge(arr, len, part_len);
}

//Parallel Merge Sort
void merge_sort_parallel(int *arr, int len, int num_threads)
{
    if (len < 2)
        return;

    int part_len = len / 2;

    if (num_threads < 2) { // This lets us not hit the thread creation limit.
        merge_sort(arr, part_len);
        merge_sort(&arr[part_len], len - part_len);
    } else {
        #pragma omp parallel sections
        {
            #pragma omp section
            merge_sort_parallel(arr, part_len, num_threads - num_threads / 2);

            #pragma omp section
            merge_sort_parallel(&arr[part_len], len - part_len, num_threads - num_threads / 2);
        }
    }

    merge(arr, len, part_len);    
}

void display(int *arr,int n){
    printf("Array\n");
    int i =0;
    for(i=0;i<n;i++){
        printf("%d ",arr[i] );
    }
    printf("\n");

}

                                    

int main(int argc, char **argv)
{
    int numelem;
    int ch;

    omp_set_nested(1);
    printf("Enter number of elements: ");
    scanf("%d", &numelem);
    if (numelem < 2) {
        printf("Invalid number of elements\n");
        exit(0);
    }

    double start, end;
    int max_threads = omp_get_max_threads();
    int *arr = malloc(numelem * sizeof(*arr));

    srand(time(NULL));
    

    printf("Starting Parallel Mergesort...\n");

    for (int i = 0; i < numelem; i++) {                                         
        arr[i] = rand() % numelem;
    }
    //display(arr,numelem);

    start = omp_get_wtime();
    
    #pragma omp parallel
    {
        #pragma omp single
        merge_sort_parallel(arr, numelem, max_threads);

    }

    end = omp_get_wtime();
    //display(arr,numelem);

    printf("Time taken: %lf sec\n", end - start);

    free(arr);
    return 0;
}