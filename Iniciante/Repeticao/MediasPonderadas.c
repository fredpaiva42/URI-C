#include <stdio.h>
 
int main() {
 
    int quantidade;
    double nota1, nota2, nota3, media;

    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++) {
        scanf("%lf %lf %lf", &nota1, &nota2, &nota3);

        media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5))/10;

        printf("%.1lf\n", media);
    }
 
    return 0;
}