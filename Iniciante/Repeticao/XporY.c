#include <stdio.h>

int XporY() {

    int qtd_casos, X, Y;
    double resultado;

    scanf("%d", &qtd_casos);

    while (qtd_casos > 0){
        scanf("%d %d", &X, &Y);

        if (X == 0)
            printf("0.0\n");
        else {
            if (Y == 0)
                printf("divisao impossivel\n");
            else{
                resultado = (double) X/Y;
                printf("%.1lf\n", resultado);
            }
        }
        qtd_casos--;
    }

    return 0;
}