#include <stdio.h>

int Multiplos() {

    int A, B, ehMultiplo;

    scanf("%d %d", &A, &B);

    if (A > B)
        ehMultiplo = A % B == 0;
    else
        ehMultiplo = B % A == 0;

    if(!ehMultiplo)
        printf("Nao sao Multiplos\n");
    else
        printf("Sao Multiplos\n");

    return 0;
}