#include <stdio.h>

int ImpostoDeRenda() {

    double salario, imposto = 0, tx8, tx18, tx28, isencao = 2000.00;

    scanf("%lf", &salario);


    if (salario <= 3000){
        tx8 = salario - isencao;
        imposto = tx8 * 0.08;
    } else if (salario <= 4500) {
        tx8 = 1000 * 0.08;
        tx18 = (salario - (isencao + 1000)) * 0.18;
        imposto = tx8 + tx18;
    }else {
        tx8 = 1000 * 0.08;
        tx18 = 1500 * 0.18;
        tx28 = (salario - (isencao + 2500)) * 0.28;
        imposto = tx8 + tx18 + tx28;
    }

    if (salario <= 2000)
        printf("Isento\n");
    else
        printf("R$ %.2lf\n", imposto);

    return 0;
}