#include <stdio.h>

int main(void)
{
  int n, rn = 0;

  printf("Give me a number: ");
  scanf("%d", &n);

  do {rn *= 10; 
      rn += n % 10;
      n /= 10; 
     } while (n != 0);

  printf("The reversed number is %d\n", rn);
}
