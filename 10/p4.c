#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

bool royal, straight, flush, four, three;
int pairs, hand[NUM_CARDS][2];

void read_cards(void);
void analyze_hand(void);
void print_result(void);

int main(void)
{
  int num_in_rank[NUM_RANKS];
  int num_in_suit[NUM_SUITS];

  for ( ; ; ) {
    read_cards();
    analyze_hand();
    print_result();
  }
}


void read_cards(void)
{
  char ch, rank_ch, suit_ch;
  int rank, suit;
  bool bad_card;
  int cards_read = 0;

  for (int i = 0; i < NUM_CARDS; i++) 
    for (int line = 0; line < 2; line++)
      hand[i][line] = 0;
  
  while (cards_read < NUM_CARDS) {
    bad_card = false;
    printf("Enter a card: ");
    
    rank_ch = getchar();
    switch (toupper(rank_ch)) {
      case '0': exit(EXIT_SUCCESS);
      case '2': rank = 0;  break;
      case '3': rank = 1;  break;
      case '4': rank = 2;  break;
      case '5': rank = 3;  break; 
      case '6': rank = 4;  break;
      case '7': rank = 5;  break;
      case '8': rank = 6;  break;
      case '9': rank = 7;  break;
      case 'T': rank = 8;  break;
      case 'J': rank = 9;  break;
      case 'Q': rank = 10; break;
      case 'K': rank = 11; break;
      case 'A': rank = 12; break;
      default:  bad_card = true;
    }

    suit_ch = getchar();
    switch (toupper(suit_ch)) {
      case 'C': suit = 0; break; 
      case 'D': suit = 1; break;
      case 'H': suit = 2; break;
      case 'S': suit = 3; break;
      default:  bad_card = true;
    }

    while ((ch = getchar()) != '\n')
      if (ch != ' ') bad_card = true;

    if (bad_card) printf("Bad card; ignored.\n");
    
    for (int i = 0; i < cards_read; i++) 
      if (rank == hand[i][0] && suit == hand[i][1]) {
	printf("Duplicate card; ignored.\n");
        goto Again;
      }

    if (!bad_card) {
      hand[cards_read][0] = rank;
      hand[cards_read][1] = suit;
      cards_read++;

    Again: continue;
    }
  }
}

void analyze_hand(void)
{
  int num_consec = 0;

  royal = false;
  straight = false;
  flush = false;
  four = false;
  three = false;
  pairs = 0;

  for (int i = 1; i < NUM_CARDS; i++) 
    if (hand[i-1][1] == hand[i][1]) {
      if (i == 4) flush = true;
    }
    else break;

  int i, max = hand[0][0], min = hand[0][0];
  for (i = 1; i < NUM_CARDS; i++) {
    if (hand[i-1][0] == hand[i][0]) break;
    else if (hand[i][0] > max) max = hand[i][0];
    else if (hand[i][0] < min) min = hand[i][0];
    if (i == 4 && max-min == 4) {
      straight = true;
      if (max == 12) royal = true;
      return;
    }
  }

  int count;
  for (int i = 0; i < NUM_CARDS; i++) {
    count = 1;
    for (int j = 0; j < NUM_CARDS; j++)
      if (i != j && hand[i][0] == hand[j][0]) count += 1;
    switch (count) {
      case 4: four = true; break;
      case 3: three = true; break;
      case 2: pairs++; break;
      default: break;
    }
  }
}

void print_result(void)
{
  if (royal && flush)         printf("Royal flush!!!!!");
  else if (straight && flush) printf("Straight flush!!!");
  else if (four)              printf("Four of a kind.");
  else if (three && pairs)    printf("Full house.");
  else if (flush)             printf("Flush.");
  else if (straight)          printf("Straight.");
  else if (three)             printf("Three of a kind.");
  else if (pairs == 2)        printf("Two pairs.");
  else if (pairs == 1)        printf("Pair.");
  else                        printf("High card.");

  printf("\n\n");
}
