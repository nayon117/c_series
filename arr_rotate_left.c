#include <stdio.h>

void rotate_left_once(int arr[], int len)
{
  int temp = arr[0];
  for (int i = 0; i < (len - 1); i++)
  {
    arr[i] = arr[i + 1];
  }
  arr[len - 1] = temp;
}

void rotate_left(int arr[], int len, int n)
{
  for (int i = 0; i < n; i++)
  {
    rotate_left_once(arr, len);
  }
}

int main()
{
  int arr1[] = {1, 3, 5, 7, 9};

  // rotate_left_once(arr1, 5);
  rotate_left(arr1, 5, 3);

  for (int i = 0; i < 5; i++)
  {
    printf("%d", arr1[i]);
  }
  printf("\n");

  return 0;
}
