#include <stdio.h>

int main(void)
{
  char ch, name;

  printf("Your name: ");
  name = getchar();

  while (name == ' ') name = getchar();
  while (1) {ch = getchar(); if (ch == ' ') break;}
  while (ch == ' ') ch = getchar();
  while (ch != '\n') {printf("%c", ch); ch = getchar();}

  printf(", %c.\n", name);

}
