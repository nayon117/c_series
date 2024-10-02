// Problem Statement: Write a program that prints the first n numbers in the Fibonacci sequence. The Fibonacci sequence is defined as:

#include <stdio.h>

int main() {
    int n; 
    int a = 0, b = 1, next; 

    printf("Enter the number of Fibonacci numbers to print: ");
    scanf("%d", &n);

    printf("%d ", a);

    if (n > 1) {
        printf("%d ", b);
    }

    for (int i = 2; i < n; i++) {
        next = a + b; 
        printf("%d ", next); 
        a = b; 
        b = next; 
    }

    printf("\n"); 
    return 0; 
}
