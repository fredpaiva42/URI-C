#include <stdio.h>

int Intervalo2() {

    int quantidade, dentro = 0, fora = 0, entrada;

    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++) {
        scanf("%d", &entrada);

        if (entrada >= 10 &&  entrada <= 20)
            dentro++;
        else
            fora++;
    }

    printf("%d in\n", dentro);
    printf("%d out\n", fora);

    return 0;
}