#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ALPHABET_SIZE 26

void encrypt(char *plaintext, int shift) {
  int i;
  for (i = 0; i < strlen(plaintext); i++) {
    if (plaintext[i] >= 'a' && plaintext[i] <= 'z') {
      plaintext[i] = ((plaintext[i] - 'a' + shift) % ALPHABET_SIZE) + 'a';
    } else if (plaintext[i] >= 'A' && plaintext[i] <= 'Z') {
      plaintext[i] = ((plaintext[i] - 'A' + shift) % ALPHABET_SIZE) + 'A';
    }
  }
}

void decrypt(char *ciphertext, int shift) {
  int i;
  for (i = 0; i < strlen(ciphertext); i++) {
    if (ciphertext[i] >= 'a' && ciphertext[i] <= 'z') {
      ciphertext[i] = ((ciphertext[i] - 'a' - shift + ALPHABET_SIZE) % ALPHABET_SIZE) + 'a';
    } else if (ciphertext[i] >= 'A' && ciphertext[i] <= 'Z') {
      ciphertext[i] = ((ciphertext[i] - 'A' - shift + ALPHABET_SIZE) % ALPHABET_SIZE) + 'A';
    }
  }
}

int main() {
    char plaintext[] = "uhwurFWI{s3Up15v1l0q5_3as3uw}";
    int shift = 3;
    decrypt(plaintext, shift);
    printf("Flag: %s\n", plaintext);
//   encrypt(plaintext, shift);
//   printf("Ciphertext: %s\n", plaintext);


  return 0;
}
