#include <stdio.h>
#include <stdbool.h>

int main(void)
{  
  long n;

  Scan: {
  printf("Enter a number: ");
  scanf("%ld", &n);
  }

  while (n > 0)
  {
  short digit, digit_seen[10] = {0};  

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
  
  goto Scan;
  }
  
  return 0;
}
