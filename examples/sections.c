#include<stdio.h>
#include<omp.h>

void main(){
  #pragma omp parallel sections
  {
      #pragma omp section
      {
        printf("Section1\n");
      }
      #pragma omp section
      {
        printf("Section2\n");
      }
  }
}
