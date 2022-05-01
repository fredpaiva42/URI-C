#include <stdio.h>
#include <math.h>

int Maior() {

    int a, b, c, MaiorAB, Maior;

    scanf("%d %d %d", &a, &b, &c);

    MaiorAB = (a+b+abs(a-b))/2;

    if (c > MaiorAB) Maior = c; else Maior = MaiorAB;

    printf("%d eh o maior", Maior);

    return 0;
}