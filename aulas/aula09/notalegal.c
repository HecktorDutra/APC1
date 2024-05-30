#include <stdio.h>

int main() {
enum unidade_e { //agrupa constantes
  unidade,
  caixa,
  peso,
  lata,
};
  
  struct produto_t { // agrupa variaveis
    char nome[31];
    int quantidade;
    int unidade; // 0 - unidade , 1 - caixa, 2 - peso, 3 - lata
    float preco;
    float valor;
  };

  float total;

  struct produto_t produto[5];

  for (int i = 0; i < 5; i++) {
    printf("Entre com o nome do produto: ");
    int deu_certo = scanf("%s", produto[i].nome);

    printf("Entre com a quantidade do produto: ");
    deu_certo = scanf("%i", &produto[i].quantidade);

    printf("Entre com a unidade do produto\n");
    printf("0 - unidade\n1 - caixa\n2 - peso\n3 - lata\n");
    deu_certo = scanf("%i", &produto[i].unidade);

    printf("Entre com o preço do produto: ");
    deu_certo = scanf("%f", &produto[i].preco);

    produto[i].valor = produto[i].preco * produto[i].quantidade;
    total = total + produto[i].valor;
  }

  printf("----------------------------------\n");
  printf("\n            NOTA LEGAL\n");
  printf("----------------------------------\n");
  printf("Item          Qtd     Preço    Valor\n");
  for (int i = 0; i < 5; i++) {
    printf("%-13s %03i", produto[i].nome, produto[i].quantidade);
    switch (produto[i].unidade) {
    case unidade:4
      printf(" UN ");
      break;
    case caixa:
      printf(" CX ");
      break;
    case peso:
      printf(" KG ");
      break;
    case lata:
      printf(" LT ");
      break;
    }
    printf("%5.2f%10.2f\n", produto[i].preco, produto[i].valor);
  }
  printf("Total....................... %8.2f\n", total);

      return 0;
}