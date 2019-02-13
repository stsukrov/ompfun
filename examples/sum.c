#include<stdio.h>

int sum_all(int *data, int n){
  int sum = 0;
  #pragma omp parallel for reduction(+:sum)
  for(int i=0;i<n;++i){
    sum += data[i];
  }

  return sum;
}

void main()
{
  int arr[] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
  int n = sizeof(arr)/sizeof(arr[0]);
  int sum = sum_all(arr, n);
  printf("sum = %d\n", sum);
}
