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
  char ch, pop_ch;
  printf("Enter parentheses and/or braces: ");
  ch = getchar();

  while (ch != '\n') {
    if (ch == '(' || ch == '{') push(ch);
    else if (ch == '}' || ch == ')') {
      pop_ch = pop();
      if (pop_ch == '(' && ch == ')') ;
      else if (pop_ch == '{' && ch == '}') ;
      else { printf("ProgramError!\n"); exit(0); } 
    }
    else { printf("ValueError!\n"); exit(0); }
 
    ch = getchar();
  }
  
  if (is_empty()) printf("Properly!\n");
  else stack_underflow();


}
