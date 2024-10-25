#include<stdio.h>

int main () {
    int mobile, x,y;
    scanf("%d %d %d", &mobile, &x, &y);
    int mobiles;
    int counter = 0; 
    for (int i = 1; i <= mobile; i++) {
        scanf("%d", & mobiles);
        if(mobiles>=x && mobiles<=y){
            counter++;
        }
    }
   printf("%d\n",counter);

   return 0;

    return 0;
}