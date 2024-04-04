/*10. Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).*/
#include <stdio.h>

int main() {
int numero;

  printf("Digite um numero: \n");
  scanf("%i", &numero);

  int milhar = numero / 1000;
  int centena = (numero % 1000) / 100;
  int dezena = (numero % 1000) / 100;
  int unidade = (numero % 1000) % 100;

  printf("%i Unidades %i Dezenas %i Centenas %i Milhares\n", milhar, centena, dezena, unidade);
  
  
return 0;
}