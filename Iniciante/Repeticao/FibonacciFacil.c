# include <stdio.h>

int FibonacciFacil (void){
    int n;

    scanf("%d", &n);

    int primeiro_termo = 0;
    int segundo_termo = 1;
    int proximo;
    int contador = 3;

    printf("%d %d", primeiro_termo, segundo_termo);

    while (contador <= n){
        if (contador <= 1)
            proximo = n;
        else{
            proximo = primeiro_termo + segundo_termo;
            primeiro_termo = segundo_termo;
            segundo_termo = proximo;
        }
        printf(" %d", proximo);
        contador++;
    }
    printf("\n");
    return 0;
}