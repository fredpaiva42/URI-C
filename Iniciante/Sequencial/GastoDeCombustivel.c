#include <stdio.h>

#define CONSUMO 12

int GastoDeCombustivel() {

    int tempo, velocidade, distancia;
    double qtd_litros;

    scanf("%d", &tempo);
    scanf("%d", &velocidade);

    distancia = velocidade * tempo;

    qtd_litros = (1.0) * distancia / CONSUMO;

    printf("%.3lf\n", qtd_litros);

    return 0;
}