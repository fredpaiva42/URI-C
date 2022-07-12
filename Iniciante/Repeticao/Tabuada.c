#include <stdio.h>

int Tabuada() {

    int entrada;

    scanf("%d", &entrada);

    for (int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", i, entrada, i * entrada);
    }

    return 0;
}