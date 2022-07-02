#include <stdio.h>

int ParesEntreCincoNumeros() {

    int entrada, pares = 0;

    for (int i = 0; i < 5; i++){
        scanf("%d", &entrada);

        if (entrada % 2 == 0)
            pares ++;
    }

    printf("%d valores pares\n", pares);

    return 0;
}