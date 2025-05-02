#include <stdio.h>
#include <string.h>

void removeDuplicates(char *str)
{
  char temp[100];
  int k = 0;
  for (int i = 0; i < strlen(str); i++)
  {
    int flag = 0;

    for (int j = 0; j < k; j++)
    {
      if (temp[j] == str[i])
      {
        flag = 1;

        break;
      }
    }

    if (!flag)
    {
      temp[k] = str[i];
      k++;
    }
  }

  temp[k] = '\0';
  strcpy(str, temp);
}

int main()
{
  char s[100];

  printf("Enter a string: ");
  fgets(s, 100, stdin);
  s[strcspn(s, "\n")] = '\0';

  removeDuplicates(s);
  printf("String After Removing Duplicates: %s\n", s);

  return 0;
}
