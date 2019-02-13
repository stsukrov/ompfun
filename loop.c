void double_all(int *data, int n){
  #pragma omp parallel for
  for(int i=0;i<n;++i){
    data[i] *= 2;
  }
}
