/*10. Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).*/
#include <stdio.h>

int main() {
int numero;

  printf("Digite um numero: \n");
  scanf("%i", &numero);

  int milhar = numero / 1000;
  int centena = (numero % 1000) / 100;
  int dezena = (numero % 100) / 10;
  int unidade = (numero % 10);

  printf("%i Milhares %i Centenas %i Dezenas %i Unidades\n", milhar, centena, dezena, unidade);
  
return 0;
} 