#include <stdio.h>

double polynominal(double x);
double pow2(double x, int n);

int main(void)
{
  double x;
  printf("Enter a value x: ");
  scanf("%lf", &x);

  printf("The result: %.2lf\n", polynominal(x));

}

double polynominal(double x)
{
  return 3 * pow2(x, 5) + 2 * pow2(x, 4) - 5 * pow2(x, 3) - pow2(x, 2) + 7 * x - 6;
}

double pow2(double x, int n)
{
  while (--n > 0) x *= x;
  return x;
}
