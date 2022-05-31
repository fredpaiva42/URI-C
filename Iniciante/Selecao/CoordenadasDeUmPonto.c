#include <stdio.h>

int CoordenadasDeUmPonto() {

    double x,y;
    int pertenceAoQ1, pertenceAoQ2, pertenceAoQ3, pertenceAoEixoX, perternceAoEixoY, pertenceAorigem;

    scanf("%lf %lf", &x, &y);

    pertenceAorigem = (x == 0 && y == 0);
    pertenceAoEixoX = (x != 0 && y == 0);
    perternceAoEixoY = (x == 0 && y != 0);
    pertenceAoQ1 = (x > 0 && y > 0);
    pertenceAoQ2 = (x < 0 && y > 0);
    pertenceAoQ3 = (x < 0 && y < 0);

    if (pertenceAorigem)
        printf("Origem\n");
    else if (pertenceAoEixoX)
        printf("Eixo X\n");
    else if (perternceAoEixoY)
        printf("Eixo Y\n");
    else if (pertenceAoQ1)
        printf("Q1\n");
    else if (pertenceAoQ2)
        printf("Q2\n");
    else if (pertenceAoQ3)
        printf("Q3\n");
    else
        printf("Q4\n");

    return 0;
}