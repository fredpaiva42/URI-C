#include <stdio.h>

int MaiorEPosicao() {

    int entrada, maior = 0, posicao = 0;

    for (int i = 1; i <= 100; i++){
        scanf("%d", &entrada);

        if (entrada > maior){
            maior = entrada;
            posicao = i;
        }
    }

    printf("%d\n", maior);
    printf("%d\n", posicao);

    return 0;
}