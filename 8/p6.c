#include <stdio.h>
#include <ctype.h>

int main(void)
{
  int size = 0; char ch, message[100] = {'0'};
  printf("Enter message: "); scanf("%c", &ch);
  while (ch != '\n') {
    message[size] = ch; size += 1; scanf("%c", &ch);
  }

  printf("In B1FF-speak: ");
  for (int i = 0; i < size; i++) {
    ch = message[i];
    switch (toupper(ch)) {
      case 'A': { printf("4"); break; }
      case 'B': { printf("8"); break; }
      case 'E': { printf("3"); break; }
      case 'I': { printf("1"); break; }
      case 'O': { printf("0"); break; }
      case 'S': { printf("5"); break; }
      default:  { printf("%c", toupper(ch));}
    }
  }
  printf("!!!!!!!!!!\n");

}
