#include <stdio.h>
int pwr(int n, int pow){
  if(pow==0){
    return 1;
  }
  return n * pwr(n,pow-1);
}
int toDecimal(int n,int pow){
  if(n==0){return 0 ;}

  return (n%10)*pwr(2,pow) + toDecimal(n/10,pow+1);
}
int main(){
int n;
printf("Please enter a binary number (it should start from 1): ");
scanf("%d",&n);
printf("%d",toDecimal(n,0));

return 0;
}