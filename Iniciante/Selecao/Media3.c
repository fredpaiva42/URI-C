#include <stdio.h>

int Media3() {

    double n1, n2, n3, n4, media, nota_exame;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + n4)/10;

    printf("Media: %.1lf\n", media);

    if (media >= 7.0)
        printf("Aluno aprovado.\n");
    else if (media >= 5.0 && media <= 6.9){
        printf("Aluno em exame.\n");
        scanf("%lf", &nota_exame);
        printf("Nota do exame: %.1lf\n", nota_exame);
        media = (media + nota_exame)/2;
        if (media >= 5)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");

        printf("Media final: %.1lf\n", media);
    }
    else
        printf("Aluno reprovado.\n");

    return 0;
}