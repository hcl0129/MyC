#include <stdio.h>

int main(void)
{
  int n;
  printf("Enter number of entries in table: ");
  scanf("%d", &n);

  for (int i=1, odd=3, square=1; i<=n; odd+=2, i++) {
    printf("%10d%10d\n", i, square);
    square += odd;}

}
