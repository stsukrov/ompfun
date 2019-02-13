#include<stdio.h>
void main(){
  #pragma omp parallel
  {
      printf("Hello, world!\n");

      #pragma omp critical
      {
        printf("Critical1\n");
        printf("Critical2\n");
      }

      printf("Hello again!\n");
  }
}
