#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  short digit_seen[10] = {0}, digit; long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    digit_seen[digit] += 1;
    n /= 10;
  }

  printf("Digit:      ");
  for (short i=0; i<10; i++) printf("  %d", i);
  printf("\n");

  printf("Occurrences:");
  for (short i=0; i<10; i++) printf("  %d", digit_seen[i]);
  printf("\n");

}
