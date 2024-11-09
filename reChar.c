#include <stdio.h>

void remove_char(char *string, char r)
{
  int pos = 0;
  while (string[pos] != '\0')
  {
    if (string[pos] == r)
    {
      int newPos = pos;
      while (string[newPos] != '\0')
      {
        string[newPos] = string[newPos + 1];
        newPos++;
      }
    }
    else
    {
      pos++;
    }
  }
}

int main()
{
  char str[] = "A string want to remove";

  remove_char(str, 'o');

  printf("%s", str);

  return 0;
}
