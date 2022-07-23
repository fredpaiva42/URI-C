#include <stdio.h>

int Quadrante() {

    int primeiro, segundo, terceiro, quarto, x, y;

    scanf("%d %d", &x, &y);

    while (x != 0 && y != 0){
        primeiro = (x > 0 && y > 0);
        segundo = (x < 0 && y > 0);
        terceiro = (x < 0 && y < 0);
        quarto = (x > 0 && y < 0);

        if (primeiro)
            printf("primeiro\n");
        else if (segundo)
            printf("segundo\n");
        else if(terceiro)
            printf("terceiro\n");
        else if(quarto)
            printf("quarto\n");

        scanf("%d %d", &x, &y);
    }

    return 0;
}