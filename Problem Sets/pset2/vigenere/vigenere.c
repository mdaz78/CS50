// url => https://docs.cs50.net/2018/x/psets/2/vigenere/vigenere.html

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void cipher(string plaintext, string key);
int get_value_for_alphabet(char alphabet);

int main(int argc, string argv[])
{
  // validate the input
  if (argc == 2) {
    string key = argv[1];
    for (int i = 0, n = strlen(key); i < n; i++) {
      if (!isalpha(key[i])) {
        printf("The key can not be non alphabetical characters\n");
        return 1;
      }
    }
    // if everything goes well ask for input
    string plaintext = get_string("plaintext: ");

    // call the cipher function with plaintext and key
    cipher(plaintext, key);

  } else {
    printf("The input should be exactly two\n");
    return 1;
  }
}

// cipher the input using the key
void cipher(string plaintext, string key)
{
  printf("ciphertext: ");
  int plaintext_value, index_of_key, length_of_key = strlen(key), ciphered_value, value_of_key;
  for (int i = 0, j = 0, n = strlen(plaintext); i < n; i++) {
    if (isalpha(plaintext[i]))
    {
      plaintext_value = get_value_for_alphabet(plaintext[i]);
      index_of_key = j % length_of_key;
      value_of_key = get_value_for_alphabet(key[index_of_key]);
      ciphered_value = (plaintext_value + value_of_key) % 26;
      j += 1;

      // print proper ciphered value
      if (isupper(plaintext[i])) {
        printf("%c", 65 + ciphered_value);
      } else {
        printf("%c", 97 + ciphered_value);
      }
    } 
    else 
    {
      printf("%c", plaintext[i]);
    }
  }
  printf("\n");
}

// get value corresponding to an alphabet
// a -> 0, b -> 1, ..., z -> 25
int get_value_for_alphabet(char alphabet)
{
  char c = tolower(alphabet);
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