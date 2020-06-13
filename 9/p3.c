#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIREC 4;

void generate_random_walk(char mat[10][10]);
void print_array(char mat[10][10]);

int main(void)
{
  char mat[10][10] = {{'.','.','.','.','.','.','.','.','.','.'},
                      {'.','.','.','.','.','.','.','.','.','.'},
                      {'.','.','.','.','.','.','.','.','.','.'},
                      {'.','.','.','.','.','.','.','.','.','.'},
                      {'.','.','.','.','.','.','.','.','.','.'},
                      {'.','.','.','.','.','.','.','.','.','.'},
                      {'.','.','.','.','.','.','.','.','.','.'},
                      {'.','.','.','.','.','.','.','.','.','.'},
                      {'.','.','.','.','.','.','.','.','.','.'},
                      {'.','.','.','.','.','.','.','.','.','.'}};

  generate_random_walk(mat);
  print_array(mat);

}

void generate_random_walk(char mat[10][10])
{
  int direc, x = 0, y = 0;
  srand((unsigned) time(NULL));
  mat[x][y] = 'A';

  while (1) {
    if (mat[x][y] == 'Z') break;

    if      (x-1 >= 0 && mat[x-1][y] == '.') ;
    else if (x+1 <= 9 && mat[x+1][y] == '.') ;
    else if (y-1 >= 0 && mat[x][y-1] == '.') ;
    else if (y+1 <= 9 && mat[x][y+1] == '.') ;
    else break;

    Select: direc = rand() % DIREC;

    if      (direc == 0 && x-1 >= 0 && mat[x-1][y] == '.') { mat[x-1][y] = mat[x][y] + 1; x -= 1; }
    else if (direc == 1 && x+1 <= 9 && mat[x+1][y] == '.') { mat[x+1][y] = mat[x][y] + 1; x += 1; }
    else if (direc == 2 && y-1 >= 0 && mat[x][y-1] == '.') { mat[x][y-1] = mat[x][y] + 1; y -= 1; }
    else if (direc == 3 && y+1 <= 9 && mat[x][y+1] == '.') { mat[x][y+1] = mat[x][y] + 1; y += 1; }
    else    goto Select;
  }
}

void print_array(char mat[10][10])
{
  for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++) printf("%c ", mat[i][j]);
    printf("\n");
  }
}
