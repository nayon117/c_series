/*
input: 
ahhellllloou

output:
YES

*/
#include <stdio.h>
#include <string.h>

int main() {
   char str[100005];
   char target[6] = "hello";
   int j=0;
   scanf("%s",str);

   int length = strlen(str);
   
   for(int i=0 ; i<length; i++){
    if(str[i] == target[j]){
        j++;
    }
    if(j==5){
        break;
    }
   }
   if(j==5){
    printf("YES\n");
   }else{
    printf("NO\n");
   }

  
   
    return 0;
}