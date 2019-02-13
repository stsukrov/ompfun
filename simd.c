void foo()
{
  const int N = 1024;
  float a[N];
  float b[N];
  float c[N];

//#pragma omp simd
  for(int i=0;i<N;++i){
    a[i] += c[i] * b[i];
  }
}
