//WAP in C to reverse an a and store it in same array.

#include <stdio.h>

int main() {
  int a[100], n, i, temp, end;
  printf("Enter Size Of Array:");

  scanf("%d", &n);
  end = n - 1;

  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);

  for (i = 0; i < n/2; i++) {
    temp = a[i];
    a[i]   = a[end];
    a[end] = temp;

    end--;
  }

  printf("Reversed Array:\n");

  for (i = 0; i < n; i++)
    printf("%d\n", a[i]);
}