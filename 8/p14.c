#include <stdio.h>

int main(void)
{
  int len = 0;
  char sent[100], ch, punc;

  printf("Enter a sentence: ");
  scanf("%c", &ch);

  while (ch != '\n') {
    if (ch == '?' || ch == '.' || ch == '!') { 
      punc = ch; scanf("%c", &ch); continue; 
    }
    sent[len] = ch; len += 1;
    scanf("%c", &ch);
  }

  printf("Reversal of sentence: ");
  for (int i = len-1; i >= -1; i--) {
    if (i == -1 || sent[i] == ' ') {
      for (int j = i+1; j < len; j++) {
        if (sent[j] != ' ') {
          printf("%c", sent[j]);
          if (j == len-1) printf(" ");
        }
        else if (i == -1) break;
        else { printf("%c", sent[j]); break; }
      }
    }
  }

  printf("%c\n", punc);

}
