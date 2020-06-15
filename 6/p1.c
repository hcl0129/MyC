#include <stdio.h>

int main(void)
{
  float max = 0, n;

  while (1)
  {
    printf("Enter a number: ");
    scanf("%f", &n);

    if (n <= 0) { printf("The largest number entered was %f\n", max); break; }
    max = max < n ? n : max;
  }
}
