#include <stdio.h>
FILE* myfile;
int main()
{ 
  int num=0,sum=0;
  myfile = fopen("/home/omer/linuxcode/lab108/yeni/numbers.txt","r");
  if(myfile==NULL){
    printf("There has been an error opening file.");
    return 0;
  }
  
  while(fscanf(myfile,"%d\n",&num)==1){
    if(num%2==0){
      sum+=num;
    }
  }
  
  printf("Sum of even numbers:%d",sum);

  fclose(myfile);
  return 0;
}