#include <stdio.h>

int getDataVariblePrints(void) {
  printf("\n--------------------------------- \n \n");
  printf("DATA TYPES: \n || INT || STORES WHOLE NUMBERS, NO DECIMALS ||\n || FLOAT || STORES FRACTIONAL NUMBERS, CONTAINING ONE OR MORE DECIMALS. SUFFICIENT FOR STORING 7 DECIMAL DIGITS ||\n || DOUBLE || STORES FRACTIONAL NUMBERS, CONTAINING ONE OR MORE DECIMALS. SUFFICIENT FOR STORING 15 DECIMAL DIGITS ||\n || CHAR || STORES A SINGLE CHARACTER/LETTER/NUMBER, OR ASCII VALUES || \n");
  printf("FORMAT SPECIFIERS: \n || %^d || INT || \n || %^f || FLOAT ||\n || %^lf || DOUBLE ||\n || %^c || CHAR || \n || %^s || STRING || \n ");
  printf("\n--------------------------------- \n \n");
}

int main(void) {
  int bootCode = 16309;
  char bootLetter = 'R';

  getDataVariblePrints();
  
  printf("\nX1 BOOT CODE [%d]\n", bootCode);
  printf("X1 BOOT LETTER [%c]\n", bootLetter);

  return 0;
}