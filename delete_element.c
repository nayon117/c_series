#include<stdio.h>

int a[100000];

int main() {
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    int index;
    scanf("%d", &index);
    n--;

    for(int i=index; i<n; i++){
        a[i] = a[i+1];
    }

    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
}