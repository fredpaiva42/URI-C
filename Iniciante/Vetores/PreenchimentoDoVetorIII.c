# include <stdio.h>

int PreenchimentoDoVetorIII(void){
    double entrada;
    double vetor[100];
    scanf("%lf", &entrada);

    for (int i = 0; i < 100; ++i) {
        vetor[i] = entrada;
        entrada = entrada / 2;

        printf("N[%d] = %.4lf\n", i, vetor[i]);
    }

    return 0;
}