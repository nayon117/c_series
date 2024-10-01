#include<stdio.h>

 int main () {
    double a , b;
    char operator;
    printf("Enter the two number : ");
    scanf("%lf %lf", &a, &b);
    getchar();
    printf("Enter operator(+,-,*,/): ");
    scanf("%c", &operator);

    switch (operator)
    {
    case '+':
        printf("sum: %.1lf", a + b);
        break;
    case '-':
        printf("sum: %.1lf", a - b);
        break;
    case '*':
        printf("sum: %.1lf", a * b);
        break;
    case '/':
        if(b != 0){
            printf("sum: %.1lf", a / b);
        }else{
            printf("Error");
        }
        break;
    
    default:
        printf("Your operator is not accepted");
        break;
    }
 }