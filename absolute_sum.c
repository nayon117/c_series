#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);  // Input the size of the array
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        long long num;
        scanf("%lld", &num);
        sum += num;  // Add each number (positive or negative) to the sum
    }

    sum = llabs(sum);  // Take the absolute value of the final sum
    printf("%lld\n", sum);  // Output the absolute summation

    return 0;
}
