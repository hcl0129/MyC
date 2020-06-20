#include <stdio.h>

#define bool int
#define true 1
#define false 0

bool search(const int [], int, int);
void store_zeros(int [], int);

int main(void)
{
  int a[2][3] = {1,2,3,4,5,6};

  for (int *p = &a[0][0]; p < &a[0][0] + 2*3; p++)
    printf("%d\n", *p);

}

bool search(const int a[], int n, int key)
{
  int *p;
  for (p = (int *)a; p < a + n; p++)
    if (key == *p) return true;
  return false;
}

