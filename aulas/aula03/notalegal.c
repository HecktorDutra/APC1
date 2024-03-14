#include <stdio.h>

int main() {
  printf("\x1b[32m-------------------------------\n");
  printf("      N O T A  L E G A L       \n");
  printf("-------------------------------\x1b[0m\n");
  printf("\x1b[31m""ITEM          QTD    VALOR\x1b[0m\n");
  printf("\x1b[33m %-13s %03i %8.2f\n","Banana nanica", 1, 15.00);
  printf("%-13s %03i %8.2f\n", "Maca fuji", 10, 50.00);
  printf("%-13s %03i %8.2f\n", "Uva globo", 5, 26.00);
  //  printf("Banana nanica      1      15.00\n");
  // printf("Maca fuji          10      50.00\n");
  // printf("Uva globo          5       26.00\n");
  printf("\x1b[0m""\x1b[30m--------------------------------\n \x1b[0m");
  printf("\x1b[35m\x1b[3mTotal.........:R$ %8.2f \x1b[0m\n", 91.00);
  return 0;
}