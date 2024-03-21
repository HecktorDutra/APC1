#include <stdio.h>

int main() {
  char nome[31];
  int quantidade;
  float valor;
  
  printf("Entre com o nome do produto:\n");
  int deu_certo = scanf("%[^\n]s", nome);

  printf("Entre com a quantidade:\n");
  deu_certo = scanf("%i", &quantidade);

  printf("Entre com o valor do produto:\n");
  deu_certo = scanf("%f", &valor);

  float total = quantidade * valor;
  
  printf("\x1b[32m-------------------------------\n");
  printf("      N O T A  L E G A L       \n");
  printf("-------------------------------\x1b[0m\n");
  printf("\x1b[31m""ITEM          QTD    VALOR\x1b[0m\n");
  printf("\x1b[33m%-13s %03i %8.2f\n", nome, quantidade, valor);
  printf("\x1b[35m\x1b[3mTotal         :R$ %8.2f \x1b[0m\n", total);
  
  return 0;
}

  
