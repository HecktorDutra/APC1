#include <stdio.h>
#include <stdlib.h>

int main() {
  int opcao = 0;

  while (opcao != 4) {
    int deu_certo = system("clear");
    printf("\x1b[32mMEU JOGO\n\x1b[0m");
    printf("1 - Iniciar\n");
    printf("2 - Ver Ranking\n");
    printf("3 - Ajuda\n");
    printf("4 - Sair\n");
    printf("\x1b[31mEscolha uma opção => \x1b[0m");
    deu_certo = scanf("%i", &opcao);
    while (getchar() != '\n'); //limpar buffer do teclado
    
    if (!deu_certo) {
      opcao = 0;
    }

    switch (opcao) {
    case 1: {
      char nome[31];
      deu_certo = system("clear");
      printf("Qual o seu nome? \n");
      deu_certo = scanf("%[^\n]s", nome);
      while (getchar() != '\n'); //limpar buffer do teclado
      printf("Ola %s!\n", nome);
      printf("Pressione ENTER p/ iniciar...");
      getchar();
      break;
    }
    case 2: {
      deu_certo = system("clear");
      printf("\x1b[32mRanking - Top 5\x1b[0m\n");
      printf("1o lugar: Jose - 1000 pontos\n");
      printf("2o lugar: Maria - 800 pontos\n");
      printf("3o lugar: Bia - 700 pontos\n");
      printf("4o lugar: Pedro - 500 pontos\n");
      printf("5o lugar: Joao - 200 pontos\n");
      printf("Pressione ENTER p/ voltar...\n");
      getchar();
      break;
    }
    case 3:
      break;
    case 4:
      printf("Até Logo!\n");
      break;
    default:
      printf("Opção Invalida! Pressione ENTER p/ prosseguir...\n");
      getchar();
    }
  }
  return 0;
}