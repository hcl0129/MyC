#include <stdio.h>

int main(void)
{
  float prin, ir, mp;
  int n;

  printf("Enter amount of loan: ");
  scanf("%f", &prin);

  printf("Enter interest rate: ");
  scanf("%f", &ir);

  printf("Enter monthly payment: ");
  scanf("%f", &mp);

  printf("Enter number of logs presented: ");
  scanf("%d", &n);

  for (int i=1; i<=n; i++){
    prin = prin * (1 + ir/100/12) - mp;
    printf("Balance remaining after %d payment: %.2f\n", i, prin);
    }

}
