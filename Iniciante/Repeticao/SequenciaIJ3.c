#include <stdio.h>

int SequenciaIJ3() {

    int j = 7;

    for (int i = 1; i <= 9; i+=2){
        for (int contador = 0; contador < 3; contador++){
            printf("I=%d J=%d\n", i, j--);
        }
        j += 5;
    }

    return 0;
}