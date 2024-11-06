/*
* find max
output: 9 , 8
*/
#include<stdio.h>

int find_max (int arr[],int length){
    int max = arr[0];
     for (int i = 1; i < length; i++){
       if(arr[i] > max){
        max = arr[i];
       }
     }
     return max;
}

int main () {
    int arr1[] = {1,2,4,6,7,0,9};
    int arr2[] = {4,6,2,8,};

    int max1 = find_max(arr1,7);
    int max2 = find_max(arr2,4);

    printf("Min1 = %d Min2= %d\n",max1,max2);
    return 0;
}