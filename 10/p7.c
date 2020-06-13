#include <stdio.h>

#define MAX_DIGITS 10

char digits[3][MAX_DIGITS*4];
const int segments[10][7] = {{1,1,1,1,1,1,0},
			     {0,1,1,0,0,0,0},		     
			     {1,1,0,1,1,0,1},
			     {1,1,1,1,0,0,1},
  			     {0,1,1,0,0,1,1},
			     {1,0,1,1,0,1,1},
			     {1,0,1,1,1,1,1},
			     {1,1,1,0,0,0,0},
		             {1,1,1,1,1,1,1},
		 	     {1,1,1,1,0,1,1}}; 

void clear_digits_array(void);
void process_digit(int, int);
void print_digits_array(void);

int main(void)
{
  char ch;
  int digit_list[MAX_DIGITS], digit, index = 0, position = 0;
  for (int i = 0; i < MAX_DIGITS; i++) digit_list[i] = -1;

  clear_digits_array();

  printf("Enter a number: ");
  scanf("%c", &ch);

  while (ch != '\n') {
    if (index >= MAX_DIGITS) ;
    else if (ch - '0' >= 0 && ch - '9' <= 0) {
      digit_list[index] = (int)(ch - '0');
      index += 1;
    }
    scanf("%c", &ch);
  }

  for (int i = 0; i < MAX_DIGITS; i++) {
    if (digit_list[i] == -1) break;
    digit = digit_list[i];
    position = i * 4;
    process_digit(digit, position);
  }

  print_digits_array();

}

void clear_digits_array(void)
{
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < MAX_DIGITS * 4; j++)
      digits[i][j] = ' ';
}

void process_digit(int digit, int position)
{
  int state;
  for (int i = 0; i < 7; i++) {
    state = segments[digit][i];
    if (state == 0) continue ;
    switch (i) {
      case 0: digits[0][position+1] = '_'; break;
      case 1: digits[1][position+2] = '|'; break;
      case 2: digits[2][position+2] = '|'; break;
      case 3: digits[2][position+1] = '_'; break;
      case 4: digits[2][position]   = '|'; break;
      case 5: digits[1][position]   = '|'; break;
      case 6: digits[1][position+1] = '_'; break;
    }
  } 
}

void print_digits_array(void)
{
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < MAX_DIGITS * 4; j++)
      printf("%c", digits[i][j]);
    printf("\n");
  }
  printf("\n");
}





