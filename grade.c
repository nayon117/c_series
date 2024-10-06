#include <stdio.h>

int main() {
    int score;
    scanf("%d", & score);

    if (score >= 33 && score <= 100) {
        printf("passed\n");
        if (score >= 80 && score <= 100) {
            printf("You got A+\n");
            if (score >= 90 && score <= 100) {
                printf("you got scholarship\n");
            }
        } else if (score >= 70 && score <= 79) {
            printf("You got A grade\n");
        } else if (score >= 60 && score <= 69) {
            printf("You got A- grade\n");
        } else if (score >= 50 && score <= 59) {
            printf("you got B grade\n");
        } else if (score >= 40 && score <= 49) {
            printf("You got c grade\n");
        } else {
            printf("you got d grade\n");
        }
    } else if (score >= 0 && score <= 32) {
        printf("Failed\n");
    } else {
        printf("Invalid Number");
    }

}