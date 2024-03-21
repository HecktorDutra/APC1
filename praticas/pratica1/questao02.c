/*
2. Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.
*/
#include <stdio.h>

int main() {
  float base = 0.0f;
  float altura = 0.0f;

  printf("Digite a Base:\n");
  scanf("%f", &base);

  printf("Digite a Altura:\n");
  scanf("%f", &altura);
  
  float area = base * altura / 2;
  
   printf("A area do triangulo é: %.2f\n", area);
  

return 0;
}