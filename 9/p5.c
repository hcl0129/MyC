#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main(void)
{
  int n;
  char magic_square[n][n];
  printf("Enter size of magic square (1-99): ");
  scanf("%d", &n);

  create_magic_square(n, magic_square);
  //printf("%d\n", n);
  //print_magic_square(n, magic_square);

}

void create_magic_square(int n, char magic_square[n][n])
{
  int x = 0, y = n/2;
  for (int i = 0; i < n; i++) 
    for (int j = 0; j < n; j++)
      magic_square[i][j] = 0;

  //print_magic_square(n, magic_square);
  magic_square[x][y] = 1;
  for(int i = 2; i <= n*n; i++) {
    //printf("%d\n", i);
    x -= 1; y += 1;
    if (x < 0)  x = x + n;
    if (y >= n) y = y - n; 

    if (magic_square[x][y] != 0)  {
      x += 2; y -= 1;
    }
    if (x >= n) x = x - n;
    if (y < 0)  y = y + n;
    
    magic_square[x][y] = i;
    //print_magic_square(n, magic_square);
  }
  //printf("%d\n", n);
  print_magic_square(n, magic_square);
  return ;
}

void print_magic_square(int n, char magic_square[n][n])
{
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) printf("%3d", magic_square[i][j]);
    printf("\n");
  }
  return ;
}
