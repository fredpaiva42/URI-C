# include <stdio.h>
# include <stdlib.h>

int MenorEPosicao(void ){
    int qtd, menor, posicao;

    scanf("%d", &qtd);
    int vetor[qtd];

    for (int i = 0; i < qtd; ++i) {
        scanf("%d", &vetor[i]);
        menor = vetor[0];

        for (int j = 1; j < qtd; ++j) {
            if (vetor[j] < menor){
                menor = vetor[j];
                posicao = j;
            }
        }

    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);

    return 0;
}