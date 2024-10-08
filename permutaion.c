#include <stdio.h>


int checkPossible(long long a, long long b, long long c, long long d) {
    

    if (a + b - c == d) return 1;
    

    if (a + b * c == d) return 1;
    

    if (a - b + c == d) return 1;
    

    if (a - b * c == d) return 1;
    
 
    if (a * b + c == d) return 1;

    if (a * b - c == d) return 1;
    
   
    return 0;
}

int main() {
   
    long long a, b, c, d;
    
   
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    
   
    if (checkPossible(a, b, c, d)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}