// Write a program that takes three integers as input and prints the largest of the three numbers.

#include<stdio.h>

int main (){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a>=b && a>=c){
        printf("A is the largest number");
    }else if (b>=a && b>=c){
        printf("B is the largest number");
    }else {
        printf("C is the largest number");
    }
}