/*9. Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.*/
#include <stdio.h>

int main() {
  int anos;
  int meses;
  int dias;
  
  printf("Informe sua idade\n" );
  printf("Em Anos: \n");
  scanf("%i", &anos);

  printf("Em Meses: \n");
  scanf("%i", &meses);

  printf("Em Dias: \n");
  scanf("%i", &dias);

  int total = anos*365 + meses * 30 + dias;
  printf("Você tem %i de vida", total);
  
  
return 0;
  }
