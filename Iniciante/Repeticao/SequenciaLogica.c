#include <stdio.h>
#include <math.h>

int SequenciaLogica() {

    int qtdLinhas;

    scanf("%d", &qtdLinhas);

    for (int i = 1; i <= qtdLinhas; ++i) {
        printf("%d %d %d\n", i, (int) pow(i, 2), (int) pow(i, 3));
        printf("%d %d %d\n", i, (int) pow(i, 2) + 1, (int) pow(i, 3) + 1);
    }

    return 0;
}