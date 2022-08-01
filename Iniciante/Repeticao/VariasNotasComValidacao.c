#include <stdio.h>

int VariasNotasComValidacao() {

    double notas, media = 0;
    int querContinuar = 1, contador = 0;

    while (querContinuar != 2){

        switch(querContinuar){
            case 1:
                contador = 0;
                media = 0;
                while (contador != 2){
                    scanf("%lf", &notas);

                    int dentroDoIntervalo = notas >= 0 && notas <= 10;

                    if (dentroDoIntervalo){
                        contador++;
                        media += notas;
                    }else {
                        printf("nota invalida\n");
                    }
                }
                printf("media = %.2f\n", (media/2));
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &querContinuar);
                break;
            case 2:
                querContinuar = 2;
                break;
            default:
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &querContinuar);
                break;
        }
    }

    return 0;
}