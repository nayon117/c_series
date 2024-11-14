#include<stdio.h>

int main () {
  double radius = 0;
  scanf("%lf",&radius);

  double result = 3.14159 * radius * radius;
  printf("Area = %lf\n",result);

  return 0;
}
