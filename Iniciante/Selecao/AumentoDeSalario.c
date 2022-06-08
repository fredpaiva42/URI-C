#include <stdio.h>

int AumentoDeSalario() {

    double salario, reajuste;
    int percentual;

    scanf("%lf", &salario);

    if (salario <= 400.00){
        reajuste = salario * 0.15;
        percentual = 15;
        salario += reajuste;
    }else if (salario <= 800.00){
        reajuste = salario * 0.12;
        percentual = 12;
        salario += reajuste;
    }else if(salario <= 1200.00){
        reajuste = salario * 0.10;
        percentual = 10;
        salario += reajuste;
    }else if(salario <= 2000.00){
        reajuste = salario * 0.07;
        percentual = 7;
        salario += reajuste;
    }else{
        reajuste = salario * 0.04;
        percentual = 4;
        salario += reajuste;
    }

    printf("Novo salario: %.2lf\n", salario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %d %\n", percentual);

    return 0;
}