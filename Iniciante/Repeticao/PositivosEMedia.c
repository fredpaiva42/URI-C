#include <stdio.h>

int PositivosEMedia() {

    int positivos = 0;
    double media = 0, entrada;

    for (int i = 0; i < 6; ++i) {
        scanf("%lf", &entrada);

        if (entrada > 0){
            positivos++;
            media += entrada;
        }
    }

    printf("%d valores positivos\n", positivos);
    printf("%.1lf\n", (media/positivos));

    return 0;
}