#include <stdio.h>
#define TAM 4

int TrocaEmVetorI(void){
    int vetor[TAM];

    for (int i = 0; i < TAM; ++i) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < TAM; ++i) {
        for (int j = i + 1; j < TAM; ++j) {
            int temp = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = temp;
        }
        printf("N[%d] = %d\n",i ,vetor[i]);
    }

    return 0;
}