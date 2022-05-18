#include <stdio.h>

int SalariocomBonus() {

    char nome[15];
    double total_vendas, salario_fixo, total;

    scanf("%s", nome);
    scanf("%lf", &salario_fixo);
    scanf("%lf", &total_vendas);


    total = (total_vendas * 0.15) + salario_fixo;

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}