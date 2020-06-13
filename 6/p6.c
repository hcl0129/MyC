#include <stdio.h>

int main(void)
{
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  for (int i=2; i*i <= n; i++){
    printf("%d\n", i*i);}

}
