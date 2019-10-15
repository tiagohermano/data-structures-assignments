#include <stdio.h>

int main() {
  int t, n;
  scanf("%d", &t);
  scanf("%d", &n);
  int vetor[n];
  
  int i;
  for(i=0; i<t; i++) {
    // SCAN DINAMICO DE VETOR INCORRETO/INCOMPLETO
    scanf("%d", &vetor[n]);

    // LOGICA
    int valorMax=0;
    int qtdValoresMax = 0;
    int i, j;
    for(i=0; i<n; i++) {
      for(j=0; j<n; i++) {
        if(vetor[n] + vetor[j] > valorMax) {
          valorMax = vetor[n] + vetor[n+1];
        }
      }
    }
    
    for(i=0; i<n; i++) {
      for(j=0; j<n; i++) {
        if(vetor[n] + vetor[j] == valorMax) {
          qtdValoresMax++;
        }
      }
    }
    printf("\n%d", qtdValoresMax);
  }

  return 0;
}