#include <stdio.h>

int main(void)
{
  int m1, d1, y1, m2, d2, y2;

  printf("Enter first date (mm/dd/yy): ");
  scanf("%d/%d/%d", &m1, &d1, &y1);

  printf("Enter second date (mm/dd/yy): ");
  scanf("%d/%d/%d", &m2, &d2, &y2);

  if (d1 + m1*30 + y1*365 > d2 + m2*30 + y2*365)
    printf("Second is earlier\n");
  else
    printf("First is earlier\n");
}
