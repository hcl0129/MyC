#include <stdio.h>

int main(void)
{
  int num, denom, rem, n, m;

  printf("Enter a fraction: ");
  scanf("%d/%d", &num, &denom);

  n = num; m = denom;
  while (1){
    if (n == 0) break;
    else {rem = m % n; m = n; n = rem;}
  }

  printf("In lowest terms: %d/%d\n", num/m, denom/m);
}
