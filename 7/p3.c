#include <stdio.h>

int main(void)
{
  double n, sum = 0;

  Input: { printf("Enter the number to add (0 to terminate): ");
           scanf("%lf", &n); }

  Loop: { if (n != 0) { sum += n; goto Input; } }

  printf("The sum is %lf\n", sum);
	  
}
