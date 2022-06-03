#include <stdio.h>


int Triangulo() {

    double A, B, C, area, perimetro;

    scanf("%lf %lf %lf", &A, &B, &C);

    if (A < (B + C) && B < (A + C) && C < (B + A)){
        perimetro = A + B + C;
        printf("Perimetro = %.1lf\n", perimetro);
    }else {
        area = ((A + B) * C)/2;
        printf("Area = %.1lf\n", area);
    }

    return 0;
}