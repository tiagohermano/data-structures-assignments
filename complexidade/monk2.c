#include <stdio.h>

int main(){

    int casos, i;

    int x=0;
    
        scanf("%d", &casos);

    int a[casos], b[casos], c[casos], k[casos];

            for(i=0; i< casos; i++){
                scanf("%d", &a[i]);
                scanf("%d", &b[i]);
                scanf("%d", &c[i]);
                scanf("%d", &k[i]);
            }

            for(i=0; i< casos; i++){
                while ((a[i] * x*x) + (b[i] * x) + c[i] < k[i] ){
                    x++;
                }
                    printf("\n%d", x);
                    x=0;
            }
}