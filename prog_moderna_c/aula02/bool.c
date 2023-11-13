#include <stdio.h>
#include <stdbool.h>

int main(void) {
  bool b;

  printf("O tamanho de b (bool) é: %lu byte\n", sizeof b);

  b = false;
  printf("O valor inteiro de b é %i\n", b);
  // 0 é falso
  // 1 é verdadeiro
}
