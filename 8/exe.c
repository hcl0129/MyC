#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
  int a[7] = {1};
  for (short i=0; i<7; i++)
    printf("%d\n", a[i]);
  printf("%c\n", toupper(','));
  srand((unsigned) time(NULL));
  printf("%d\n", rand() % 4);
}
