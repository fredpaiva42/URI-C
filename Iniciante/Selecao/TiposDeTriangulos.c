#include <stdio.h>
#include <math.h>


int TiposDeTriangulos() {

    double A, B, C, x, y, z;

    scanf("%lf %lf %lf",&x, &y, &z);

    if (x > y && x > z){
        A = x;
        B = y;
        C = z;
    } else if (y > x && y > z){
        A = y;
        B = x;
        C = z;
    }else {
        A = z;
        B = x;
        C = y;
    }


    if (A >= (B + C))
        printf("NAO FORMA TRIANGULO\n");
    else{
        if (pow(A, 2) == (pow(B, 2) + pow(C, 2)))
            printf("TRIANGULO RETANGULO\n");
        if (pow(A, 2) > (pow(B, 2) + pow(C, 2)))
            printf("TRIANGULO OBTUSANGULO\n");
        if (pow(A, 2) < (pow(B, 2) + pow(C, 2)))
            printf("TRIANGULO ACUTANGULO\n");
        if (A == B  && A == C)
            printf("TRIANGULO EQUILATERO\n");
        if (A == B && A != C || A == C && A != B || B == C && B != A)
            printf("TRIANGULO ISOSCELES\n");
    }


    return 0;
}