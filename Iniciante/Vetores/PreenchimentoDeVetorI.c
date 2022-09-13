#include <stdio.h>

int PreenchimentoDeVetorI(void){
    int vetor[10], numero;

    scanf("%d", &numero);

    for (int i = 0; i < 10; ++i) {
        vetor[i] = numero;
        printf("N[%d] = %d\n", i, vetor[i]);
        numero += numero;
    }
    
    return 0;
}