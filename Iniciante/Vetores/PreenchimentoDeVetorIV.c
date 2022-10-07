# include <stdio.h>

int PreenchimentoDeVetorIV(void){
    int pares[5], impares[5], entrada, k = 0, l = 0;

    for (int i = 0; i < 15; ++i) {
        scanf("%d", &entrada);

        if(entrada % 2 == 0){
            pares[k] = entrada;
            k++;
            if (k == 5){
                k = 0;
                for (int j = 0; j < 5; ++j) {
                    printf("par[%d] = %d\n", j, pares[j]);
                }
            }

        }else {
            impares[l] = entrada;
            l++;
            if (l == 5){
                l=0;
                for (int j = 0; j < 5; ++j) {
                    printf("impar[%d] = %d\n", j, impares[j]);
                }
            }
        }
    }
    for (int i = 0; i < l; i++)
        printf("impar[%d] = %d\n", i, impares[i]);

    for (int i = 0; i < k; i++)
        printf("par[%d] = %d\n", i, pares[i]);

    return 0;
}