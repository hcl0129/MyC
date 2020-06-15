#include <stdio.h>

void pay_amount(int, int *, int *, int *,int *);

int main(void)
{
  int dollars, twen, tens, five, ones;
  printf("Enter a dollar amount: ");
  scanf("%d", &dollars);

  pay_amount(dollars, &twen, &tens, &five, &ones);
  printf("Twenty: %d\nTens: %d\nFive: %d\nOnes: %d\n", twen, tens, five, ones);
}

void pay_amount(int dollars, int *twen, int *tens, int *five, int *ones)
{
  *twen = dollars / 20;
  dollars %= 20;
  *tens = dollars / 10;
  dollars %= 10;
  *five = dollars / 5;
  dollars %= 5;
  *ones = dollars;
}
