#include <stdio.h>

int NotasEMoedas() {

    int nota,moeda, qtd_100, qtd_50, qtd_20, qtd_10, qtd_5,qtd_2,qtd_1, qtd050, qtd025, qtd010, qtd005, qtd001;
    double valor;
    scanf("%lf", &valor);

    nota = (int) valor;
    qtd_100 = nota / 100;
    nota = nota % 100;
    qtd_50 = nota / 50;
    nota = nota % 50;
    qtd_20 = nota / 20;
    nota = nota % 20;
    qtd_10 = nota / 10;
    nota = nota % 10;
    qtd_5 = nota / 5;
    nota = nota % 5;
    qtd_2 = nota / 2;
    nota = nota % 2;
    qtd_1 = nota;
    moeda = valor * 100;
    moeda = (int) moeda;
    moeda = moeda % 100;
    qtd050 = moeda / 50;
    moeda = moeda % 50;
    qtd025 = moeda / 25;
    moeda = moeda % 25;
    qtd010 = moeda / 10;
    moeda = moeda % 10;
    qtd005 = moeda / 5;
    qtd001 = moeda % 5;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",qtd_100);
    printf("%d nota(s) de R$ 50.00\n",qtd_50);
    printf("%d nota(s) de R$ 20.00\n",qtd_20);
    printf("%d nota(s) de R$ 10.00\n",qtd_10);
    printf("%d nota(s) de R$ 5.00\n",qtd_5);
    printf("%d nota(s) de R$ 2.00\n",qtd_2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",qtd_1);
    printf("%d moeda(s) de R$ 0.50\n",qtd050);
    printf("%d moeda(s) de R$ 0.25\n",qtd025);
    printf("%d moeda(s) de R$ 0.10\n",qtd010);
    printf("%d moeda(s) de R$ 0.05\n",qtd005);
    printf("%d moeda(s) de R$ 0.01\n",qtd001);


    return 0;
}