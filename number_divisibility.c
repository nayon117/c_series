// Write a program that takes an integer n and prints "Divisible by 5" if the number is divisible by 5, otherwise prints "Not Divisible by 5".

#include<stdio.h>

int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    if(number %5 == 0){
        printf("Divisible by 5");
    }else{
        printf("Not Divisible by 5");
    }
    return 0;
}