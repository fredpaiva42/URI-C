
#include <stdio.h>

int ValidacaoDeNota() {

    double notas, media = 0;
    int contador = 0;

    while (contador != 2){
        scanf("%lf", &notas);

        if (notas >= 0 && notas <= 10) {
            media += notas;
            contador++;
        }else
            printf("nota invalida\n");

    }

    printf("media = %.2lf\n", (media/2));

    return 0;
}