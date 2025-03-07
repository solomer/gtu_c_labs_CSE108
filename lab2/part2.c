#include <stdio.h>
int main(){
  int u;//u=units
  double b =0;
  printf("Enter the units consumed:");
  scanf("%d",&u);
  if(u<=50){
    b+= u*0.5;
  }
  else if(u>50 && u<=100){
    b+= 50*0.5;
    b+= (u-50)*0.75;
  }
  else if(u>100&& u<=250){
    b+= 50*0.5;
    b+= 50*0.75;
    b+= (u-100)*1.2;
  }
  else if(u>250){
    b+= 50*0.5;
    b+= 50*0.75;
    b+= 150*1.2;
    b+= (u-250)*1.5;
  }

  b=b*1.2;
  printf("Net Amount to be paid %.2f",b);
}