#include<stdio.h>

int a[100000];

int main() {
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    int index,value;
    scanf("%d %d", &index,&value);
    n++;

    for(int i=n-1; i>=index; i--){
        a[i+1] = a[i];
    }
    a[index] = value;

    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
}