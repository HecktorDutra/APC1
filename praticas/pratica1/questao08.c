/*8. Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).*/
#include <stdio.h>
int main() {

int segundos;
  
printf("Digite o tempo em segundos: \n");
scanf("%i", &segundos);

int horas = segundos / 3600;
int resto = segundos % 3600;
int minutos = resto / 60;
resto = resto % 60;

printf("O tempo é de %i horas %i minutos %i segundos\n", horas, minutos, resto);

  
return 0;
}