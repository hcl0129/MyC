#include <stdio.h>
#include <math.h>

int main(void)
{
  double x, y = 1.0l, mean, diff = 1.0l;

  printf("Enter a number and I will find the square root: ");
  scanf("%lf", &x);
  
  while (diff > 0.00001) {
    mean = (y + x/y) / 2;
    diff = fabs(y - mean);
    y = mean;
  }
  
  printf("Root is %lf\n", y);
}
