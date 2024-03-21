#include <stdio.h>

int main() {
  float nota1 = 0.0f;
  float nota2 = 0.0f;
  const float a = 0.4f;
  const float b = 0.6f;
  
  printf("Entre com a nota1: ");
  scanf("%f", &nota1);

  printf("Entre com a nota2: "); 
  scanf("%f", &nota2);

   float media_final = nota1 * a;
  float media_final2 = nota2 * b;
  printf("Nota 1: %.1f\n", media_final);
  printf("Nota 2: %.1f\n", media_final2);
  printf("Media Final: %.1f\n",media_final + media_final2);
  

  
  return 0;

}