#include <stdio.h>

int main() {

    int distancia_percorrida;
    double combustivel_gasto, consumo;

    scanf("%d", &distancia_percorrida);
    scanf("%lf", &combustivel_gasto);

    consumo = (distancia_percorrida * 1.0)/combustivel_gasto;

    printf("%.3lf km/l\n", consumo);

    return 0;
}