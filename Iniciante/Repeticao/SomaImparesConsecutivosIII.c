#include <stdio.h>

int SomaImparesConsecutivosIII(void){
    int qtd_casos_teste;

    scanf("%d", &qtd_casos_teste);

    for (int i = 0; i < qtd_casos_teste; i++) {
        int inicio, qtd_impares, soma = 0;
        scanf("%d %d", &inicio, &qtd_impares);
        for (int j = 0; j < (qtd_impares * 2); j++) {
            if(inicio % 2 != 0){
                soma += inicio;
            }
            inicio++;
        }
        printf("%d\n", soma);
    }

    return 0;
}