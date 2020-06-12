#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 5

int contents[STACK_SIZE];
int top = 0;

void make_empty()
{
  top = 0;
}

bool is_empty()
{
  return top == 0;
}

bool is_full()
{
  return top == STACK_SIZE;
}

void stack_overflow()
{
  printf("Stack overflow!\n");
  exit(0);
}

void stack_underflow()
{
  printf("Stack underflow!\n");
  exit(0);
}


void push(char ch)
{
  if (is_full()) stack_overflow();
  else contents[top++] = ch;
}

char pop(void)
{
  if (is_empty()) stack_underflow();
  else return contents[--top];
}

int main(void)
{
  char ch;
  int n1, n2, num;

  printf("Enter an RPN expression: ");
  scanf(" %c", &ch);

  while (ch != '\n') {
    if (ch - '0' >= 0 && ch - '0' <= 9) push(ch - '0');
    else if (ch == '=') printf("Value of expression: %d\n", pop());
    else {
      n2 = pop(); 
      n1 = pop(); 
      switch (ch) {
        case '+': push(n1 + n2); break;
        case '-': push(n1 - n2); break;
        case '*': push(n1 * n2); break;
	case '/': push(n1 / n2); break;
      }
    }
    scanf(" %c", &ch);
  }

  if (top != 0) printf("Wrong expression!\n");
  return 0;
}



