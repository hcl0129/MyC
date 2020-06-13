#include <stdio.h>

int main(void)
{
  int n, m, rem;

  printf("Enter two integers: ");
  scanf("%d %d", &n, &m);

  while (1){
    if (n == 0) break;
    else {rem = m % n; m = n; n = rem;}
    }

  printf("Greatest common divisor: %d\n", m);
}
