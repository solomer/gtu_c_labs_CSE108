#include <stdio.h>
int main(){
  int number=0;
  int yeninumber=0;
  printf("Enter a number: ");
  scanf("%d",&number);
  int sayi=1;
  int sayi2=0;
  int sayi3=1;
  int basamak=0;
  if(number<0){
    sayi2=-number;
  }else{
    sayi2=number;
  }
  for(int l=0;;l++){
    if(sayi2>sayi3){
      basamak++;
      sayi3=sayi3*10;
    }else{
      break;
    }
  }
  // printf("basamak%d",basamak);
  
  for(int j=1;j<basamak;j++){
    sayi=sayi*10;
  }
  for(int i=1;i<basamak+1;i++){
    yeninumber=yeninumber+(number%10)*sayi;
    sayi=sayi/10;
    number=number/10;
  }

  printf("%d",yeninumber);
return 0;
}