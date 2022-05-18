#include <stdio.h>

int Cedulas() {

    int valor, qtd_100, qtd_50, qtd_20, qtd_10, qtd_5,qtd_2,qtd_1;

    scanf("%d", &valor);

    int total = valor;
    qtd_100 = valor / 100;
    valor = valor % 100;
    qtd_50 = valor / 50;
    valor = valor % 50;
    qtd_20 = valor / 20;
    valor = valor % 20;
    qtd_10 = valor / 10;
    valor = valor % 10;
    qtd_5 = valor / 5;
    valor = valor % 5;
    qtd_2 = valor / 2;
    valor = valor % 2;
    qtd_1 = valor;

    printf("%d\n", total);
    printf("%d nota(s) de R$ 100,00\n",qtd_100);
    printf("%d nota(s) de R$ 50,00\n",qtd_50);
    printf("%d nota(s) de R$ 20,00\n",qtd_20);
    printf("%d nota(s) de R$ 10,00\n",qtd_10);
    printf("%d nota(s) de R$ 5,00\n",qtd_5);
    printf("%d nota(s) de R$ 2,00\n",qtd_2);
    printf("%d nota(s) de R$ 1,00\n",qtd_1);

    return 0;
}