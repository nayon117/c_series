#include <stdio.h>

int main() {

    int numbers[100];
    int count = 0;

    for (int i = 100; i <= 300; i++) {
        if (i % 2 == 0 && i % 3 == 0 && i % 5 == 0) {
            numbers[count] = i;
            count++;
        }
    }
    if (count > 0) {
        int middleIndex = count / 2;
        printf("%d\n", numbers[middleIndex]);
    } else {
        printf("No number found in the range\n");
    }

}