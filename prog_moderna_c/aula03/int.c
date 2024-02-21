#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
  int i = INT_MAX; // numero maximo para um inteiro

  printf("O tamanho de i (int): %zu bytes / %zu bits\n", sizeof i, sizeof i * 8);
  printf("Valor de i: %d\n", i);

  return 0;
}
