// Write a program that prints the numbers from 1 to n. But for multiples of 3, print "Fizz" instead of the number, and for the multiples of 5, print "Buzz". For numbers which are multiples of both 3 and 5, print "FizzBuzz"

#include<stdio.h>

int main (){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i<=n;i++){
        if(i%3== 0 && i%5==0){
            printf("FizzBuzz\n");
        }
        else if(i%3 ==0){
            printf("Fizz\n");
        }else if( i%5==0){
            printf("Buzz\n");
        }else{
            printf("%d\n", i);
        }
    }
    return 0;
}