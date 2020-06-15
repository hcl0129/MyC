#include <stdio.h>

int main(void)
{
  int n[5][5], number, sum = 0;
  for (short i = 0; i < 5; i++) {
    printf("Enter row %d: ", i+1);
    scanf("%d", &number);
    for (short j = 0; j < 5; j++) {
      n[i][j] = number;
      if (j != 4) scanf("%d", &number);
    }
  }

  printf("Row totals:    ");
  for (short i = 0; i < 5; i++) {
    for (short j = 0; j < 5; j++) sum += n[i][j];
    printf(" %d", sum); sum = 0;
  }
  printf("\n");

  printf("Column totals: ");
  for (short j = 0; j < 5; j++) { 
    for (short i = 0; i < 5; i++) sum += n[i][j];
    printf(" %d", sum); sum = 0;
  }
  printf("\n");

}
