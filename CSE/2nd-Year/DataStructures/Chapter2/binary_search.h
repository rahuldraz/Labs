int binary_search(int *a, int n,int search) {
  int flag=0;
  int low=0, high=n-1;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (a[mid] == search){
      printf("Found %d in Array!",search);
      flag=1;
      break;
    }
    else if (a[mid] < search)
      low = mid + 1;
    else
      high = mid - 1;
  }
  if(flag==0)
    printf("Element isn't present in Array!\n");
}
