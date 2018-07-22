#include <cs50.h>
#include <stdio.h>


int main(void)
{
  int n = get_integer("Number: ");
  for (int i = 0; i < n; i++) {
    printf("?");
  }

  printf("\n");
}
