#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

/*
 operador é um simbolo que faz alguma operação qualquer
 = atribuicao
 + - unarios -> operador unario só precisa de um argumento
 + - binarios (adicao e subtracao)
 / (multiplicacao e divisao)
 % (resto da divisao)
 ++ (incremento)
 -- (decremento)
*/

int main(void) {
  int a;

  a = 18;
  printf("%d\n", a--);

  printf("%d\n", a);


  return 0;
}
