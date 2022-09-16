#include <stdio.h>

int main(void) {
    int casos_teste, entrada;
    scanf("%d", &casos_teste);

    long long int fib[60];

    fib[0] = 0;
    fib[1] = 1;

    for (int j = 2; j < 60; ++j) {
        fib[j] = fib[j - 1] + fib[j - 2];
    }

    for (int i = 0; i < casos_teste; ++i) {
        scanf("%d", &entrada);
        printf("Fib(%d) = %lld\n", entrada, fib[entrada]);
    }

    return 0;
}


