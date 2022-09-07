#include <stdio.h>

int CrescimentoPopulacional(void){
    int PA, PB, qtd_casos;
    double taxa_crescimentoA, taxa_crescimentoB;

    scanf("%d", &qtd_casos);

    for (int i = 1; i <= qtd_casos; i++) {
        int anos = 0;
        scanf("%d %d %lf %lf", &PA, &PB, &taxa_crescimentoA, &taxa_crescimentoB);

        while (PA <= PB){
            anos++;
            PA += (int) (PA * taxa_crescimentoA)/100;
            PB += (int) (PB * taxa_crescimentoB)/100;

            if (anos > 100){
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if(anos <= 100)
            printf("%d anos.\n", anos);

    }

    return 0;
}