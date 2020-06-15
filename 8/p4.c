#include <stdio.h>

int main(void)
{
  short size = 0; long n, n2;
  printf("Enter the number you want to reverse: "); scanf("%ld", &n);
  n2 = n;
  do { n2 /= 10; size += 1;} while (n2 > 0);

  printf("Reverse number: ");
  for (short i=0; i<size; i++) {
    printf("%ld",  (n%10)); n /= 10;
  }
  printf("\n");
  
}
