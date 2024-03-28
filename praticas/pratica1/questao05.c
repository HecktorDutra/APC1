/*5. Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).*/
#include <stdio.h>

int main() {
long int gb;

  printf("Digite o Valor de GB: \n");
  scanf("%li", &gb);

  long int resultado = gb * 1024 * 1024 * 1024;
  printf("Valor em bytes = %li", resultado);

return 0;
}