#include <stdio.h>

int ParesImparesPositivosENegativos() {

    int pares = 0, impares = 0, positivos = 0, negativos = 0, entrada;

    for (int i = 0; i < 5; i++){
        scanf("%d", &entrada);

        if (entrada % 2 == 0)
            pares++;
        else
            impares++;

        if (entrada > 0)
            positivos++;
        else if (entrada < 0)
            negativos++;
    }

    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);

    return 0;
}