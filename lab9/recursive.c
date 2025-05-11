
#include <stdio.h>

int print_digits(int n){
  int a ;
  a = n%10;
  if(n/10 == 0){return printf("%d ",a);}
  
  print_digits(n/10);
  printf("%d ",a);
  
}
// int print_digits(int n){
//   int a ;
//   a = n%10;
//   if(n==0){return;}
  
//   print_digits(n/10);
//   printf("%d ",a);
  
// }
int main(){
  
  int a = 0;
  print_digits(a);
return 0;
}

