#include <stdio.h>
#include <ctype.h>

int main(void)
{
  int i = 0, diff;
  char ch, a[100];

  printf("Enter a message: ");
  ch = getchar();

  while (ch != '\n') {
    if (isalpha(ch)) {
      diff = toupper(ch) - 'A';
      if (diff >= 0 && diff <= 26) *(a+i++) = toupper(ch);
    }
    ch = getchar();
  }

  //for (int p=0; p<i; p++) printf("%c", a[p]);

  for (int j = 0; j <= i; j++) {
    if (*(a+j) != *(a+(--i))) {
      printf("Not a palindrome\n");
      return 0;
    }
  }

  printf("Palindrome\n");
  return 0;

}
