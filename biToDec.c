#include<stdio.h>
#include<string.h>

int convert (char *string){
  int slen = strlen(string);
  int total = 0;
  int decVal = 1;

  for (int i = (slen - 1); i >=0 ; i--){
    if(string[i] == '1') total += decVal;
      decVal *= 2;
  }
  return total;
}
int main () {
  char str [] = "10101";
  int val1 = convert(str);
  printf("%d",val1);

  return 0;
}
