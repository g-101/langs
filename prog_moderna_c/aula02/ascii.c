#include <stdio.h>
// programa para localizar o valor ASCII de um caractere

int main() {
  printf("--X-- Descubra o valor de um caracter em ASCII --X--\n");
  unsigned char character;
  printf("Digite um character: ");
  scanf("%c", &character);
  printf("O valor do character %c em ASCII é %d\n", character, character
      );
  return 0;
}
