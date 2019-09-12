#include <stdio.h>

int main() {
  int biggestNumber;
  int n1; 
  int n2; 
  int operationResult;
  char operation;

  scanf("%i\n", &biggestNumber);
  scanf("%i %c %i", &n1, &operation, &n2);

  if(operation=='x') {
    if(n1*n2>biggestNumber) {
      printf("overflow");
    } else {
      printf("no overflow");
    }
  } else {
    if(n1+n2>biggestNumber) {
      printf("overflow");
    } else {
      printf("no overflow");
    }
  }

  return 0;
}