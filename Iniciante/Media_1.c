#include <stdio.h>
 
int Media_1() {
 
    double nota1, nota2, media;
    double peso1 = 3.5, peso2 = 7.5;

    scanf("%lf", &nota1);
    scanf("%lf", &nota2);

    media = ((nota1 * peso1) + (nota2 * peso2))/(peso1 + peso2);

    printf("MEDIA = %.5lf\n", media);
 
    return 0;
}