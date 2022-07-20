#include <stdio.h>

int SequenciaDeNumerosESoma() {

    int m, n, maior, menor, soma = 0;

    scanf("%d %d", &m, &n);

    while (m > 0 && n > 0){
        soma = 0;

        if (m > n){
            maior = m;
            menor = n;
        }else {
            maior = n;
            menor = m;
        }

        for (menor; menor <= maior; menor++) {
            soma += menor;
            printf("%d ", menor);
        }

        printf("Sum=%d\n", soma);

        scanf("%d %d", &m, &n);
    }


    return 0;
}