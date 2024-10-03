// Write a program that takes an integer n and prints the sum of all even numbers from 1 to n.

#include<stdio.h>

int main(){
    int n; 
    int sum = 0;
    printf("Enter a even number: ");
    scanf("%d", &n);
    for(int i=0; i<=n; i+=2){
        if(i%2 == 0){
            sum += i;
        }
    }
    printf("Sum of even: %d", sum);
}