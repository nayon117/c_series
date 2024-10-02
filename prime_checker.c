#include<stdio.h>
#include<math.h>

int main () {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    if(n<=1) {
        printf("Not Prime");
    }else {
       for(int i = 2; i<= sqrt(n) ; i++) {
          if(n%i== 0){
            printf("Not prime\n");
            return 0;
          }
       }
            printf("prime\n");
    }
    return 0;
}