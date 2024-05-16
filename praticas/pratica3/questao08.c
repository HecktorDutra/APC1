#include <stdio.h>

int main() {
  int numero;
  
  printf("Entre com o numero: ");
  int deu_certo = scanf("%i", &numero);
  
  if (deu_certo && numero >= 0) {
    long int fatorial = 1;
    printf("%i! = ", numero);
    
  for (int i = numero; i >1; i--){
    fatorial = fatorial * i;
    printf("%i x ", i);
    }

    printf("1 = %li\n", fatorial);
  } else {
    printf("Numero invalido. Tente novamente\n");
    }
  return 0;
}