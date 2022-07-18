#include <stdio.h>

int SequenciaIJ4() {

    double j = 1;

    for (double i = 0; i <= 2; i += 0.2){
        for (int contador = 0; contador < 3; contador++){
            printf("I=%g J=%g\n", i, j++);
        }
        j -= 2.8;
    }

    return 0;
}