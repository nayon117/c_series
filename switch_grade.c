#include <stdio.h>

int main() {
    int score;
    scanf("%d", &score);

  
    if (score > 100 || score < 0) {
        printf("Invalid score\n");
    } else {
        switch (score / 10) {
            case 10:
            case 9:
                printf("You got scholarship\n");
                break;
            case 8:
                printf("You got A+\n");
                break;
            case 7:
                printf("You got A\n");
                break;
            case 6:
                printf("You got A-\n");
                break;
            case 5:
                printf("You got B\n");
                break;
            case 4:
                printf("You got C\n");
                break;
            case 3:
                printf("You got D\n");
                break;
            default:
                printf("You got F\n");
        }
    }

    return 0;
}
