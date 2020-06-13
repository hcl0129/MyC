#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DICE 6

int roll_dice(int count);
int games();

int main(void)
{
  char ch;
  int state, a[2] = {0, 0};

  Game:{
  state = games();
  if (state == 1) a[0] += 1;
  else a[1] += 1; 
  }

  while (1) {
    printf("Play again? ");
    scanf("%c", &ch); printf("\n");
    if (ch == 'y' || ch == 'Y') {
      while(ch != '\n') scanf("%c", &ch);
      goto Game;
    }
    else break;
  }

  printf("Wins: %d  Losses: %d\n", a[0], a[1]);

}

int roll_dice(int count)
{
  int dice1, dice2;
  srand((unsigned) time(NULL) + count);
  dice1 = 1 + rand() % DICE;
  dice2 = 1 + rand() % DICE;
  return dice1 + dice2;
}

int games()
{
  int count = 0, res, state = 0, point;
  while (1) {
    res = roll_dice(count);
    printf("You rolled: %d\n", res);

    if (count++ == 0) {
      switch (res) {
        case 7 : { state =  1; break; }
        case 11: { state =  1; break; }
        case 2 : { state = -1; break; }
        case 3 : { state = -1; break; }
        case 12: { state = -1; break; }
        default: { point = res; printf("Your point is %d\n", point); break; }
      }
    }
    else if (point == res) state = 1;
    else if (res == 7) state = -1;
    else state = 0;

    //printf("%d\n", state);
    if (state == -1) {
      printf("You lose!\n\n");
      break;
    }
    else if (state == 1) {
      printf("You win!\n\n");
      break;
    }
  }
  return state;
}
