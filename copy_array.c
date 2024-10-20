#include <stdio.h>

int a[100000];
int b[100000];

int main()
{
    int length1 = 0, length2 = 0;
    scanf("%d", &length1);

    for (int i = 0; i < length1; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < length1; i++)
    {
        b[i] = a[i];
    }

    for (int i = 0; i < length1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < length1; i++)
    {
        printf("%d ", b[i]);
    }
}