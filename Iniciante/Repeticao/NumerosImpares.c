#include <stdio.h>

int NumerosImpares() {

    int entrada;

    scanf("%d", &entrada);

    for (int i = 1; i <= entrada; i++){
        if (i % 2 != 0)
            printf("%d\n", i);
    }

    return 0;
}