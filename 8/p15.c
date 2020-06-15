#include <stdio.h>

int main(void)
{
  int shift, len = 0;
  char sent[80], ch;

  printf("Enter message to be encrypted: ");
  scanf("%c", &ch);

  while (ch != '\n') {
    sent[len] = ch;
    len += 1;
    scanf("%c", &ch);
  }

  printf("Enter shift amount (1-25): ");
  scanf("%d", &shift);

  printf("Encryoted message: ");
  for (int i = 0; i < len; i++) {
    ch = sent[i];
    if      ((ch - 'A') >= 0 && (ch - 'A') < 26) ch = ((ch - 'A') + shift) % 26 + 'A';
    else if ((ch - 'a') >= 0 && (ch - 'a') < 26) ch = ((ch - 'a') + shift) % 26 + 'a';
    printf("%c", ch);
  }
  printf("\n");

}
