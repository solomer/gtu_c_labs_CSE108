#include <stdio.h>
int main(){
  float A=12,B=4,C=3,D=8,E=2,H=6,I=2;
  int F=17,G=5;
  float Z;

  Z=(A+B*C-D)/E + (F%G)-H*I;

  printf("Z: %.2f\n",Z);
  return 0;
}