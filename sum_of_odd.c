// Write a program that takes an integer n and prints the sum of all odd numbers from 1 to n.
#include<stdio.h>

int main(){
    int n;
    int sum = 0;
    printf("Enter a odd number: ");
    scanf("%d", &n);

    for (int i = 1; i<=n; i+=2){
        if(i %2 != 0) {
            sum += i;   
        }
    }
    printf("Sum: %d\n", sum);
}