#include <stdio.h>

int main(void) {
  unsigned char c;

  printf("Valor de c: %lu bytes\n", sizeof c);
  c = -127;
  printf("Valor de c: %i\n", c);

  return 0;
}
