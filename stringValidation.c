#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>

bool is_postal_code(char postalCode[]){
  if(strlen(postalCode) != 7) return false;
  if(!isalpha(postalCode[0])) return false;
  if(!isdigit(postalCode[1])) return false;
  if(!isalpha(postalCode[2])) return false;
  if(postalCode[3] != ' ') return false;
  if(!isdigit(postalCode[4])) return false;
  if(!isalpha(postalCode[5])) return false;
  if(!isdigit(postalCode[6])) return false;

  return true;
}

int main () {
  char code1[] = "L2C 3N3";

 if(is_postal_code(code1)){
  printf("%s is a postal code\n",code1);
 }else{
  printf("%s is not a postal code\n",code1);
 }

  return 0;
}
