#include <stdio.h>

int main(void)
{
  int n;
  printf("Enter size of magic square (1-99): ");
  scanf("%d", &n);

  int mat[n][n], x = 0, y = n/2;
  for (int i = 0; i < n; i++) 
    for (int j = 0; j < n; j++)
      mat[i][j] = 0;

  mat[x][y] = 1;
  for(int i = 2; i <= n*n; i++) {
    x -= 1; y += 1;
    if (x < 0)  x = x + n;
    if (y >= n) y = y - n; 

    if (mat[x][y] != 0)  {
      x += 2; y -= 1;
    }
    if (x >= n) x = x - n;
    if (y < 0)  y = y + n;
    
    mat[x][y] = i;
    }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) printf("%3d", mat[i][j]);
    printf("\n");
  }

}
