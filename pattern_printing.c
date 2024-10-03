// Write a program that takes an integer n and prints the following pattern.

/* 
*
**
***
****
*****
*/

#include <stdio.h>

int main (){

    int n;
    scanf("%d", &n);

    for (int i=1; i<=n; i++){
        for (int j=1; j<= i; j++){
            printf("*");
        }
        printf("\n");
    }
}