#include <stdio.h>
int main(){
  int side1,side2,side3;
  printf("Enter the three sides:");
  scanf("%d %d %d",&side1,&side2,&side3);
  if(side1+side2>side3 && side2+side3>side1 && side1+side3>side2){
    printf("Valid Triangle.");
  }else{
    printf("Invalid Triangle.");

  }
  return 1;
}