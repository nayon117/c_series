#include<stdio.h>

void printDigits(int i,char *str){
     if(str[i] == '\0'){
          return;
     }
     printf("%c ",str[i]);
     printDigits(i+1,str);
}

int main () {
     int n;
     scanf("%d",&n);
     
     while(n--){
     char str[11];
     scanf("%s",str);
     printDigits(0,str);
     printf("\n");
     }
    

     return 0;
}
