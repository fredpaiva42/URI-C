#include <stdio.h>

int SequenciaLogica2() {

    int x, y, contador = 0;

    scanf("%d %d", &x, &y);

    for (int i = 1; i <= y; i++){
        contador++;

        if (contador == x){
            printf("%d\n", i);
            contador = 0;
        }else
            printf("%d ", i);
    }

    return 0;
}