#include <stdio.h>

int main() {
  int numero;

  printf("Entre com o numero de 1 a 10: \n");
  int deu_certo = scanf("%i", &numero);

  if (deu_certo && numero > 0 && numero < 11) {
    printf("A tabuada de %i\n", numero);
    for (int i=1; i<=10; i++) {
      printf("%i x %i = %i\n", i, numero, i * numero);
    }
    printf("A tabuada invertida de %i\n", numero);
    for (int i=10; i>=1; i--) {
      printf("%i x %i = %i\n", i, numero, i * numero);
    }
    /*printf("1 x %i = %i\n,", numero, 1 * numero);
    printf("2 x %i = %i\n,", numero, 2 * numero);*/
  }
  return 0;
}