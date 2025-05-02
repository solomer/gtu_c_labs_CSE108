#include <stdio.h>
#include <string.h>

void compressString(const char *str, char *result)
{
  int len = strlen(str);
  int k = 0;
  int count = 1;

  for (int i = 1; i <= len; i++)
  {
    if (str[i] == str[i - 1])
    {
      count++;
    }
    else
    {
      result[k++] = str[i - 1];

      if (count > 1)
      {
        char temp[10];
        sprintf(temp, "%d", count);
        for (int j = 0; temp[j] != '\0'; j++)
        {
          result[k++] = temp[j];
        }
      }

      count = 1;
    }
  }

  result[k] = '\0';
}

int main()
{
  char s[100];
  char result[100];

  printf("Enter a String: ");
  fgets(s, 100, stdin);
  s[strcspn(s, "\n")] = '\0';

  compressString(s, result);
  printf("Compressed String: %s\n", result);

  return 0;
}
