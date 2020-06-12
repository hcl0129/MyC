#include <stdio.h>

int main (void)
{
  char c;
  for (int i=1; ; i++) {
    while(1) {
      if (i%24 == 1) {
        printf("Press Enter to continue... ");
        c = getchar();
	if (c=='\n') break;
	else while (getchar()!='\n') ; 
      }
      else break;
    }
    printf("%10d%20d\n", i, i*i);
  }
}
