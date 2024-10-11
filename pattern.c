/*
A 
B B 
C C C 
D D D D 
E E E E E 
F F F F F F 
*/

#include <stdio.h>



int main() {

    int n;
    scanf("%d", & n);

    for (int i = 0; i < n; i++) {
        char currentChar = 'A' + i;
        for (int j = 0; j <= i; j++) {
            printf("%c ", currentChar);
        }
        printf("\n");
    }


    return 0;
}


/*
         * 
        * * 
       * * * 
      * * * * 
     * * * * * 
*/

#include <stdio.h>



int main() {

    int n;
    scanf("%d", & n);

    for (int i = 1; i <= n; i++) {
        
        for(int j=1; j<=n-i;j++){
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }


    return 0;
}