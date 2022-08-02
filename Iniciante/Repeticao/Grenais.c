#include <stdio.h>

int grenais() {

    int continua = 1, golsGremio = 0, golsInter = 0, empates = 0,
            gremio = 0, inter = 0, qtdJogos = 0;

    while (continua == 1) {
        scanf("%d %d", &golsInter, &golsGremio);

        qtdJogos++;

        if (golsInter > golsGremio)
            inter++;
        else if(golsGremio > golsInter)
            gremio++;
        else
            empates++;

        golsGremio += golsGremio;
        golsInter += golsInter;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &continua);
    }

    printf("%d grenais\n", qtdJogos);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", empates);

    if (gremio > inter)
        printf("Gremio venceu mais\n");
    else if(inter > gremio)
        printf("Inter venceu mais\n");
    else
        printf("Nao houve vencedor\n");

    return 0;
}