#include <stdio.h>

int fibonacci (int n);

int main() {
  int qtdNum, i; 

  scanf("%i", &qtdNum);
  for (i=-1; i<qtdNum; i++){
    printf("%d ",fibonacci(i+1));
  }
  

  return 0;
}

int fibonacci(int num) {
    if (num == 0){
        return 0;
    }
    else if (num == 1){
        return 1;
    }
    else {
        return (fibonacci (num - 1)+ fibonacci (num - 2));
    }
}
