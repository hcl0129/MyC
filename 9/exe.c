#include <stdio.h>

int check(int, int, int);
int gcd(int, int);
int day_of_year(int, int, int);
int f(int, int);
void fn(double x);
void pb(int);

int main(void)
{
  pb(6);
}

int check(int x, int y, int n)
{
  if (x >= 0 && x <= n-1 && y >= 0 && y <= n-1)
    return 0;
  return 1;
}

int gcd(int m, int n)
{
  if (n == 0) return m; 
  return gcd(n, m%n);
}


int day_of_year(int month, int day, int year)
{
  int sum;
  return 0;
}

int num_digit(int n)
{
  int count = 0;
  while (n != 0) {
    n /= 10;
    count += 1;
  }
  return count;
}

int num_digits(int n, int k) 
{
  int count = 0, digit;
  while (count < k) {
    digit = n % 10;
    n /= 10;
    count += 1;
  }
  return digit;
}

int f(int a, int b)
{
  return a + b; 
}

float compute_GPA(char grade[], int n)
{
  float sum = 0.0f;
  for (int i = 0; i < n; i++) {
    switch (grade[i]) {
      case 'A': { sum += 4; break; }
      case 'B': { sum += 3; break; }
      case 'C': { sum += 2; break; }
      case 'D': { sum += 1; break; }
      case 'F': { sum += 0; break; }
    }
  return sum / n;
  }
}

void pb(int n)
{
  if (n != 0) {
    pb(n / 2);
    putchar('0' + n % 2);
  }
}
