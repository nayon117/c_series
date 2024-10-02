// Problem Statement: Write a program that takes an integer n and calculates the factorial of n. The factorial of n is the product of all integers from 1 to n.

#include<stdio.h>

int main () {
    int num ;
    int factorial = 1;
    printf("Enter a non-negative number : ");
    scanf("%d", &num);

    if(num<0){
        printf("Factorial is not defined for negative numbers: ");
    }else {
        for (int i = 1; i<= num; i++){
        factorial *= i;
    }
    printf("Factorial of %d is %d \n", num, factorial);
    }
}