#include <stdio.h>
#define N 40

int main(void)
{
  int fib[N] = {0,1};
  for (short i=3; i<N; i++) {
    fib[i] = fib[i-1] + fib[i-2];
  }
  for (short i=0; i<N; i++) printf("%d\n", fib[i]);
}
