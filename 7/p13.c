#include <stdio.h>

int main(void)
{
  char ch;
  short sum = 0, count = 0, status = 1;
  printf("Enter a sentence: ");
  ch = getchar();
  while (ch != '\n') {
    if (ch==' ' || ch==',' || ch=='.') {count += status==0 ? 1 : 0 ; status = 1; }
    else { status = 0; sum += 1; }
    ch = getchar();
  }
  printf("Average word length: %f,%d\n", (float)sum / count,count);
}
