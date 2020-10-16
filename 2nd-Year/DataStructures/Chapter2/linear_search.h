void linear_search(int *a,int n, int search){
  int flag=0;
  for(int i=0;i<n;i++){
    if(a[i]==search){
      printf("Found %d at Array[%d] position\n",search,i);
      flag=1;
    }
  }

  if(flag==0){
    printf("Element isn't present in the Array!\n");
  }
}
