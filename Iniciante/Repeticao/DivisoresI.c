# include <stdio.h>

int DivisoresI(void){
    int numero;

    scanf("%d", &numero);

    for (int i = 1; i <= numero; ++i) {
        if (numero % i == 0)
            printf("%d\n", i);
    }

    return 0;
}