#include <stdio.h>

int PUM() {

    int qtdLinhas;

    scanf("%d", &qtdLinhas);

    for (int j = 1; j <= (qtdLinhas * 4); j += 4){
        printf("%d %d %d PUM\n", j, j+1, j+2);
    }

    return 0;
}