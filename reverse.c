/*
@title:- reverse an array
@given:- Given a number N and an array A of N numbers
process:-
*declare & take input of n
*run a loop 0 to n to take input of the array A to N number
*use two pointer to reverse array 
*again run a loop  and it will check 0 for i and n-1 for j . i <=j , and the last condition to ++ , --
*store original array value in a temp variable then swap values 
*/

#include<stdio.h>

int main (){
    int n;
    scanf("%d",&n);
   int arr[n];
    
    for(int i=0;i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0,j=n-1; i<=j; i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}