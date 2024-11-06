/*
@ Fibonacci sequence recursive way
*/

#include <stdio.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>

int fibo(int n){
    if(n>1){
    return fibo(n-1) + fibo(n-2);
    } else if(n==1){
        return 1;
    }else if(n==0){
        return 0;
    }else{
        return -1;
    }
}

int main()
{
   int length = 0;
    do
   {
    scanf("%d",&length);
   } while (length<3);

    for (int i = 0; i < length; i++){
        printf("%d",fibo(i));
      
      if(i != length-1) printf(",");
      else printf("\n");
    }

 return 0;
}