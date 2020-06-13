#include <stdio.h>

int power(int x, int n);

int main(void)
{
  int x, n;
  printf("Power operation (x^n): ");
  scanf("%d^%d", &x, &n);

  printf("Result: %d\n", power(x, n));

}

int power(int x, int n)
{
  if (n == 0) return 1;
  return x * power(x, n-1);
}
