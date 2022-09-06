#include <stdio.h>

int SomaParesConsecutivos(void){
    int numero, soma =0;
    scanf("%d", &numero);

    while (numero){
        for (int i = 1; i <= 10; i++) {
            if(numero % 2 == 0)
                soma += numero;
            numero++;
        }
        printf("%d\n", soma);
        scanf("%d", &numero);
        soma = 0;
    }

    return 0;
}