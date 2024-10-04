#include <stdio.h>

int main() {
    int n; 
    printf("Enter the number of products: ");
    scanf("%d", &n);
    
    float totalSum = 0; 

    for (int i = 1; i <= n; i++) {
        int code, units;
        float price;
        
        printf("Enter product code, units, and price for product %d: ", i);
        scanf("%d %d %f", &code, &units, &price);
        
        totalSum += units * price;
    }

    printf("VALOR A PAGAR: R$ %.2f\n", totalSum);

    return 0;
}
