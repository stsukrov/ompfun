int incatomic(int a){
  #pragma omp parallel
  {
  #pragma omp atomic
  a = a + 10;
  }
  return a;
}
