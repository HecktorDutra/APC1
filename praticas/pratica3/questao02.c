/*2. Faça um programa em C que calcule o valor do desconto sobre um valor bruto lido com base na escala: até de 100.00 aplica 1%; de 100.01 a 500.00 aplica 5%; acima de 500.00 aplica 10%. */
#include <stdio.h>

int main() {
  float valor;
  float desconto;
  
  printf("Entre com o valor: \n");
  int deu_certo = scanf("%f", &valor);

if (deu_certo && valor >= 0.0f) {
   if(valor <=100.f) {
    desconto = valor * 0.01f;
   } else if (valor <= 500) {
    desconto = valor * 0.05f;
   } else {
    desconto = valor * 0.1f;
   }
   printf("O desconto é de: %.2f\n", desconto);
} else {
  printf("Valor invalido. Tente novamente\n"); 
} 
  return 0;
}