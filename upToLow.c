/*
*uppercase to lower and if lower then upper
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>

void letter_flip(char *s){
      int len = strlen(s);

    for (int i = 0; i < len; i++){
      if(isupper(s[i])){
        s[i] = tolower(s[i]);
      }else if(islower(s[i])){
        s[i] = toupper(s[i]);
      }
    }

    printf("%s\n",s);
}

int main () {
    char s[] = "abcDEF";
    char s1[] = "AbcDEF";

    letter_flip(s);
    letter_flip(s1);
  

    return 0;
}