/*
@ sum of an array
*/

#include <stdio.h>
#include<string.h>
#include<stdbool.h>

int find_sum (int arr[],int length){
    int sum = 0; 
    for (int i = 0; i < length; i++){
      sum += arr[i];
    }
    return sum;
}

int main()
{
   int arr[] = {1,2,4,6,7,0,9};
    int result = find_sum(arr,7);
    printf("%d\n",result);
    return 0;
}