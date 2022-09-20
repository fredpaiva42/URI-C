#include <stdio.h>
# define TAM 1000

int PreenchimentoDeVetorII(void){
    int input, vetor[TAM], contador = 0;
    scanf("%d", &input);

    for (int i = 0; i < TAM; ++i) {
        if (contador == input) contador = 0;

        vetor[i] = contador++;
        printf("N[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}