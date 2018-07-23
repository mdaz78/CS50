/*
 * URL for the pset -> https://docs.cs50.net/2018/x/psets/1/mario/more/mario.html
 *
*/

#include <cs50.h>
#include <stdio.h>

int main(void) 
{
  int height;
  do 
  {
    height = get_int("Height: ");
  }
  while(height < 0 || height > 23);

  // print rows
  for(int i = 1; i <= height; i++)
  {
    // print spaces
    for (int j = 0; j < height - i; j++)
    {
      printf(" ");
    }

    // print ladder
    for (int k = 0; k < i; k++) 
    {
      printf("#");
    }
    
    // print spaces
    printf("  ");
    
    // print ladder
    for (int l = 0; l < i; l++)
    {
      printf("#");
    }
    printf("\n");
  }
}
