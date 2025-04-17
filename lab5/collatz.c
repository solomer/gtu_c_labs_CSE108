#include <stdio.h>
int generateCollatzSequence(int start, int length, FILE *file);
void convertToBinary(int n, FILE *file);
void convertToHex(int n, FILE *file);
void convertToOctal(int n, FILE *file);
int power(int n, int pwr);
int main()
{
  int firstnum;
  int secondnum;
  int lastvalue;
  FILE* myfile;
  myfile = fopen("collatz.txt", "w+");
  if (myfile == NULL)
  {
    printf("Error");
  }
  
  printf("Enter the starting number of the Collatz Sequence:");
  if (!scanf("%d", &firstnum))
  {
    printf("Error! Dont enter noninteger values!\n");
    return 0;
  }
  else
  {
    if (firstnum < 1)
    {
      printf("Error! dont enter zero or negative numbers\n");
      return 0;
    }
  }

  printf("Enter how many terms to generate:");
  if (!scanf("%d", &secondnum))
  {
    printf("Error! Dont enter noninteger values!\n");
    return 0;
  }
  else
  {
    if (secondnum < 1)
    {
      printf("Error! dont enter zero or negative numbers\n");
      return 0;
    }
  }

  printf("Generated Collatz Sequence:\n");
  lastvalue = generateCollatzSequence(firstnum, secondnum, myfile);

  printf("Last number in sequence:%d\n", lastvalue);
  fprintf(myfile, "Decimal:%d\n", lastvalue);

  printf("Choose a conversation:\n1. Decimal to Binary\n2.Decimal to Hexadecimal\n3.Decimal to Octal\nYour Choice:");
  int choice;
  scanf("%d", &choice);
  if (choice == 1)
  {
    fprintf(myfile, "Decimal to Binary Conversion:");
    printf("Decimal to Binary Conversion:");

    convertToBinary(lastvalue, myfile);
  }
  if (choice == 2)
  {
    fprintf(myfile, "Decimal to Hexadecimal Conversion:");
    printf("Decimal to Hexadecimal Conversion:");
    convertToHex(lastvalue, myfile);
  }
  if (choice == 3)
  {
    printf("Decimal to Octal Conversion:");
    fprintf(myfile, "Decimal to Octal Conversion:");
    convertToOctal(lastvalue, myfile);
  }
  return 0;
}

int generateCollatzSequence(int start, int length, FILE *file)
{
  int number = start;
  fprintf(file, "%d\n", number);
  printf("%d\n", number);
  for (int i = 0; i < length - 1; i++)
  {
    if (number % 2 == 0)
    {
      number = number / 2;
      fprintf(file, "%d\n", number);
      printf("%d\n", number);
    }
    else
    {
      number = (number * 3 + 1);
      fprintf(file, "%d\n", number);
      printf("%d\n", number);
    }
  }
  return number;
}
// void convertToBinary(int n, FILE* file){
//   for(int i =8;i>0;i--){
//     if(n>=power(2,i-1)&&n<=power(2,i)){
//       printf("i:%d",i);
//       for(int j=i+1;j>0;j--){
//         if(n>power(2,j-1)){
//           printf("1");
//           n=n-power(2,j-1);
//         }else{
//           printf("0");
//         }
//       }
//     }
//   }
// }
void convertToBinary(int n, FILE *file)
{
  if (n > 1)
  {
    convertToBinary(n / 2, file);
  }

  printf("%d", n % 2);
  fprintf(file,"%d", n % 2);
}
void convertToOctal(int n, FILE *file)
{
  if (n > 1)
  {
    convertToOctal(n / 8, file);
  }

  printf("%d", n % 8);
  fprintf(file,"%d", n % 8);
}
void convertToHex(int n, FILE *file)
{
  if (n > 1)
  {
    convertToHex(n / 16, file);
  }
  if(n%16<10){
    printf("%d", n % 16);
    fprintf(file,"%d", n % 16);
  }else{
    if(n%16==10){
      printf("%c", 'A');
      fprintf(file,"%c", 'A');
    }
    if(n%16==11){
      printf("%c", 'B');
      fprintf(file,"%c", 'B');
    }
    if(n%16==12){
      printf("%c", 'C');
      fprintf(file,"%c", 'C');
    }
    if(n%16==13){
      printf("%c", 'D');
      fprintf(file,"%c", 'D');
    }
    if(n%16==14){
      printf("%c", 'E');
      fprintf(file,"%c", 'E');
    }
    if(n%16==15){
      printf("%c", 'F');
      fprintf(file,"%c", 'F');
    }
  }
}

// int power(int n, int pwr)
// {
//   if (pwr == 0)
//   {
//     return 1;
//   }
//   for (int i = 0; i < pwr; i++)
//   {
//     n = n * n;
//   }
//   return n;
// }