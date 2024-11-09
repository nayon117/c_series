#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int word_count (char *str,char *word) {
  int slen = strlen(str);
  int wlen = strlen(word);
  int end = slen - wlen + 1;
  int count = 0;

  for (int i = 0; i < end; i++){
    bool word_found = true;
    int j = 0;
    while(j<wlen){
      if(word[j] != str[i+j]){
        word_found = false;
        break;
      }
      j++;
    }
    if(word_found) count++;
  }
  return count;
}

int main () {
    char str[] = "It is in this string once";
    char word[] = "is";

    printf("%d\n",word_count(str,word));

    return 0;
}
