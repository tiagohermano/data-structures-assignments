#include <stdio.h>

int calcAnoHalley(int inputYear);

int main() {
  int inputYear;

  printf("Insira o ano: ");
  scanf("%i", &inputYear);
  if(inputYear > 0 && inputYear <= 10000) {
    printf("%i", calcAnoHalley(inputYear));
  } else {
    printf("Ano inválido");
  }

  return 0;
}

int calcAnoHalley(int inputYear) {
  int referenceYear = 1986;
  if(inputYear > referenceYear) {
    return inputYear - ((inputYear - referenceYear) % 76) + 76;
  } else {
    return inputYear + ((referenceYear - inputYear) % 76) + 76;
  }
}

