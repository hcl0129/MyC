#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  bool digit_seen[10] = {false}, state = false, digit_state[10] = {false};
  short digit; long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    if (digit_seen[digit] == true) {
      digit_state[digit] = true;
      state = true;
    }
    else digit_seen[digit] = true;
    n /= 10;
  }

  if (state == false) printf("No repeated digit\n");
  else {
    printf("Repeated digit:");
    for (short i=1; i<10; i++){
      if (digit_state[i] == true) printf(" %d", i);
    }
    printf("\n");
  }
}
