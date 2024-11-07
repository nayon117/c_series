#include<stdio.h>

float dot_product(float v1[],float v2[],int length){
    float sum = 0;
    for (int i = 0; i < length; i++){
      sum += (v1[i] * v2[i]);
    }
    return sum;
}

int main () {
    float v1[] = {1,2,3};
    float v2[] = {4,5,6};
    float result = dot_product(v1,v2,3);
    printf("%.2f",result);

    return 0;
}