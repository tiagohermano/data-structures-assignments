#include <stdio.h>

void imprimirNumerosNaturais(int qtdNum, int ultNum);

int main() {
  int qtdNum;
  int ultNum = 1;

  scanf("%i", &qtdNum);

  imprimirNumerosNaturais(qtdNum, ultNum);
  return 0;
}

void imprimirNumerosNaturais(int qtdNum, int ultNum) {
  if(ultNum<=qtdNum) {
    printf("%i ", ultNum);
    return imprimirNumerosNaturais(qtdNum, ultNum + 1);
  }
  return;
}