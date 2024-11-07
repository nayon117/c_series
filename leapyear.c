#include<stdio.h>
#include<stdbool.h>

bool isLeapYear(int year){
    if(year %4 != 0) return false;
    else if(year %100 != 0) return true;
    else if(year %400 != 0) return false;
    else return true;
}


int main () {
    
    for (int y = 2000; y <= 2100; y++){
      if(isLeapYear(y)){
        printf("%d is a leap year\n",y);
      }else{
        printf("%d\n",y);
      }
    }
    
    return 0;
}