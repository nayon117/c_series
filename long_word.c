/*
goal: check if a string length is more than 10 then
      Print the first character in the string.
      Print number of characters between the first and the last characters.
      Print the last character in the string.
      otherwise print the string
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
   
    char str[110];

    for (int i = 0; i < n; i++)
    {
        scanf(" %[^\n]s",str);
        int length = strlen(str);
        if (length > 10)
        {
            printf("%c%d%c\n",str[0],length-2,str[length-1]);
           
        }
        else
        {
            printf("%s\n", str);
        }
    }

  return 0;
}