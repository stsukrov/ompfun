#include<stdio.h>
void main(){
  #pragma omp parallel
  {
      printf("Hello, world!\n");

      #pragma omp single
      printf("I'm single!\n");
  }
}
