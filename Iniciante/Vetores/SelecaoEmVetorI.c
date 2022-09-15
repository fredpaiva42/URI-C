# include <stdio.h>
#define TAM 100

int SelecaoEmVetorI(void){
    double vetor[TAM];

    for (int i = 0; i < TAM; ++i) {
        scanf("%lf", &vetor[i]);
    }

    for (int i = 0; i < TAM; ++i) {
        if (vetor[i] <= 10)
            printf("A[%d] = %.1f\n", i, vetor[i]);
    }
    return 0;
}