#include <stdio.h>

void decimalToBinary(int number);

int main() {
  int cases;
  scanf("%d", &cases);
  int decimals[cases];
  for(int i=0; i<cases; i++) {
    scanf("%d", &decimals[i]);
  }

  for(int i=0; i<cases; i++) {
    decimalToBinary(decimals[i]);
    printf("\n");
  }

  return 0;
}

void decimalToBinary(int number) {
  if(number==0) {
    printf("0");
    return;
  }
  if(number==1) {
    printf("1");
    return;
  }
  
  decimalToBinary(number/2);
  printf("%d", number%2);
}
