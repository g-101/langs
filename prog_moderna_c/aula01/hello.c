#include <stdio.h> // Um cabeçalho é um arquivo que contém funções e comandos.

int main(void) {
  int ret = 0;
	ret = printf("papobinario.com.br\n"); //<stdio.h> contém a função printf, que usamos para mostrar a saida na tela.
  printf("retorno do printf: %d\n", ret);
  printf("%d - %d - %d - %d\n", ret, 100, 0xa, 'C');
    
  return 0; // por convenção o zero indica que o prog foi concluido com exito, diferente disso significa falha
}

