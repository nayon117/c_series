#include<stdio.h>

int main () {
    int number;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
   
   while (number >0){
    int lastDigit = number % 10;
    sum += lastDigit;
    number /= 10;
   }
    printf("sum of the digits %d\n", sum);
}