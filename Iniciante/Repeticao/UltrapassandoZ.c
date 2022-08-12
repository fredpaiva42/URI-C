# include <stdio.h>

int UltrapassandoZ (void){

    int X, Z, contador = 2, Y;

    scanf("%d %d", &X, &Z);

    while (Z <= X){
        scanf("%d", &Z);
    }

    Y = X;

    while (X <= Z){
        X += Y;
        if (X <= Z)
            contador++;
        Y++;
    }

    printf("%d\n", contador);

    return 0;
}