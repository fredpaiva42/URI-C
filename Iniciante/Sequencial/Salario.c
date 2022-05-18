#include <stdio.h>

int Salario() {

    int id, qtd_horas;
    float valor_hora, salario;

    scanf("%d", &id);
    scanf("%d", &qtd_horas);
    scanf("%f", &valor_hora);

    salario = qtd_horas * valor_hora;

    printf("NUMBER = %d\n", id);
    printf("SALARY = U$ %.2f\n", salario);

    return 0;
}