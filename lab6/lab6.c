#include <stdio.h>
#include <math.h>
int applyFunction(int array[],float func2(int array[]));
float findRepetitions(int array[]);
float countEvens(int array[]);
float findMean(int array[]);
float calculateStd(int array[]);
int main()
{
  int array[10];
  printf("Enter 10 numbers:");
  for (int  i = 0; i < 10; i++)
  
  {
    scanf("%d",&array[i]);
  }
  
  
  
  printf("\nRepetitions: ");
  applyFunction(array,&findRepetitions);
  printf("\nMean value: ");
  applyFunction(array,&findMean);
  printf("\nNumber of evens: ");
  applyFunction(array,&countEvens);
  printf("\nStandart Deviation: ");
  applyFunction(array,&calculateStd);
  printf("\n");

  return 0;
}

int applyFunction(int array[],float func2(int array[]))
{
  // for(int i =0; i<10;i++){
  //   func2(array[i]);

  // }
  printf("%.2f",func2(array));
}

float calculateStd(int array[])
{
  float sum;
  for (int i = 0; i < 10; i++)
  {
    sum += array[i];
  }
  float mean = sum / 10;
  float sum2 = 0;
  float std = 0;
  for (int i = 0; i < 10; i++)
  {
    sum2 += (array[i] - mean) * (array[i] - mean);
  }
  float value = sum2/10;
  std = sqrtf(value);
  return std;
}
float findRepetitions(int array[]){
  int cache=-1000,counter=0;
  for(int i=0;i<10;i++){
    if(array[i]==array[i+1]&&array[i]!=cache){
      cache = array[i];
      counter++;
    }
  }
  return counter;
}
float countEvens(int array[]){
  int counter=0;
  for(int i=0;i<10;i++){
    if(array[i]%2==0){
      counter++;
    }
  }
  return counter;
}
float findMean(int array[]){
  int sum =0;
  for(int i=0;i<10;i++){
    sum+=array[i];
  }
  return sum/10.0;
}

