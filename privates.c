#include <stdio.h>
void main(){

  int x = 42;
  int y = 314;
  int z = 271;
  int t = 22;

  printf("Before x=%d, y=%d, z=%d, t=%d\n",x,y,z,t);

  #pragma omp parallel for firstprivate(x) lastprivate(y) private(z)
  for(int i=0;i<20;++i){
    x += 1;
    y += 1;
    z += 1;
    t += 1;

    if(i==19)
      printf("Inside x=%d, y=%d, z=%d, t=%d\n",x,y,z,t);
  }

  printf("After x=%d, y=%d, z=%d, t=%d\n",x,y,z,t);
}
