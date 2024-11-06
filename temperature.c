/*
@ convert celsius to farenheit
*/

#include <stdio.h>
#include<string.h>
#include<stdbool.h>

void c_f(double c, double start, double end, double step){
   printf("Enter start value: ");
   scanf("%lf",&start);
   printf("Enter end value: ");
   scanf("%lf",&end);
   printf("Enter step value: ");
   scanf("%lf",&step);

    printf("C        F\n");
    for (c=start; c<=end; c+= step){
    double f = (c*1.8) + 32;
     printf("%-8.2lf %8.2lf\n",c,f);
  }
}

int main()
{
   double c = 0;
   double start = 0;
   double end = 0; 
   double step = 0;

   c_f(c,5,10,2);

    return 0;
}