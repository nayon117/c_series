/*
@ check how many vowels in a string
*/

#include <stdio.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>
#include<ctype.h>

int vowel_count (char *str){
    int count = 0;

   for (int i = 0; i < strlen(str); i++)
   {
    switch (toupper(str[i]))
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        count++; 
    }
   }
   return count;
}

int main()
{
   char str[] = "It's a wonderful day";
   char str1[] = "Life is beautiful";
   
  printf("%d\n",vowel_count(str));
  printf("%d",vowel_count(str1));

 return 0;
}