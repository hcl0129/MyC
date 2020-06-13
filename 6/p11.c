#include <stdio.h>

int main(void)
{
  int n, denom; float exp, result;

  printf("Enter a end number: ");
  scanf("%d", &n);

  exp = 1;
  for (int i=1; i<=n; i++) {
    denom = 1;
    for (int j=1; j<=i; j++) denom *= j;
    result = 1.0f / denom;
    exp += result;
    }

  printf("Result is %f\n", exp);
}
