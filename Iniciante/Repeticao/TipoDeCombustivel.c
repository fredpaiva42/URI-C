#include <stdio.h>

int TipoDeCombustivel() {

    int tipoDeCombustivel = 0, alcool = 0, gasolina = 0, diesel = 0;

    while (tipoDeCombustivel != 4){
        scanf("%d", &tipoDeCombustivel);

        switch (tipoDeCombustivel) {
            case 1:
                alcool++;
                break;
            case 2:
                gasolina++;
                break;
            case 3:
                diesel++;
                break;
            case 4:
                tipoDeCombustivel = 4;
                break;
        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
}