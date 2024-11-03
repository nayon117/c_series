#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(void) {
    
    int x,y;
    scanf("%d %d",&x,&y);
    
    int *px = &x, *py= &y;
    
    int temp = *px;
    *px = *py;
    *py = temp;
    
    printf("%d %d\n",x,y);

}