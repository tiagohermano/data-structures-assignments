#include <stdio.h>
 
int fack(int m, int n);
 
int main() { 
  int m, n;
  int res;
  scanf("%d %d", &m, &n);
  res = fack(m,n);
  printf("%d", res);

  return 0;
}
 
 
int fack(int m, int n) {
  if(m == 0){
    return (n + 1);
  }
  
  else if(n == 0 && m > 0){
    return fack(m-1,1);
  }
  
  else if(n > 0 && m > 0){
    return fack(m-1, fack(m,n -1));
  }
}