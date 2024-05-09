#include <stdio.h>

int main() {
  int opcao;
 
  printf("MENU PRINCIPAL\n");
  printf("1 - Consultar Saldo\n");
  printf("2 - Fazer Recarga\n");
  printf("3 - Listar Recados\n");
  printf("4 - Ligações Feitas\n");
  printf("0 - Sair\n");
  printf("Escolha uma a Opção: \n");
  int deu_certo = scanf("%i", &opcao);

  switch(opcao) {
    case 1: printf("Seu saldo é R$00.00\n"); break;
    case 2: {
      float valor;
      printf("Entre com o Valor da Recarga\n");
    deu_certo = scanf("%f", &valor);
      printf("Pronto. Recarga Concluida");
      break;
    }
    case 3: printf("Você não tem Recados\n"); break;
    case 4: printf("61 99999-9999\n");
            printf("61 8888-8888\n");
            printf("61 7777-7777\n");
            break;
    case 0: printf("Até logo\n"); break;
    default: 
    printf("Numero Invalido!\n");
    }
  return 0;
}