#include <stdio.h>

void reduce(int, int, int *, int *);

int main(void)
{
  int nume, denom, reduced_nume, reduced_denom;
  printf("Enter a fraction: ");
  scanf("%d/%d", &nume, &denom);

  reduce(nume, denom, &reduced_nume, &reduced_denom);
  printf("%d/%d\n", reduced_nume, reduced_denom);
}

void reduce(int nume, int denom, int *reduced_nume, int *reduced_denom)
{
  int gcd, n, m;
  n = nume; m = denom;

  while(n > 0) {
    gcd = m % n;
    m = n;
    n = gcd;
  }
  gcd = m;

  *reduced_nume = nume / gcd;
  *reduced_denom = denom / gcd;
}
