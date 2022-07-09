#include <stdio.h>

int QuadradoDePares() {

    int entrada;

    scanf("%d", &entrada);

    for (int i = 0; i <= entrada; i += 2){
        if (i != 0){
            printf("%d^2 = %d\n", i, i * i);
        }
    }

    return 0;
}