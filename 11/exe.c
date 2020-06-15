#include <stdio.h>

#define n 5

void find_two_largest(int [], int *, int *);


int main(void)
{

  int a[n];
  int largest, second_largest;

  printf("Enter 5 numbers: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    //a[i] = num;
    //printf("%d,%d\n", i, num);
  }
  //printf("asd\n");

  find_two_largest(a, &largest, &second_largest);
  //printf("point\n");

  printf("Two largest: %d, %d\n", largest, second_largest);
}

void find_two_largest(int a[], int *largest, int *second_largest)
{
  *largest = *second_largest = a[0];

  for (int i = 0; i < n; i++) {
    if (a[i] > *largest)
      largest = &a[i];
  }

  for (int i = 0; i < n; i++) {
    if (a[i] > *second_largest && a[i] != *largest)
      *second_largest = a[i];
  }
  

}
