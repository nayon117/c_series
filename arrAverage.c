/*
@ find average
*/

#include <stdio.h>
#include<string.h>
#include<stdbool.h>

double find_average(double arr[],int length){
    double sum = 0;

    for (int i = 0; i < length; i++){
      sum += arr[i];
    }

    return sum / length;
}

int main()
{
   double arr[] = {1.2,2.5,4.7,6.9,7.6,0.5,9.8};
   double arr1[] = {1.2,2.5,4.7,6.9,7.6};
  
   printf("%.2lf\n",find_average(arr,7));
   printf("%.2lf",find_average(arr1,5));
    return 0;
}