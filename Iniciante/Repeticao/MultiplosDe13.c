#include <stdio.h>

int main() {

    int inicio, final, somaDosNaoMultiplosDe13 = 0, temp = 0;

    scanf("%d %d", &inicio, &final);

    if (final < inicio){
        temp = inicio;
        inicio = final;
        final = temp;
    }

    for (inicio; inicio <= final; inicio++) {
        if (inicio % 13 != 0)
            somaDosNaoMultiplosDe13 += inicio;
    }

    printf("%d\n", somaDosNaoMultiplosDe13);

    return 0;
}