#include <stdio.h>

int CrescenteEDecrescente() {

    int x, y;

    scanf("%d %d", &x, &y);

    while (x!=y){
        x < y ? printf("Crescente\n") : printf("Decrescente\n");
        scanf("%d %d", &x, &y);
    }
    return 0;
}