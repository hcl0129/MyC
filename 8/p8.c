#include <stdio.h>

int main(void)
{
  int n[5][5], number, sum[5] = {0,0,0,0,0}, high[5] = {0,0,0,0,0}, low[5] = {100,100,100,100,100} ;
  for (short i = 0; i < 5; i++) {
    printf("Student %d: ", i+1);
    scanf("%d", &number);
    for (short j = 0; j < 5; j++) {
      n[i][j] = number;
      if (j != 4) scanf("%d", &number);
    }
  }

  printf("Total scores for five students: ");
  for (short i = 0; i < 5; i++) {
    for (short j = 0; j < 5; j++) sum[i] += n[i][j];
    printf(" %d", sum[i]); 
  }
  
  printf("\nAverage score for five students: ");
  for (short i = 0; i < 5; i++) printf(" .2%f", sum[i] / 5.0f);

  printf("\n\nAverage score for each quiz: ");
  for (short j = 0; j < 5; j++) { 
    sum [j] = 0;
    for (short i = 0; i < 5; i++) {
      sum[j] += n[i][j];
      high[j] = n[i][j] > high[j] ? n[i][j] : high[j];
      low[j] = n[i][j] < low[j] ? n[i][j] : low[j];
    }
    printf(" .2%f", sum[j] / 5.0f);
  }

  printf("\nHigh score for each quiz: ");
  for (short i = 0; i < 5; i++) printf(" %d", high[i]);

  printf("\nLow score for each quiz: ");
  for (short i = 0; i < 5; i++) printf(" %d", low[i]);
  printf("\n");

}
