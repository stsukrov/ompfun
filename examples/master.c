#include<stdio.h>
void main(){
  #pragma omp parallel
  {
      printf("Hello, world!\n");

      #pragma omp master
      printf("I'm your master!\n");
  }
}
