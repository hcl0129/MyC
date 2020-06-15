#include <stdio.h>

#define INIT_BALANCE 100.00f

int main(void)
{
  int i, low_rate, num_years, year;
  float value[5];
  #define NUM_RATE ((int) (sizeof(value) / sizeof(value[0]))) 

  printf("Enter monthly interest rate: "); scanf("%d", &low_rate);
  printf("Enter number of years shown: "); scanf("%d", &num_years);

  printf("\n  Years");
  for (i = 0; i < NUM_RATE; i++) {
    printf("%10d%%", low_rate + i);
    value[i] = INIT_BALANCE;
  }
  printf("\n");

  for (year = 1; year <= num_years; year++) {
    printf("%5d    ", year);
    for (i = 0; i < NUM_RATE; i++) {
      for (short j = 0; j < 12; j++) value[i] += (float) (low_rate+i) / 100 * value[i];
      printf("%11.2f", value[i]);
    }
    printf("\n");
  }

}
