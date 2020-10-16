#include<stdio.h>
#include "binary_search.h"
void bubble_sort(int *a,int n){
  int temp;
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
      if(a[j]>a[j+1]){
        temp=a[j+1];
        a[j+1]=a[j];
        a[j]=temp;
      }
    }
  }
}
int main(){
  int a[100];
  int search,n;
  printf("Enter Size Of Array:");
  scanf("%d",&n);
  printf("Enter Elements:");
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("Enter Element to Search:");
  scanf("%d",&search);
  bubble_sort(a,n);
  binary_search(a,n,search);
}
