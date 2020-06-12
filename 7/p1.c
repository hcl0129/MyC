#include <stdio.h>

int main(void)
{
  for (short i=1; i*i>0 && i>0 ; i++) {

  printf("%10d%32d\n", i, i*i);
  }
}
