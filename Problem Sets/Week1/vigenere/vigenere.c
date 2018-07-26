// url => https://docs.cs50.net/2018/x/psets/2/vigenere/vigenere.html 

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

string cipher(string plaintext, string key);

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
  } else {
    printf("The input should be exactly two\n");
    return 1;
  }
}

// cipher the input using the key
string cipher(string plaintext, string key) 
{
}