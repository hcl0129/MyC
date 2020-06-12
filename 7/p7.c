#include <stdio.h>

int main(void)
{
  int num1, denom1, num2, denom2, num3, denom3;
  char sign;

  printf("Enter two fractions and make an operation between them: ");
  scanf("%d/%d%c%d/%d", &num1, &denom1, &sign, &num2, &denom2);
  
  switch (sign) {
    case '+': {num3 = num1*denom2 + num2*denom1; denom3 = denom1*denom2; break;}
    case '-': {num3 = num1*denom2 - num2*denom1; denom3 = denom1*denom2; break;}
    case '*': {num3 = num1 * num2; denom3 = denom1 * denom2; break;}
    case '/': {num3 = num1 * denom2; denom3 = num2 * denom1; break;}
  }

  printf("The result is %d/%d\n", num3, denom3);

}
