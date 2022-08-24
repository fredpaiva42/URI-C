# include <stdio.h>

int Idades (void) {
    double mediaDeIdades = 0;
    int idades, contador = 0;

    scanf("%d", &idades);

    while (idades > 0){
        contador++;
        mediaDeIdades += idades;

        scanf("%d", &idades);
    }

    printf("%.2lf\n", (mediaDeIdades/contador));
}