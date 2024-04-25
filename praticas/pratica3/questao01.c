#include <stdio.h>
int main() {

  int numero;
  printf("Entre com o numero: \n");
  int deu_certo = scanf("%i", &numero);

  if (deu_certo) {
    int resto = numero % 2 == 0;
    if (resto) {
      printf("O numero %i é par \n", numero);
    } else {
      printf("O numero %i é impar \n", numero);
    }
  } else {
    printf("Numero invalido, tente novamente \n");
  }
  return 0;
}