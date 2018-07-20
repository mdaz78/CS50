#include <stdio.h>
#include <cs50.h>

int square(int n);

int main(void) 
{
  int x = get_int("x: ");
  printf("%i\n", square(n));
}

int square(int n) 
{
  return n * n;
}
