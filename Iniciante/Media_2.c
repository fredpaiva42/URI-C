#include <stdio.h>

int Media_2() {
    double nota1, nota2, nota3, media;

    scanf("%lf", &nota1);
    scanf("%lf", &nota2);
    scanf("%lf", &nota3);

    media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5))/10;

    printf("MEDIA = %.1lf\n", media);

    return 0;
}