/*3. Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.*/
#include <stdio.h>

int main() {

  int dois = 2;
  int raio = 0.0;
  const float pi = 3.1416;

  printf("Digite o raio da pizza: \n");
  scanf("%i", &raio);

  int perimetro = dois * pi * raio;
  printf ("O Perimetro da Pizza é: %i\n ", perimetro);
 
  return 0;
}