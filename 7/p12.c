#include <stdio.h>

int main(void)
{
  float n, res; char ch;

  printf("Enter an expression: ");

  scanf("%f", &res);
  scanf("%c", &ch);

  while (1) {
    if (ch == '\n') break;
    scanf("%f", &n);
    switch (ch) {
      case '+': {res += n; break;}
      case '-': {res -= n; break;}
      case '*': {res *= n; break;}
      case '/': {res /= n; break;}
    }
    //printf("%f%c%f", n, ch, res);
    scanf("%c", &ch);
  }

  printf("Value of expression: %f\n", res);
}
