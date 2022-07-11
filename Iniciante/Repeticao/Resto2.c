#include <stdio.h>

int Resto2() {

    int entrada;

    scanf("%d", &entrada);

    for (int i = 1; i < 10000; i++){
        if (i % entrada == 2)
            printf("%d\n", i);
    }

    return 0;
}