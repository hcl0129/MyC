#include <stdio.h>

int main(void)
{
  int m, d, y, mm, md, my;

  printf("Enter a date (mm/dd/yy): ");
  scanf("%d/%d/%d", &mm, &md, &my);
  
  while (1){
    if (mm==0 && md==0 && my==0) break;
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m, &d, &y);
    if (m==0 && d==0 && y==0) break;
    else if (y > my) continue;
    else if (y == my && m > mm) continue;
    else if (m == mm && d > md) continue;
    else {mm = m; md = d; my =y;}
    }

  printf("%d/%d/%d is the earliest date\n", mm, md, my);

}
