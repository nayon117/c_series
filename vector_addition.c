#include<stdio.h>

void vector_addition (float v1[],float v2[],float result[], int length){
    for (int i = 0; i < length; i++){
      result[i] = v1[i] + v2[i];
    }
}

int main () {
    float v1[] = {1,2,3};
    float v2[] = {4,5,6};
    float result[] = {0,0,0};

    vector_addition(v1,v2,result,3);

    for (int i = 0; i < 3; i++){
      printf("%f\n",result[i]);
    }

    return 0;
}