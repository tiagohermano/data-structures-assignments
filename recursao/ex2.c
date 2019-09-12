#include <stdio.h>

void imprimirFibonacci(int qtdNum, int indiceAtual, int ultNum, int penultNum);

int main() {
  int qtdNum, ultNum, penultNum;
  int indiceAtual = 0;

  return 0;
}

void imprimirFibonacci(int qtdNum, int indiceAtual,  int ultNum, int penultNum) {
  if(indiceAtual<=qtdNum) {
    printf("%i", ultNum+penultNum);
    imprimirFibonacci(qtdNum,indiceAtual)
  }
}