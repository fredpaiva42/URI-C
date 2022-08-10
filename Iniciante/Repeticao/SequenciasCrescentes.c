# include <stdio.h>

int SequenciasCrescentes (void) {
    int entrada;

    scanf("%d", &entrada);

    while (entrada != 0) {
        for (int i = 1; i <= entrada; i++){
            if (i == entrada)
                printf("%d\n", i);
            else
                printf("%d ", i);
        }
        scanf("%d", &entrada);
    }

    return 0;
}