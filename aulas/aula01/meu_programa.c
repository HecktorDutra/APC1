#include <stdio.h>

int main() {
  float nota1 = 0.0;
  float nota2 = 0.0;

  printf("entre com a nota1: ");
  scanf("%f", &nota1);

  printf("entre com a nota2: ");
  scanf("%f", &nota2);

  float media = 0.4*nota1 + 0.6*nota2;

  printf("a média final é %.1f\n", media);

  if (media >=5.0) {
    printf("passei!!\n");
  } else {
    printf("vamos de p3\n");
  }
  
  return 0;

}