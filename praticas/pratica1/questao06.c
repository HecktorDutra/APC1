/*6. Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).*/
#include <stdio.h>
#include <math.h>

int main() {
int a;
int b;
int c;

printf("Digite o A: ");
a = scanf("%i", &a);

printf("Digite o B: ");
b = scanf("%i", &b);

printf("Digite o C: ");
c = scanf("%i", &c);

  
double bhaskara1 = -b + sqrt(b * b - 4 * a * c) / 2 * a;
double bhaskara2 = -b - sqrt(b * b - 4 * a * c) / 2 * a;

printf("O resultado é: %f\n", bhaskara1);
printf("O resultado é: %f\n", bhaskara2);
  
return 0;
}