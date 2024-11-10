#include<stdio.h>
#include<string.h>

void replace_char(char *string,char replace,char new){
  int slen = strlen(string);

  for (int i = 0; i < slen; i++){
    if(string[i] == replace){
      string[i] = new;
    }
  }
}

int main () {
  char s[] = "This is string";
  replace_char(s,'i','t');
  printf("%s\n",s);
  return 0;
}
