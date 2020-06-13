#include <stdio.h>

int main(void)
{
int share, price;
float commission;

printf("Enter share numbers: ");
scanf("%d", &share);

printf("Enter price per share: ");
scanf("%d", &price);

commission = share<2000 ? 33+0.03f*share : 33+0.02f*share;
printf("Commission is %f\n", commission);
}
