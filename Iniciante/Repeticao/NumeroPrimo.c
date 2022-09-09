# include <stdio.h>

int main(void){
    int casos_teste, numero;
    scanf("%d", &casos_teste);

    for (int i = 0; i < casos_teste; ++i) {
        int contador = 0;
        scanf("%d", &numero);

        for (int j = 2; j < numero; ++j) {
            if (numero % j == 0)
                contador++;
        }
        if (contador > 0)
            printf("%d nao eh primo\n", numero);
        else
            printf("%d eh primo\n", numero);
    }
    return 0;
}