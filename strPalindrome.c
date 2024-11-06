/*
@ check string palindrome
*/

#include <stdio.h>
#include<string.h>
#include<stdbool.h>

bool isPalindrome (char str[]){
    int middle = strlen(str) /2;
    int len = strlen(str);

    for (int i = 0; i < middle; i++){
      if(str[i] != str[len-i-1]){
        return false;
      }else{
        return true;
      }
    }
}

int main()
{
   char str1[] = "not a palindrome";
   char str2[] = "abccba";
   char str3[] = "abcdcba";

    if(isPalindrome(str1) == 0){
    printf("false");
    }else{
        printf("true");
    }

    return 0;
}