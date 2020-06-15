#include <stdio.h>

int main(void)
{
  int num, week, i = 1;

  printf("Enter number of days in month: ");
  scanf("%d", &num);

  printf("Enter starting day of the week (1=Sun, 7=Sat): ");
  scanf("%d", &week);

  switch (week){
    case 1: {printf("%3d", i); break;}
    case 2: {printf("%6d", i); break;}
    case 3: {printf("%9d", i); break;}
    case 4: {printf("%12d", i); break;}
    case 5: {printf("%15d", i); break;}
    case 6: {printf("%18d", i); break;}
    case 7: {printf("%21d", i); break;}
    }

  for (i=2 ; i<=num; i++){
    if (week == 7) {printf("\n"); week = 1;}
    else week += 1;
    printf("%3d", i);
    }

  printf("\n");

}
