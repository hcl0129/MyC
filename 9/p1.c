#include <stdio.h>

void selection_sort(int a[], int len);
void find_largest(int a[], int len);

int main(void)
{
  char ch;
  int n, len = 0, a[50];

  printf("Enter some numbers: ");
  scanf("%d", &n);

  while (1) {
    a[len] = n;
    scanf("%c", &ch);
    if (ch == '\n') break;
    len += 1;
    scanf("%d", &n);
  }

  //printf("%d\n",len);
  selection_sort(a, len);
  //printf("Sorted array: %d, %d, %d, len = %d\n", a[0], a[1], a[2], len);

  printf("Sorted array:");
  for(int i = 0; i <= len; i++) 
    printf(" %d", a[i]);
  printf("\n");

}

void selection_sort(int a[], int len)
{
  if (len == 0) return;
  find_largest(a, len);
  selection_sort(a, len - 1);
}

void find_largest(int a[], int len)
{
  int max = a[0], index = 0;
  for (int i = 1; i <= len; i++) {
    if (a[i] > max) {
      max = a[i];
      index = i;
    }
  }
  a[index] = a[len];
  a[len] = max;
}
