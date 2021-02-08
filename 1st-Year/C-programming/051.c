//WAP in C to print all odd elements in an array.

#include <stdio.h>

int main() {

  int a[100], n, i, temp, end;
  printf("Enter Size Of Array:");

  scanf("%d", &n);
  
  printf("Enter Elements:");

  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);

  printf("Odd Elements in Array:\n");

  for (i = 0; i < n; i++)
    if(a[i]%2!=0)
      printf("A[] %d\n", a[i]);
  return 0;
}