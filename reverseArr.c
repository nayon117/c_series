/*
@ Reverse an array
*/

#include <stdio.h>

void reverse_array(int arr[], int length)
{
    for (int i = 0; i < (length / 2); i++)
    {
        int temp = arr[i];
        arr[i] = arr[length - i - 1];
        arr[length - i - 1] = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    reverse_array(arr, 10);
    reverse_array(arr2, 11);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < 11; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}