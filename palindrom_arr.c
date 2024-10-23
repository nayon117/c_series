/*
@goal: array is palindrome or not.
@given: Given a number N and an array A of N numbers.

* take all inputs
*declare flag
*compare original array to reverse
*check isPalindrome
*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
     int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int isPalindrome = 1; 
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
      if(arr[i] != arr[j]){
        isPalindrome = 0;
        break;
      }
      
    }

    if (isPalindrome)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}