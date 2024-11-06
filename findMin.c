/*
* find min
output: 0 , 2
*/
#include<stdio.h>

int find_min (int arr[],int length){
    int min = arr[0];
     for (int i = 1; i < length; i++){
       if(arr[i] < min){
        min = arr[i];
       }
     }
     return min;
}

int main () {
    int arr1[] = {1,2,4,6,7,0,9};
    int arr2[] = {4,6,2,8,9};

    int min1 = find_min(arr1,7);
    int min2 = find_min(arr2,5);

    printf("Min1 = %d Min2= %d\n",min1,min2);
    return 0;
}