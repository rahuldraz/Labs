#include<stdio.h>
#include "linear_search.h"
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
  linear_search(a,n,search);
}
