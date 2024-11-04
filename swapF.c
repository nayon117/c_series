#include<stdio.h>

void getSwap (int *n, int *m) {
    int temp = *n;
    *n = *m;
    *m = temp;
}

int main () {

     int n,m;
     scanf("%d %d",&n,&m);
    
     getSwap(&n,&m);
     printf("%d %d\n",n,m);

     return 0;
}