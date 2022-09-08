#include <stdio.h>

int NumeroPerfeito(void) {
    int casos_teste, numero;
    scanf("%d", &casos_teste);

    for (int i = 0; i < casos_teste; ++i) {
        int soma = 0;
        scanf("%d", &numero);

        for (int j = 1; j < numero; ++j) {
            if (numero % j == 0)
                soma += j;
        }

        if (soma == numero)
            printf("%d eh perfeito\n", numero);
        else
            printf("%d nao eh perfeito\n", numero);
    }
    return 0;
}