#include <stdio.h>
FILE* myfile;
int main()
{ 
  int num,sum;
  myfile = fopen("numbers.txt","r");
  if(myfile==NULL){
    printf("There has been an error opening file.");
    return 0;
  }

  while(fscanf(myfile,"%d\n",&num)){
    if(num%2==0){
      sum+=num;
    }
  }

  printf("Sum of even numbers:%d",num);

  fclose(myfile);
  return 0;
}