#include <stdio.h>

int main(void)
{
  int denom; float exp, result, epsilon;

  printf("Enter a end result: ");
  scanf("%f", &epsilon);

  exp = 1;
  for (int i=1; ; i++) {
    denom = 1;
    for (int j=1; j<=i; j++) denom *= j;
    result = 1.0f / denom;
    if (exp+result > epsilon) break;
    exp += result;
    }

  printf("Result is %f\n", exp);
}
