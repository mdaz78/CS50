// url => https://docs.cs50.net/2018/x/psets/2/caesar/caesar.html
// formula for conversion c(i) = [p(i) + k] % 26

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
  // make sure it has exactly two arguments
  if (argc != 2)
  {
    printf("Error can't proceed\n");
    return 1;
  }
  string k = argv[1];
  int key = atoi(k);
  printf("%i", key);
  string plaintext = get_string("plaintext: ");

  // loop over each letter in plaintext and transform accordingly
  for (int i = 0, n = strlen(plaintext); i < n; i++)
  {
    if(isalpha(plaintext[i]))
    {
      printf("x");
    }
    else
    {
      printf("%c", plaintext[i]);
    }
  }
  printf("\n");

}


// get the value corresponding to the character
int alphabet_to_value(char c)
{
  switch(c)
  {
    case 'a': return 0;
    case 'b': return 1;
    case 'c': return 2;
    case 'd': return 3;
    case 'e': return 4;
    case 'f': return 5;
    case 'g': return 6;
    case 'h': return 7;
    case 'i': return 8;
    case 'j': return 9;
    case 'k': return 10;
    case 'l': return 11;
    case 'm': return 12;
    case 'n': return 13;
    case 'o': return 14;
    case 'p': return 15;
    case 'q': return 16;
    case 'r': return 17;
    case 's': return 18;
    case 't': return 19;
    case 'u': return 20;
    case 'v': return 21;
    case 'w': return 22;
    case 'x': return 23;
    case 'y': return 24;
    case 'z': return 25;
    default: return -1;
  }
}


