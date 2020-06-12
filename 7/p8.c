#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char ch; int h, min;

  printf("Enter a 12-hours time point: ");
  scanf("%d:%d %c", &h, &min, &ch);

  ch = toupper(ch);
  if (ch == 'P') h += 12;

  printf("Time is %d:%d\n", h, min);  
}
