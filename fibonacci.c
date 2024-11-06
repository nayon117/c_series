/*
@ Fibonacci sequence
*/

// iterative solution
// #include <stdio.h>
// #include<string.h>
// #include<stdbool.h>
// #include<math.h>



// int main()
// {
//    int term1 = 0;
//    int term2 = 1; 
//    int fibn = 0; 
//    int length = 0;

//    do
//    {
//     // printf("Enter the length: ");
//     scanf("%d",&length);
//    } while (length<3);

//    printf("%d,%d,",term1,term2);
   
//     for (int i = 2; i < length; i++){
//       fibn = term1 + term2;
//       printf("%d",fibn);

//       term1 = term2;
//       term2 = fibn;
      
//       if(i != length-1) printf(",");
//       else printf("\n");
//     }

//     return 0;
// }

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