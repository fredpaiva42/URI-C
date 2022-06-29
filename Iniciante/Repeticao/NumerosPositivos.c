#include <stdio.h>

int NumerosPositivos() {

    int positivos = 0;
    double entrada;

    for (int i = 0; i < 6; i++){
        scanf("%lf", &entrada);
        if (entrada >= 0)
            positivos += 1;
    }

    printf("%d valores positivos\n", positivos);

    return 0;
}