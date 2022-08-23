#include <stdio.h>

int main() {

    int entrada, N = 1;

    scanf("%d", &entrada);

    for (int i = 1; i <= entrada; ++i) {
        N *= i;
    }

    printf("%d\n", N);

    return 0;
}