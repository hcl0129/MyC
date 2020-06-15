#include <stdio.h>

int main(void)
{
  int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12;

  printf("Enter the UPC check digit: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",\
    &n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11,&n12);

  if (9 - ((3 * (n1+n3+n5+n7+n9+n11) + (n2+n4+n6+n8+n10)) - 1) % 10 == n12)
    printf("Check digit is valid.\n");
  else
    printf("Check digit is invalid\n");
}
