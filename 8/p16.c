#include <stdio.h>
#include <ctype.h>

int main(void)
{
  int alphabet[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  int index, state = 1; char ch;

  printf("Enter first word: ");
  scanf("%c", &ch);

  while (ch != '\n') {
    if (isalpha(ch)) {
      ch = tolower(ch);
      index = ch - 'a';
      alphabet[index] += 1;
    }
    scanf("%c", &ch);
  }

  printf("Enter second word: ");
  scanf("%c", &ch);

  while (ch != '\n') {
    if (isalpha(ch)) {
      ch = tolower(ch);
      index = ch - 'a';
      alphabet[index] -= 1;
    }
    scanf("%c", &ch);
  }

  for (int i = 0; i < 26; i++) {
    if (alphabet[i] != 0) { state = 0; break; }
  }

  if (state == 0) printf("The words are not anagrams.\n");
  else printf("The words are anagrams.\n");


}
