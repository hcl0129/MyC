#include <stdio.h>

int main(void)
{
  char ch, a[100];
  int index = 0;

  printf("Enter a message: ");
  ch = getchar();

  while (ch != '\n') {
    a[index++] = ch;
    ch = getchar();
  }

  for (--index; index >= 0; index--) printf("%c", *(a+index));

  printf("\n");
}
