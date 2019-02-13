#include<stdio.h>
#include<omp.h>
void main(){
  #pragma omp parallel
  {
    int me = omp_get_thread_num();
    int total = omp_get_num_threads();
    printf("Hello, worl! I am %d out of %d !\n", me, total);
  }
}
