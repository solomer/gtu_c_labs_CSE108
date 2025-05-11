#include <stdio.h>
int main(){
  char * text = "THIS IS A TEST TEXT";
  char * pattern = "TEST";
  // char * text =  "AABAACAADAABAABA";
  // char * pattern = "AABA";
  int flag =0;
  for (int i = 0; text[i] != '\0'; i++)
  {
    for (int j = i; text[j]==pattern[(j-i)]; j++)
    {
        if(pattern[j-i +1]=='\0'){
          flag && printf(", ");
          printf("Pattern found at index %d",i);
          flag=1;
          break;
        }
    }
    
  }
  


return 0;
}