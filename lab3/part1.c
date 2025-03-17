#include <stdio.h>
int isPrime(int num);
void printPrimes(int lowerLimit,int upperLimit);
int main(){
int lowerLimit,upperLimit;
printf("Enter the lower and the upper limit:");
scanf("%d %d",&lowerLimit,&upperLimit);
if(lowerLimit>upperLimit){
  printf("error upper limit must be greater than the lower");
  return 0;
}
printPrimes(lowerLimit,upperLimit);
return 0;


}

int isPrime(int num){
  if(num==1 || num <=0){
    return 0;  }
  for(int i=2;i<=num/2;i++){
    if(num%i==0){
      return 0;
    }
  }
  return 1;
}

void printPrimes(int lowerLimit,int upperLimit){
  int counter =0;
  for(int a= lowerLimit;a<=upperLimit;a++){
    if(isPrime(a)){
      // printf("Prime numbers between given limits:")
      printf("%d ",a);
      counter ++;
    }
  }
  if(counter ==0){
    printf("There is no prime number in the given range");

  }

}