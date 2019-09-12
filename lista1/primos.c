#include <stdio.h>

int main() {
  int qtdNum;

  scanf("%i\n", &qtdNum);
  int arrNum[qtdNum];

  int i;
  for(i=0; i<qtdNum-1; i++) {
    scanf("%i\n", &arrNum[i]);
  }

  int j;
  for(j=0; j<qtdNum; j++) {
    if(arrNum[j] < 4) {
      printf("primo\n");
    } else if(arrNum[j]%2 != 0 && arrNum[j]%3 != 0) {
      printf("primo\n");
    } else {
      printf("composto\n");
    }
  }

  return 0;
}