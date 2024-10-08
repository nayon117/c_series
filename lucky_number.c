#include <stdio.h>



int main() {

    int n;

    scanf("%d", & n);


    int lastIndex = n / 10;
    int firstIndex = n % 10;

    if (firstIndex != 0 && lastIndex % firstIndex == 0) {
        printf("YES\n");
    } else if (lastIndex != 0 && firstIndex % lastIndex == 0) {
        printf("YES\n");
    }

    else {
        printf("NO\n");
    }


    return 0;
}