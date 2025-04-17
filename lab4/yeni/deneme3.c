#include <stdio.h>
int binomialCoeff(int n,int k);
int main(){
int rows=0;
printf("Enter the nunmber of rows:");
scanf("%d",&rows);
int deger;
deger=rows;
for(float i=0;i<rows;i++){
  for(int l =deger;l>0;l--){
    printf(" ");
  }
  for(int j=0;j<i+1;j++){

    printf("%d ",binomialCoeff(i,j));
  }
  printf("\n");
  deger--;
}

  
return 0;
}


int binomialCoeff(int n ,int k){
  int result=0,num1=1,num2=1,num3=1;

  for(int i=n;i>1;i--){
    num1=num1*i;
  }

  for(int i=k;i>1;i--){
    num2=num2*i;
  }
  for(int i=n-k;i>1;i--){
    num3=num3*i;
  }
  result= num1/(num2*num3);
  return result;
}