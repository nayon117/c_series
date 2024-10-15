#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n;
    scanf("%d", & n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int zeros = 0;
    int ones = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            zeros++;
        } else {
            ones++;
        }
    }
    printf("%d %d\n", zeros, ones);  
    return 0;
}