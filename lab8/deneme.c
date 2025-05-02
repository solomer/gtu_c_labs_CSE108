#include <stdio.h>
#include <string.h>
void func(char * s){
  strncat(s,"sdfahfd",1);
}
int main(){
  char  s[100] = "bac";
  func(s);
  printf("%s",s);
return 0;
}