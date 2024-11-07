#include<stdio.h>
#include<stdlib.h>

int *array_copy (int *array, int length){
    int *c = malloc(length * sizeof(int));

    for (int i = 0; i < length; i++){
      c[i] = array[i];
    }
    return c;
}

int main () {
    
    int a1[] = {12,14,16,18,20};
    int a2[] = {11,13,15,17,19};

    int *a1_copy = array_copy(a1,5);
    int *a2_copy = array_copy(a2,5);

    for (int i = 0; i < 5; i++){
      printf("a1_copy %d\n",a1_copy[i]);
    }
    for (int i = 0; i < 5; i++){
      printf("a2_copy %d\n",a2_copy[i]);
    }
    return 0;
}