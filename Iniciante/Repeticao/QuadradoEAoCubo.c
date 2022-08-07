#include <stdio.h>
#include <math.h>

int QuadradoEAoCubo() {

    int qtdLinhas;

    scanf("%d", &qtdLinhas);

    for (int i = 1; i <= qtdLinhas; ++i) {
        printf("%d %g %g\n", i, pow(i, 2), pow(i, 3));
    }

    return 0;
}