// Given a lowercase alphabet character. You have to print the next character in the alphabet.

#include <stdio.h>

int main() {
    char ch;
    scanf("%c", & ch);

    // if (ch >= 'a' && ch < 'z') {

    //     printf("%c", ch + 1);
    // }
    // else if (ch == 'z') {
    //     printf("%c", ch - 25);
    // }

    // optimize way:

   if (ch >= 'a' && ch <= 'z') {

        char nextChar = (ch - 'a' + 1) % 26 + 'a';
        printf("%c\n", nextChar);
    }
    else {
        printf("invalid input\n");
    }

}