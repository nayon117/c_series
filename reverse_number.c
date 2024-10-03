// Problem Statement: Write a program that takes a number n and outputs the reverse of that number.

#include<stdio.h>

int main(){
    int num; 
    int reverseNum = 0; 
    printf("Enter a number: ");
    scanf("%d", &num);

   while (num != 0)
   {
     int lastDigit = num % 10;
      reverseNum = reverseNum * 10 + lastDigit;
      num /= 10;

   }
   
    printf("Reverse Form: %d" , reverseNum);
}