#include <stdio.h>

int SeisNumerosImpares() {

    int entrada;

    scanf("%d", &entrada);

    for (int i = 1; i <= 12; i++){
        if (entrada % 2 != 0){
            printf("%d\n", entrada);
        }
        entrada ++;
    }
}