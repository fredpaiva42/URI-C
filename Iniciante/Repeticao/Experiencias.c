# include <stdio.h>
# include <string.h>

int Experiencias() {

    int qtd_casos = 0, qtd_cobaias = 0, total_cobaias = 0;
    int coelhos = 0, ratos = 0, sapos = 0;
    double percent_coelhos = 0, percent_ratos = 0, percent_sapos = 0;
    char tipo_cobaias[3];

    scanf("%d", &qtd_casos);

    for (int i = 0; i < qtd_casos; i++) {
        scanf("%d %s", &qtd_cobaias, &tipo_cobaias);

        total_cobaias += qtd_cobaias;

        if (strcmp(tipo_cobaias, "R") == 0)
            ratos += qtd_cobaias;
        else if (strcmp(tipo_cobaias, "S") == 0)
            sapos += qtd_cobaias;
        else if (strcmp(tipo_cobaias, "C") == 0)
            coelhos += qtd_cobaias;
    }

    percent_ratos = (ratos * 100.00) / total_cobaias;
    percent_coelhos = (coelhos * 100.00) / total_cobaias;
    percent_sapos = (sapos * 100.00) / total_cobaias;

    printf("Total: %d cobaias\n", total_cobaias);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2lf %%\n", percent_coelhos);
    printf("Percentual de ratos: %.2lf %%\n", percent_ratos);
    printf("Percentual de sapos: %.2lf %%\n", percent_sapos);

    return 0;
}