#include <stdio.h>
int isPerfect(int num);
void printPerfect(int start,int end);
int main(){

  printPerfect(1,10000);

return 0;
}


int isPerfect(int num){
  int sum=0;
  for(int i =1 ; i<num;i++){
    if(num%i==0){
      sum+=i;
    }
  }
  if (num==sum && num!=0){
    return 1;
  }else{
    return 0;
  }
  
}

void printPerfect(int start,int end){
  printf("The perfect numbers between %d and %d are:\n",start , end);
  
  for(int i =start;i<=end ;i++){
    if(isPerfect(i)){
      printf("%d ",i);
    }
  }
}