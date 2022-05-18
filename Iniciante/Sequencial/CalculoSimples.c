#include <stdio.h>

int CalculoSimples() {

    int id, qtd, i;
    double valor, total = 0.0;

    for(i = 0; i < 2; i++) {
        scanf("%d %d %lf", &id, &qtd, &valor);
        total += qtd * valor;
    }

    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}