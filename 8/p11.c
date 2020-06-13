#include <stdio.h>

int main(void)
{
  char phone[15], numeric[15], ch; int len = 0;

  printf("Enter phone number: ");
  scanf("%c", &ch);
  while (ch != '\n') {
    phone[len] = ch;
    len+= 1; scanf("%c", &ch);
  }

  for (int i = 0; i < len; i++) {
    switch (phone[i]) {
      case 'A': { numeric[i] = '2'; break; }
      case 'B': { numeric[i] = '2'; break; }
      case 'C': { numeric[i] = '2'; break; }
      case 'D': { numeric[i] = '3'; break; }
      case 'E': { numeric[i] = '3'; break; }
      case 'F': { numeric[i] = '3'; break; }
      case 'G': { numeric[i] = '4'; break; }
      case 'H': { numeric[i] = '4'; break; }
      case 'I': { numeric[i] = '4'; break; }
      case 'J': { numeric[i] = '5'; break; }
      case 'K': { numeric[i] = '5'; break; }
      case 'L': { numeric[i] = '5'; break; }
      case 'M': { numeric[i] = '6'; break; }
      case 'N': { numeric[i] = '6'; break; }
      case 'O': { numeric[i] = '6'; break; }
      case 'P': { numeric[i] = '7'; break; }
      case 'R': { numeric[i] = '7'; break; }
      case 'S': { numeric[i] = '7'; break; }
      case 'T': { numeric[i] = '8'; break; }
      case 'U': { numeric[i] = '8'; break; }
      case 'V': { numeric[i] = '8'; break; }
      case 'W': { numeric[i] = '9'; break; }
      case 'X': { numeric[i] = '9'; break; }
      case 'Y': { numeric[i] = '9'; break; }
      default : { numeric[i] = phone[i]; break; }
    }
  }

  for(int i = 0; i < len; i++) printf("%c", numeric[i]);
  printf("\n");

}
