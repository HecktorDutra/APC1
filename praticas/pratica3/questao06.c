#include <stdio.h>

int main() {  
  int numero;

  printf("Entre com o numero: ");
  int deu_certo = scanf("%i", &numero);
  int numero_valido = numero > 0 && numero < 101;

  if(deu_certo && numero_valido) {
    for (int i=1; i<=100; i++) {
     if (i % numero == 0) {
       printf("%i, ", i);
     }
    }
    printf("\n");
  } else {
    printf("Numero invalido. Tente novamente!\n");
  }
  
  return 0;
}