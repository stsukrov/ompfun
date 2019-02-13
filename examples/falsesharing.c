#include<stdio.h>
#include<omp.h>
struct foo {
    int x;
    int c[16];
    int y;
};

#define N 4000000000
static struct foo f;

/* The two following functions are running concurrently: */

int sum_a(void)
{
    int s = 0;
    for (unsigned i = 0; i < N; ++i)
        s += f.x;
    return s;
}

void inc_b(void)
{
    for (unsigned i = 0; i < N; ++i)
        ++f.y;
}

void main(){
  double x = omp_get_wtime();
  #pragma omp parallel sections
  {
  #pragma omp section
  {
    sum_a();
  }
  #pragma omp section
  {
    inc_b();
  }
  }
  double y = omp_get_wtime();
  printf("%lf", y - x);
}
