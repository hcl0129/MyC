#include <stdio.h>

int main(void)
{
    int i;

    printf("Enter a number: ");
    scanf("%d", &i);

    if (i >= 0 && i <= 9)
        printf("The number %d has 1 digit.\n", i);
    else if (i >= 10 && i <= 99)
        printf("The number %d has 2 digits.\n", i);
    else if (i >= 100 && i <= 999)
        printf("The number %d has 3 digits.\n", i);
    else
        printf("The number %d has 4 digits.\n", i);
}
