# include <stdio.h>

int main(void){
    int linhaMatriz, contador = 0;
    double soma = 0, media;
    char operacao[2];
    double matriz[12][12];

    scanf("%d", &linhaMatriz);
    scanf("%s", operacao);

    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            double valor;
            scanf("%lf", &valor);
            matriz[i][j] = valor;
        }
    }

    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            if (i == linhaMatriz){
                soma += matriz[i][j];
                contador++;
            }
        }
    }

    media = (soma / contador);

    if(operacao[0] == 'S')
        printf("%.1lf", soma);
    else
        printf("%.1lf", media);


    return 0;
}