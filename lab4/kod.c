#include <stdio.h>
FILE* myfile;
int main()
{ 
  int num,sum;
  myfile = fopen("/home/omer/linuxcode/lab108/yeni/numbers.txt","r");
  if(myfile==NULL){
    printf("There has been an error opening file.");
    return 0;
  }

  printf("Sum of even numbers:%d",num);
  while(fscanf(myfile,"%d\n",&num)){
    if(num%2==0){
      sum+=num;
    }
  }





  fclose(myfile);
  return 0;
}