#include <stdio.h>


int main() {
  int n, x, y;
  scanf("%d %d %d", &n, &x, &y);
  int matriz[n][n];

  // POPULAR MATRIZ
  int i,j;
  for(i=0; i<n; i++) {
    for(j=0; j<n; j++) {
      if(i%2==0||j%2==0) {
        matriz[i][j] = x;
      } 
      else if(j<0&&j<n-1){
        matriz[i][j] = y;
      }
      else {
        matriz[i][j] = y;
      }
      // if(i%2!=0&&j%2!=0) {
      //   matriz[i][j] = y;
      // }
    }
  }

  // IMPRIMIR MATRIZ
  for(i=0; i<n; i++) {
    for(j=0; j<n; j++) {
      printf("%d ",matriz[i][j]);
    }
    printf("\n");
  }
  return 0;
}