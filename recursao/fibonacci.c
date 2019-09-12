#include <stdio.h>

void imprimirFibonacci(int qtdNum, int indiceAtual, int ultNum, int penultNum);

int main() {
  int qtdNum; 
  int ultNum = 1; 
  int penultNum = 0;
  int indiceAtual = 0;

  scanf("%i", &qtdNum);
  imprimirFibonacci(qtdNum, indiceAtual, ultNum, penultNum);

  return 0;
}

void imprimirFibonacci(int qtdNum, int indiceAtual,  int ultNum, int penultNum) {
  if(indiceAtual<=qtdNum) {
    if(indiceAtual==0) {
      printf("%i ", indiceAtual);
      imprimirFibonacci(qtdNum,indiceAtual+1,penultNum,ultNum+penultNum);
    } else {
      printf("%i ", ultNum+penultNum);
      imprimirFibonacci(qtdNum,indiceAtual+1,penultNum,ultNum+penultNum);
    }
  }
}