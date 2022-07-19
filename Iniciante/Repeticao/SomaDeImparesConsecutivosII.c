#include <stdio.h>

int SomaDeImparesConsecutivosII() {

    int qtd_casos, x, y, maior, menor;

    scanf("%d", &qtd_casos);

    for (int i = 0; i < qtd_casos; i++) {
        int soma = 0;

        scanf("%d %d", &x, &y);

        if (x > y){
            maior = x;
            menor = y;
        }else {
            maior = y;
            menor = x;
        }

        for (menor++; menor < maior; menor++){
            if (menor % 2 != 0){
                soma += menor;
            }
        }

        printf("%d\n", soma);
    }

    return 0;
}