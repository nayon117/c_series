/*
how many times a number occur in array
output: 4 found  3 times
*/
#include<stdio.h>

int occurences (int arr[],int length,int to_find){
    int count = 0;
    for (int i = 0; i < length; i++){
      if(arr[i] == to_find){
        count++;
      }
    }
    return count;
}

int main () {
    int arr[] = {1,2,4,6,4,7,0,7,4,9};
    int to_find = 4;
    
    int result = occurences(arr,10,to_find);
 
    printf("4 found  %d times\n",result);

    return 0;
}